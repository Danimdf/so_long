/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inboard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:17:47 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 19:13:56 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_nb_items(t_game *game)
{
	if (game->obj.obj_p != 1 || \
	game->obj.obj_e != 1 || game->obj.obj_c == 0)
	{
		printf("Map Invalid: Every map must have a P, an E and at least a C\n");
		mlx_close(game);
	}
	return (0);
}

int	check_inboard(t_game *game)
{
	game->obj.obj_p = 0;
	game->obj.obj_e = 0;
	game->obj.obj_c = 0;
	game->obj.this_row = 0;
	while (game->obj.this_row < game->row)
	{
		game->obj.this_col = 0;
		while (game->obj.this_col <= game->col)
		{
			if (game->map[game->obj.this_row][game->obj.this_col] == 'P')
				game->obj.obj_p++;
			if (game->map[game->obj.this_row][game->obj.this_col] == 'E')
				game->obj.obj_e++;
			if (game->map[game->obj.this_row][game->obj.this_col] == 'C')
				game->obj.obj_c++;
			game->obj.this_col++;
		}
		game->obj.this_row++;
	}
	check_nb_items(game);
	return (0);
}
