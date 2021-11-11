/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:19:51 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/11 20:38:53 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int player_move(int key, t_game *game)
{
	if (key == 'd' && game->map[game->img.position.row_pos][game->img.position.col_pos + 1] != '1')
	{
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[game->img.position.row_pos][++game->img.position.col_pos] = 'P';
	}
	if (key == 'a' && game->map[game->img.position.row_pos][game->img.position.col_pos - 1] != '1')
	{
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[game->img.position.row_pos][--game->img.position.col_pos] = 'P';
	}
	if (key == 'w' && game->map[game->img.position.row_pos - 1][game->img.position.col_pos] != '1')
	{
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[--game->img.position.row_pos][game->img.position.col_pos] = 'P';
	}
	if (key == 's' && game->map[game->img.position.row_pos + 1][game->img.position.col_pos] != '1')
	{
		game->map[game->img.position.row_pos][game->img.position.col_pos] = '0';
		game->map[++game->img.position.row_pos][game->img.position.col_pos] = 'P';
	}
	return (0);
}