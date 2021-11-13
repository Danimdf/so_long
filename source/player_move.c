/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:19:51 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/13 23:16:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int player_move(int key, t_game *game)
{
	if (key == 'd' && \
	game->map[game->img.position.row_pos][game->img.position.col_pos + 1] != '1')
	{
		if (game->map[game->img.position.row_pos][game->img.position.col_pos + 1] == 'E' && \
		game->obj_map.obj_c != 0)
			return (0);
		this_collect(key, game);
		bye(key, game);
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[game->img.position.row_pos][++game->img.position.col_pos] = 'P';
		steps(key, game);
	}
	if (key == 'a' && \
	game->map[game->img.position.row_pos][game->img.position.col_pos - 1] != '1')
	{
		if (game->map[game->img.position.row_pos][game->img.position.col_pos - 1] == 'E' && \
		game->obj_map.obj_c != 0)
			return (0);
		this_collect(key, game);
		bye(key, game);
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[game->img.position.row_pos][--game->img.position.col_pos] = 'P';
		steps(key, game);
	}
	if (key == 'w' && \
	game->map[game->img.position.row_pos - 1][game->img.position.col_pos] != '1')
	{
		if (game->map[game->img.position.row_pos - 1][game->img.position.col_pos] == 'E' && \
		game->obj_map.obj_c != 0)
			return (0);
		this_collect(key, game);
		bye(key, game);
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[--game->img.position.row_pos][game->img.position.col_pos] = 'P';
		steps(key, game);
	}
	if (key == 's' && \
	game->map[game->img.position.row_pos + 1][game->img.position.col_pos] != '1')
	{
		if (game->map[game->img.position.row_pos + 1][game->img.position.col_pos] == 'E' && \
		game->obj_map.obj_c != 0)
			return (0);
		this_collect(key, game);
		bye(key, game);
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[++game->img.position.row_pos][game->img.position.col_pos] = 'P';
		steps(key, game);
	}
	return (0);
}