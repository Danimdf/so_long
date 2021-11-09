/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:46:42 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/07 22:53:02 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H



#include "../gnl/get_next_line.h"
#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct s_img
{
	void	*img_ptr;
}	t_img;

typedef struct s_map
{
	int obj_P;
	int obj_E;
	int obj_C;

}	t_map;

typedef struct s_game
{
	t_img	img;
	t_map	obj_map;
	char	**map;
	int		row;
	int		col;
	void	*mlx;
	void	*mlx_win;
}	t_game;



int	main(int argc, char **argv);

char	**this_Read(char *file, t_game *game);

char	**columns(char *file, t_game *game);

int	ft_count_line(char **matriz);

void	ft_free_matriz(char **matriz);

//print map
int print_map(t_game *game);
int load_sprites (t_game *game);



//see if the map is ok
int	check_File(char *file, char *sufx);
void this_check_maps (t_game *game);
int	map_walls(t_game *game);
int check_inboard(t_game *game);
int check_floor(t_game *game);

//libft
int ft_strcmp(const char *str1, const char *str2);
void	*ft_memset(void *str, int c, size_t n);








#endif
