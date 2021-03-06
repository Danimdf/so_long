/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:02:03 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 15:32:30 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	steps(int key, t_game *game)
{
	game->steps++;
	if (key == 'd' && \
	game->map[game->img.pos.row_pos][game->img.pos.col_pos + 1] == '1')
		game->steps--;
	else if (key == 'a' && \
	game->map[game->img.pos.row_pos][game->img.pos.col_pos - 1] == '1')
		game->steps--;
	else if (key == 's' && \
	game->map[game->img.pos.row_pos + 1][game->img.pos.col_pos] == '1')
		game->steps--;
	else if (key == 'w' && \
	game->map[game->img.pos.row_pos - 1][game->img.pos.col_pos] == '1')
		game->steps--;
	return (0);
}
