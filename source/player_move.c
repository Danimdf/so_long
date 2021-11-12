/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:19:51 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/11 22:22:14 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int player_move(int key, t_game *game)
{
	if (key == 'd' && game->map[game->img.position.row_pos][game->img.position.col_pos + 1] != '1')
	{
		this_collect(key, game);
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[game->img.position.row_pos][++game->img.position.col_pos] = 'P';
		bye(game);
	}
	else if (key == 'a' && game->map[game->img.position.row_pos][game->img.position.col_pos - 1] != '1')
	{
		this_collect(key, game);
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[game->img.position.row_pos][--game->img.position.col_pos] = 'P';
		bye(game);
	}
	else if (key == 'w' && game->map[game->img.position.row_pos - 1][game->img.position.col_pos] != '1')
	{
		this_collect(key, game);
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[--game->img.position.row_pos][game->img.position.col_pos] = 'P';
		bye(game);
	}
	else if (key == 's' && game->map[game->img.position.row_pos + 1][game->img.position.col_pos] != '1')
	{
		this_collect(key, game);
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[++game->img.position.row_pos][game->img.position.col_pos] = 'P';
		bye(game);
	}
	//printf("%d", game->obj_map.obj_c);
	return (0);
}