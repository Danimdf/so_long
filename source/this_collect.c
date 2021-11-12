/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_collect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:53:11 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/11 22:36:07 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int this_collect(int key, t_game *game)
{
	if (key == 'd' && game->map[game->img.position.row_pos][game->img.position.col_pos + 1] == 'C')
	{
		game->obj_map.obj_c--;
	}
	else if (key == 'a' && game->map[game->img.position.row_pos][game->img.position.col_pos - 1] == 'C')
	{
		game->obj_map.obj_c--;
	}
	else if (key == 's' && game->map[game->img.position.row_pos + 1][game->img.position.col_pos] == 'C')
	{
		game->obj_map.obj_c--;
	}
	else if (key == 'w' && game->map[game->img.position.row_pos - 1][game->img.position.col_pos] == 'C')
	{
		game->obj_map.obj_c--;
	}
	//printf("%d", game->obj_map.obj_c);
	return (0);
}