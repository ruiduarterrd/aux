#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(char *str);
int ft_strcmp(const char *s1, const char *s2);

int main(int ac, char **av) {
	size_t i = 0, len;
	char *r_str;

	if (ac != 2)
		return 0;
	len = ft_strlen(av[1]);
	r_str = malloc(sizeof(char) * (len + 1));
	if (!r_str)
		return 1;
	while (len > 0)
		r_str[i++] = av[1][--len];
	r_str[i] = '\0';
	i = 0;
	if (ft_strcmp(av[1], r_str) == 0)
		return write(1, "Palindrome\n", 11);
	else
		return write(1, "Not palindrome\n", 15);
	free(r_str);
	return 0;
}

int ft_strcmp(const char *s1, const char *s2) {
	while (*s1 && *s2 && (*s1 == *s2)) {
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

size_t ft_strlen(char *str) {
	size_t i = 0;

	while (str[i] != '\0')
		i++;
	return i;
}
