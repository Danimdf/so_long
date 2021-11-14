/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:35:17 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 15:24:43 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	init_position(t_game *game)
{
	int	this_row;
	int	this_col;

	this_row = 0;
	while (this_row < game->row)
	{
		this_col = 0;
		while (this_col < game->col)
		{
			if (game->map[this_row][this_col] == 'P')
			{
				game->img.pos.row_pos = this_row;
				game->img.pos.col_pos = this_col;
			}
			this_col++;
		}
		this_row++;
	}
	return (0);
}
