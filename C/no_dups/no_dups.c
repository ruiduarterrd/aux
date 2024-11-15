#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(const char *str);
void ft_remove_dups(const char *str);

int main(int ac, char **av) {
	if (ac != 2)
		return write(1, "\n", 1);
	ft_remove_dups(av[1]);
	return write(1, "\n", 1);
}

size_t ft_strlen(const char *str) {
	size_t len = 0;

	if (str == NULL)
		return len;
	while (str[len] != '\0')
		len++;
	return len;
}
void ft_remove_dups(const char *str) {
	static int options[128];
	char *result;
	size_t i = 0;
	size_t j = 0;

	result = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (result == NULL)
		return;
	while (str[i] != '\0') {
		if (options[(unsigned char)str[i]] == 0) {
			options[(unsigned char)str[i]] = 1;
			result[j++] = str[i];
		}
		i++;
	}
	result[j] = '\0';
	write(1, result, j);
	free(result);
}
