#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_word_count(const char *str, char c);
size_t ft_strlen(const char *s);
char **ft_split(char const *s, char c);
char *ft_substr(char const *s, unsigned int start, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strdup(const char *s);

int main(int ac, char **av) {
	char **strs, *longest_str = NULL;
	size_t i = 0, max_len = 0, len;

	if (ac != 2)
		return 1;
	strs = ft_split(av[1], ' ');
	while (strs[i] != NULL) {
		len = ft_strlen(strs[i]);
		if (len > max_len) {
			max_len = len;
			longest_str = strs[i];
		}
		i++;
	}
	if (longest_str)
		printf("Biggest word: %s\n", longest_str);
	i = 0;
	while (strs[i] != NULL) {
		free(strs[i]);
		i++;
	}
	free(strs);
	return 0;
}

size_t ft_strlen(const char *s) {
	size_t len = 0;

	if (!s)
		return len;
	while (s[len])
		len++;
	return len;
}

char **ft_split(char const *s, char c) {
	char **strs;
	size_t i = 0, len = 0;

	if (s == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	while (*s) {
		if (*s != c) {
			len = 0;
			while (*s && *s != c) {
				s++;
				len++;
			}
			strs[i++] = ft_substr(s - len, 0, len);
		} else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}

char *ft_substr(char const *s, unsigned int start, size_t len) {
	char *substr;
	size_t size;

	if (!s)
		return NULL;
	if (start >= ft_strlen(s))
		return ft_strdup("");
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return NULL;
	ft_strlcpy(substr, s + start, len + 1);
	return substr;
}

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
	size_t i, len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return len;
	while ((size - 1) > i && src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return len;
}

char *ft_strdup(const char *s) {
	char *str, *p;

	if (!s)
		return NULL;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return NULL;
	p = str;
	while (*s)
		*p++ = *s++;
	*p = '\0';
	return str;
}

int ft_word_count(const char *str, char c) {
	int words = 0;

	while (*str) {
		if (*str != c) {
			words++;
			while (*str && *str != c)
				str++;
		} else
			str++;
	}
	return words;
}
