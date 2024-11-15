#include "main.h"

int main(int ac, char **av) {
	(void)ac;
	(void)av;
	t_mlx mlx;

	// ft_init_mlx
	mlx.con = mlx_init();
	if (mlx.con == NULL) {
		printf(RED "KO -> mlx_init\n" WHITE);
		return 1;
	}

	mlx.win_size_x = 1900 / 2;
	mlx.win_size_y = 1080 / 2;
	mlx.win_title = "SO_LONG";
	mlx.win =
		mlx_new_window(mlx.con, mlx.win_size_x, mlx.win_size_y, mlx.win_title);
	if (mlx.win == NULL) {
		printf(RED "KO -> mlx_new_window\n" WHITE);
		return 1;
	}

	mlx_loop(mlx.con);
	return 0;
}
