
INC=%%%%

NAME = so_long
CC = clang
CFLAGS = -Wall -Wextra -Werror

INCLIB = $(INC)/../minilibx-linux
INCLUDE = ./include

//OBJS = $(FILES:.c=.o)

FILES = main.c \
		./source/check_File.c \
		./utils/ft_strcmp.c \
		./utils/ft_memset.c \
		./source/columns.c \
		./source/ft_count_line.c \
		./gnl/get_next_line.c \
		./gnl/get_next_line_utils.c \
		./source/this_Read.c \
		./source/this_check_maps.c \
		./source/map_walls.c \
		./source/check_inboard.c \
		./source/check_floor.c \
		./source/print_map.c \
		./source/load_sprites.c \
		./source/init_position.c \
		./source/key_input.c \
		./source/player_move.c \
		./source/this_collect.c \
		./source/bye.c \





LFLAGS = -L.. -lmlx -L$(INCLIB) -lXext -lX11 -lm

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -g $(CFLAGS) -I $(INCLUDE) -o $(NAME) $(FILES) $(LFLAGS)

clean:
		$(RM) $(OBJS)

fclean:
		${RM} ${NAME} ${OBJS}

re:		fclean all


.PHONY: clean fclean all re
