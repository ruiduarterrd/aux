#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAP_SIZE 9

int load_map(char map[MAP_SIZE][MAP_SIZE], const char *filename);

int main(int ac, char **av) {
	char map[MAP_SIZE][MAP_SIZE];
	size_t i, j;

	if (ac != 2) {
		printf("Usage: %s <map_file.txt>\n", av[0]);
		return 1;
	}
	if (load_map(map, av[1]) != 0) {
		printf("Failed to load map from %s\n", av[1]);
		return 1;
	}
	// imprime o tabuleiro
	i = 0;
	while (i < MAP_SIZE) {
		j = 0;
		while (j < MAP_SIZE) {
			printf("%c ", map[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}

// Função para carregar o mapa a partir de um arquivo
int load_map(char map[MAP_SIZE][MAP_SIZE], const char *filename) {
	FILE *file = fopen(filename, "r");
	if (!file) {
		perror("Error opening file");
		return 1;
	}

	size_t i = 0, j;
	char line[MAP_SIZE + 2]; // inclui '\n' e '\0'

	while (fgets(line, sizeof(line), file) && i < MAP_SIZE) {
		j = 0;
		while (j < MAP_SIZE && line[j] != '\n' && line[j] != '\0') {
			map[i][j] = line[j];
			j++;
		}
		i++;
	}
	fclose(file);
	return 0;
}
