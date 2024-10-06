# **************************************************************************** #
# DECLARATION DES VARIABLES
#
# MEMO :
# ar rc -> Crée une archive statique si elle n'existe pas déjà (.a) et y ajoute / remplace des fichiers .o
# -I -> Utilisé par le compilateur pour spécifier le chemin vers repertoire d'en tête

NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
AR 		= ar rc

HEADER	= libft.h
PATH_SRCS	= ./
OPTION	= -I ./

# **************************************************************************** #
# COULEURS POUR AFFICHAGE
# CODE ANSI -> https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797
# DEFAULT_COLOR -> Revient à la couleur par défaut du terminal

COLOR_1		= \033[38;5;202m
COLOR_2		= \033[38;5;203m
COLOR_3		= \033[38;5;204m
COLOR_4 	= \033[38;5;205m
COLOR_5 	= \033[38;5;206m
COLOR_6 	= \033[38;5;207m
COLOR_7 	= \033[38;5;196m
COLOR_8 	= \033[38;5;42m
COLOR_9 	= \033[38;5;220m
COLOR_10 	= \033[38;5;33m
COLOR_11 	= \033[38;5;69m
COLOR_12 	= \033[38;5;105m
COLOR_13 	= \033[38;5;141m
COLOR_14 	= \033[38;5;177m
COLOR_15 	= \033[38;5;213m
COLOR_16	= \033[38;5;225m
GREEN		= \033[0;32m
WHITE		= \033[0;97m
DEFAULT_COLOR	= \033[0;39m


# **************************************************************************** #
# SOURCES
#
# MEMO :
# La commande .c=.o ne crée pas les fichiers .o mais converti le nom des fichiers .c en .o

SRC_FILES   =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c \
				ft_putstr.c ft_split.c ft_strchr.c ft_strcmp.c ft_strdup.c \
				ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
				ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
				ft_swap.c ft_tolower.c ft_toupper.c ft_strjoinfree.c \
				ft_printf.c print_format.c get_next_line.c ft_substrfree.c \
				print_format_2.c

OBJ_FILES	= $(SRC_FILES:.c=.o)

TOTAL := $(words $(SRC_FILES))

# **************************************************************************** #
# REGLES
#
# MEMO :
# 1 -> Création des fichiers objets à partir des .c (%.o: %.c: Règle générique pour compiler les fichiers .c en fichiers .o.)
# 2 -> Création de la bibliothèque statique à partir des fichiers objets avec ar rc
# 3 -> indexation de la bibliothèque avec ranlib
#      Ca répertorie les fonctions, variables, etc, présents dans la bibliothèque et leur emplacement dans celle-ci afin d'améliorer les performances
# $< -> Fichier source. $(notdir $<) -> Fichier source sans le chemin
# $@ -> Fichier cible
# @ -> Indique à Make de ne pas afficher la commande elle-même lorsqu'elle est exécutée
# .PHONY -> Indique à Make qu'il ne s'agit pas d'une cible mais d'une action.
# Lien pour le texte en ASCII : https://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20

all : $(NAME)
	@echo ""
	@echo "$(COLOR_9)La bibliothèque Libft est prête !"
	@echo ""
	@echo "$(COLOR_10)██╗      ██╗ ██████╗  ███████╗ ████████╗"
	@echo "$(COLOR_11)██║      ██║ ██╔══██╗ ██╔════╝ ╚══██╔══╝"
	@echo "$(COLOR_12)██║      ██║ ██████╔╝ █████╗      ██║   "
	@echo "$(COLOR_13)██║      ██║ ██╔══██╗ ██╔══╝      ██║   "
	@echo "$(COLOR_14)███████╗ ██║ ██████╔╝ ██║         ██║   "
	@echo "$(COLOR_15)╚══════╝ ╚═╝ ╚═════╝  ╚═╝         ╚═╝   $(DEFAULT_COLOR)"
	@echo ""

$(NAME): $(OBJ_FILES)
			@echo ""
			@echo "$(COLOR_16)\n▓▓  Création de la bibliothèque"
			@$(AR) $(NAME) $(OBJ_FILES)

			@echo "$(COLOR_16)▓▓  Indexation de la bibliothèque"
			@ranlib $(NAME)




%.o: %.c $(HEADER)
			@clear
			@printf "$(COLOR_16)\n▓▓  Compilation de $(notdir $<)\n"
			@$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			@PERCENTAGE=$$((100 * $(COUNTER) / $(TOTAL))) ; \
			printf "▓▓  %d%% complété\r" $$PERCENTAGE
			@$(CC) $(CFLAGS) $(OPTION) -c $< -o $@

clean:
	@echo "$(COLOR_8)Nettoyage des fichiers objets...$(DEFAULT_COLOR)"
	@rm -f $(OBJ_FILES)

fclean: clean
	@echo "$(COLOR_8)Nettoyage de tous les fichiers générés...$(DEFAULT_COLOR)"
	@rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
