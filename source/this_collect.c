/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_collect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:53:11 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 19:31:57 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	this_collect(int key, t_game *game)
{
	if (key == 'd' && \
	game->map[game->img.pos.row_pos][game->img.pos.col_pos + 1] == 'C')
		game->obj.obj_c--;
	else if (key == 'a' && \
	game->map[game->img.pos.row_pos][game->img.pos.col_pos - 1] == 'C')
		game->obj.obj_c--;
	else if (key == 's' && \
	game->map[game->img.pos.row_pos + 1][game->img.pos.col_pos] == 'C')
		game->obj.obj_c--;
	else if (key == 'w' && \
	game->map[game->img.pos.row_pos - 1][game->img.pos.col_pos] == 'C')
		game->obj.obj_c--;
	bye(key, game);
	steps(key, game);
	return (0);
}
