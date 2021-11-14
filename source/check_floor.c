/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_floor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:35:35 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 15:36:35 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_floor(t_game *game)
{
	int	this_row;
	int	this_col;

	this_row = 0;
	while (this_row < game->row)
	{
		this_col = 0;
		while (this_col < game->col)
		{
			if (game->map[this_row][this_col] != '0' && \
			game->map[this_row][this_col] != '1' && \
			game->map[this_row][this_col] != 'P' && \
			game->map[this_row][this_col] != 'E' && \
			game->map[this_row][this_col] != 'C')
			{
				printf("Invalid Map: Please enter a map \
				with characters 0, 1, P, E, C only.\n");
				exit (1);
				return (1);
			}
			this_col++;
		}
		this_row++;
	}
	return (0);
}
