/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:22:59 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/08 23:07:00 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int load_sprites (t_game *game)
{
	int this_row;
	int this_col;
	int		img_width;
	int		img_height;
	this_row = 0;
	this_col = 0;
	img_width = 32;
	img_height = 32;

	if(game->map[this_row][this_col] == '0')
	{
		game->img.img_ptr = mlx_xpm_file_to_image(game->mlx, "..sprites/SpriteFloor.xpm", &img_width, &img_height);
		mlx_put_image_to_window(game->mlx,game->mlx_win, game->img.img_ptr, 5, 5);
	}
	return (0);
}