#include <unistd.h>

int main(int ac, char **av) {
	int seen[3] = {0, 0, 0};
	int i = 0;

	if (ac != 2)
		return 1;

	while (av[1][i] != '\0' && i < 3) {
		if (av[1][i] == 'A')
			seen[0] = 1;
		else if (av[1][i] == 'B')
			seen[1] = 1;
		else if (av[1][i] == 'C')
			seen[2] = 1;
		i++;
	}
	if (seen[0] && seen[1] && seen[2])
		write(1, "Yes", 3);
	else
		write(1, "No", 2);
	write(1, "\n", 1);
}
