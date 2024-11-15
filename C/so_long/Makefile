NAME = ./a.out

SRC_DIR = ./src
OBJ_DIR = ./obj

SRC_FILES = $(SRC_DIR)/main.c
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./mlx
LIBRARIES = -L./mlx -lmlx_Linux -lX11 -lXext -lm
VALGRIND_FLAGS = --leak-check=full --show-leak-kinds=all --track-origins=yes

# Regra principal: compila o executavel
all: $(NAME)

# Compilar o executavel a partir dos objetos
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBRARIES)

# Compilar os arquivos objeto
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# Limpar os arquivos compilados
clean:
	rm -rf $(OBJ_DIR)

# Limpar tudo (inclui o executavel)
fclean: clean
	rm -f $(NAME)

# Reconstruir o projeto do zero
re: fclean all

# Regra para compilar com Valgrind
valgrind: $(NAME)
	valgrind $(VALGRIND_FLAGS) ./$(NAME)

.PHONY: all clean fclean re
