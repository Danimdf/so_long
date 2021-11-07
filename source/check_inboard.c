/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inboard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:17:47 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/06 20:46:50 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int check_inboard(t_game *game)
{
	int thisRow;
	int thisCol;

	thisRow = 1;
	while (thisRow < game->row)
	{
		thisCol = 1;
		while (thisCol <= game->col)
		{
			if(game->map[thisRow][thisCol] == 'P' && \
			 game->map[thisRow][thisCol] == 'E' && \
			 game->map[thisRow][thisCol] == 'C')
			 {
				 exit (1);
				 return (0);
			 }else {
				 printf("Invalid Map! Every map must have PEC\n");
				 exit (1);
				 return (1);
			 }
			 thisCol++;
		}
		thisRow++;
	}
	return (0);
}