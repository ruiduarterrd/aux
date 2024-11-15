#include "../mlx/mlx.h"
#include <X11/keysym.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define WHITE "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"

typedef struct s_mlx {
		void *con;
		void *win;
		int win_size_x;
		int win_size_y;
		char *win_title;
} t_mlx;
