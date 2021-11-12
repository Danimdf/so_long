/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inboard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:17:47 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/11 21:16:50 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int check_inboard(t_game *game)
{
	int thisRow;
	int thisCol;

	game->obj_map.obj_p = 0;
	game->obj_map.obj_e = 0;
	game->obj_map.obj_c = 0;
	thisRow = 0;
	while (thisRow < game->row)
	{
		thisCol = 0;
		while (thisCol <= game->col)
		{
			if (game->map[thisRow][thisCol] == 'P')
				game->obj_map.obj_p++;
			if (game->map[thisRow][thisCol] == 'E')
				game->obj_map.obj_e++;
			if (game->map[thisRow][thisCol] == 'C')
				game->obj_map.obj_c++;
			thisCol++;
		}
		thisRow++;
	}
	if (game->obj_map.obj_p != 1  || \
	game->obj_map.obj_e != 1 || game->obj_map.obj_c == 0)
	{
		printf("Map Invalid: Every map must have a P, an E and at least a C\n");
		exit(1);
		return (1);
	}
	return (0);
}