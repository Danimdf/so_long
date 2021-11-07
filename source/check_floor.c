/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_floor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:35:35 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/06 21:57:52 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int check_floor(t_game *game)
{
	int thisRow;
	int thisCol;

	thisRow = 0;
	while(thisRow < game->row)
	{
		thisCol = 0;
		while(thisCol < game->col)
		{
			if (game->map[thisRow][thisCol] != '0' && \
			game->map[thisRow][thisCol] != '1' && \
			game->map[thisRow][thisCol] != 'P' && \
			game->map[thisRow][thisCol] != 'E' && \
			game->map[thisRow][thisCol] != 'C')
			{
				printf("Invalid Map: Please enter a map with characters 0, 1, P, E, C only.\n");
				exit (1);
				return (1);
			}
			thisCol++;
		}
		thisRow++;
	}
	return (0);
}