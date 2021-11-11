/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:22:59 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/11 18:45:34 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int load_sprites (t_game *game, int this_col, int this_row)
{
	if(game->map[this_row][this_col] == '0')
		game->img.img_ptr = mlx_xpm_file_to_image(game->mlx, "images/floor.xpm", &game->img.img_width, &game->img.img_height);
	if(game->map[this_row][this_col] == '1')
		game->img.img_ptr = mlx_xpm_file_to_image(game->mlx, "images/tree.xpm", &game->img.img_width, &game->img.img_height);
	if(game->map[this_row][this_col] == 'P')
		game->img.img_ptr = mlx_xpm_file_to_image(game->mlx, "images/princess.xpm", &game->img.img_width, &game->img.img_height);
	if(game->map[this_row][this_col] == 'E')
		game->img.img_ptr = mlx_xpm_file_to_image(game->mlx, "images/portal.xpm", &game->img.img_width, &game->img.img_height);
	if(game->map[this_row][this_col] == 'C')
		game->img.img_ptr = mlx_xpm_file_to_image(game->mlx, "images/diamond.xpm", &game->img.img_width, &game->img.img_height);
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img.img_ptr, (this_col * 32), (this_row * 32));
	mlx_destroy_image(game->mlx, game->img.img_ptr);
	return (0);
}
