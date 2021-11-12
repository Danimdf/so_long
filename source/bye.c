/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bye.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:05:47 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/12 20:26:59 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int bye(int key, t_game *game)
{
	if (key == 'd' && game->map[game->img.position.row_pos][game->img.position.col_pos + 1] == 'E')
	{
		if (game->obj_map.obj_c != 0)
			printf("Please, collect all diamonds!!!!");
		else
			mlx_close(game);
	}
	else if (key == 'a' && game->map[game->img.position.row_pos][game->img.position.col_pos - 1] == 'E')
	{
		if (game->obj_map.obj_c != 0)
			printf("Please, collect all diamonds!!!!");
		else
			mlx_close(game);
	}
	else if (key == 's' && game->map[game->img.position.row_pos + 1][game->img.position.col_pos] == 'E')
	{
		if (game->obj_map.obj_c != 0)
			printf("Please, collect all diamonds!!!!");
		else
			mlx_close(game);
	}
	else if (key == 'w' && game->map[game->img.position.row_pos - 1][game->img.position.col_pos] == 'E')
	{
		if (game->obj_map.obj_c != 0)
			printf("Please, collect all diamonds!!!!");
		else
			mlx_close(game);
	}
	return (0);
}