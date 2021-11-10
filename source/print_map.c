/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:12:02 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/09 20:22:18 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int print_map(t_game *game)
{
	int this_row;
	int this_col;

	this_row = 0;
	while (this_row < game->row)
	{
		this_col = 0;
		while (this_col < game->col)
		{
			load_sprites(game, this_col, this_row);
			this_col++;
		}
		this_row++;
	}
	return (0);
}