/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapWalls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:38:22 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/06 19:44:08 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int map_walls(t_game *game)
{
	int thisRow;
	int thisCol;

	thisRow = 0;
	while (thisRow < game->row)
	{
		thisCol = 0;
		while (thisCol < game->col)
		{
			if (thisRow == 0 || thisRow == (game->row - 1) \
			|| thisCol == 0 || thisCol == (game->col - 1))
			{
					if (game->map[thisRow][thisCol] != '1')
					{
						printf("Map with invalids rows!\n");
						exit(1);
						return (1);
					}
			}
			thisCol++;
		}
		thisRow++;
	}
	return (0);
}