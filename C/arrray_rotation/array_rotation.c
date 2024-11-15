#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av) {
	if (ac != 2)
		return 1;

	return 0;
}

int ft_atoi(const char *str) {
	int sign = 1, num = 0;
	char *s;

	s = (char *)str;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+') {
		if (*s == '-')
			sign = sign * -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		num = num * 10 + (*s++ - '0');
	return (num * sign);
}
