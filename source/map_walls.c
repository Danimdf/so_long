/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_walls.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:38:22 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 19:54:10 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	map_walls(t_game *game)
{
	int	this_row;
	int	this_col;

	this_row = 0;
	while (this_row < game->row)
	{
		this_col = 0;
		while (this_col < game->col)
		{
			if (this_row == 0 || this_row == (game->row - 1) \
			|| this_col == 0 || this_col == (game->col - 1))
			{
				if (game->map[this_row][this_col] != '1')
				{
					printf("Map with invalids rows!\n");
					exit(1);
					return (1);
				}
			}
			this_col++;
		}
		this_row++;
	}
	return (0);
}
