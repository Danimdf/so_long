/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:19:51 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 19:10:43 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	this_down(int key, t_game *game)
{
	if (game->map[game->img.pos.row_pos + 1][game->img.pos.col_pos] == 'E' \
	&& game->obj.obj_c != 0)
		return ;
	this_collect(key, game);
	game->map[game->img.pos.row_pos][game->img.pos.col_pos] = '0';
	game->map[++game->img.pos.row_pos][game->img.pos.col_pos] = 'P';
}

void	this_up(int key, t_game *game)
{
	if (game->map[game->img.pos.row_pos - 1][game->img.pos.col_pos] == 'E' \
	&& game->obj.obj_c != 0)
		return ;
	this_collect(key, game);
	game->map[game->img.pos.row_pos][game->img.pos.col_pos] = '0';
	game->map[--game->img.pos.row_pos][game->img.pos.col_pos] = 'P';
}

void	this_rigth(int key, t_game *game)
{
	if (game->map[game->img.pos.row_pos][game->img.pos.col_pos + 1] == 'E' \
	&& game->obj.obj_c != 0)
		return ;
	this_collect(key, game);
	game->map[game->img.pos.row_pos][game->img.pos.col_pos] = '0';
	game->map[game->img.pos.row_pos][++game->img.pos.col_pos] = 'P';
}

void	this_left(int key, t_game *game)
{
	if (game->map[game->img.pos.row_pos][game->img.pos.col_pos - 1] == 'E' \
	&& game->obj.obj_c != 0)
		return ;
	this_collect(key, game);
	game->map[game->img.pos.row_pos][game->img.pos.col_pos] = '0';
	game->map[game->img.pos.row_pos][--game->img.pos.col_pos] = 'P';
}

void	player_move(int key, t_game *game)
{
	if (key == 'd' && \
	game->map[game->img.pos.row_pos][game->img.pos.col_pos + 1] != '1')
		this_rigth(key, game);
	if (key == 'a' && \
	game->map[game->img.pos.row_pos][game->img.pos.col_pos - 1] != '1')
		this_left(key, game);
	if (key == 'w' && \
	game->map[game->img.pos.row_pos - 1][game->img.pos.col_pos] != '1')
		this_up(key, game);
	if (key == 's' && \
	game->map[game->img.pos.row_pos + 1][game->img.pos.col_pos] != '1')
		this_down(key, game);
}
