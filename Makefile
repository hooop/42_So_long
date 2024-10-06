NAME        =   so_long

CC          =   gcc
CFLAGS      =   -Wall -Werror -Wextra -g

# Répertoires
MDT_DIR     =   mandatory/
SRC_DIR     =   src/
OBJ_DIR     =   obj/mandatory/src/
LIBFT_DIR   =   libft/
MLX_DIR     =   mlx/ 

# Fichiers sources
SL_SRCS     =   so_long.c check_valid_path.c checker.c end_screen.c \
                errors.c file_to_image.c ft_free.c \
                generate_map_array.c key_hook.c \
                map_printer.c movements.c

# Construction des chemins pour les fichiers sources et objets
SRCS        =   $(addprefix $(MDT_DIR)$(SRC_DIR)/, $(SL_SRCS))
OBJS        =   $(addprefix $(OBJ_DIR), $(SL_SRCS:.c=.o))

# Règle pour compiler les fichiers objets
$(OBJ_DIR)%.o : $(MDT_DIR)$(SRC_DIR)/%.c Makefile
	@mkdir -p $(dir $@)
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -c $< -o $@

# Cible principale
all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR) 
	@$(CC) $(OBJS) -o $(NAME) -L$(LIBFT_DIR) -lft -L$(MLX_DIR) -lmlx -lm -lpthread -lX11 -lXext

# Règles de nettoyage
clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT_DIR) 
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
