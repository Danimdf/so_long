/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:06:39 by marvin            #+#    #+#             */
/*   Updated: 2021/11/13 23:31:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int steps (int key, t_game *game)
{
    if (key == 'd' && game->map[game->img.position.row_pos][game->img.position.col_pos + 1] != '1')
	{
		game->steps++;
	}
	else if (key == 'a' && game->map[game->img.position.row_pos][game->img.position.col_pos - 1] != '1')
	{
		game->steps++;
	}
	else if (key == 's' && game->map[game->img.position.row_pos + 1][game->img.position.col_pos] != '1')
	{
		game->steps++;
	}
	else if (key == 'w' && game->map[game->img.position.row_pos - 1][game->img.position.col_pos] != '1')
	{
		game->steps++;
	}
    return (0);
}