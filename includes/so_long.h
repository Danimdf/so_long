/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:46:42 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 19:31:13 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include"../gnl/get_next_line.h"
# include <mlx.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_vector
{
	int	row_pos;
	int	col_pos;
}	t_vector;

typedef struct s_img
{
	t_vector	pos;
	void		*img_ptr;
	int			img_width;
	int			img_height;
}	t_img;

typedef struct s_map
{
	int	this_row;
	int	this_col;
	int	obj_p;
	int	obj_e;
	int	obj_c;
}	t_map;

typedef struct s_game
{
	t_img	img;
	t_map	obj;
	char	**map;
	int		row;
	int		col;
	void	*mlx;
	void	*mlx_win;
	int		steps;
}	t_game;

int		main(int argc, char **argv);

char	**this_read_col(char *file, t_game *game);

char	**lines(char *file, t_game *game);

int		mlx_close(t_game *game);

int		this_collect(int key, t_game *game);

int		bye(int key, t_game *game);

void	free_ptr(t_game *game);

//move
int		init_position(t_game *game);
int		key_input(int key, t_game *game);
void	player_move(int key, t_game *game);
int		steps(int key, t_game *game);
void	this_left(int key, t_game *game);
void	this_right(int key, t_game *game);
void	this_up(int key, t_game *game);
void	this_down(int key, t_game *game);

//print map
int		print_map(t_game *game);
int		load_sprites(t_game *game, int this_col, int this_row);

//see if the map is ok
int		check_file(char *file, char *sufx);
void	this_check_maps(t_game *game);
int		map_walls(t_game *game);
int		check_inboard(t_game *game);
int		check_floor(t_game *game);
int		ft_strcmp(const char *str1, const char *str2);
int		check_nb_items(t_game *game);

//libft
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);

#endif
