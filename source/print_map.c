/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:12:02 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/07 22:31:02 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int print_map(t_game *game)
{
	int thisRow;
	int thisCol;

	thisRow = 0;
	thisCol = 0;
	while (thisRow < game->row)
	{
		thisCol = 0;
		while (thisCol < game->col)
		{
			load_sprites(game);
			thisCol++;
		}
		thisRow++;
	}
	return (0);
}