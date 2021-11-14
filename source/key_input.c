/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:53:25 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 15:17:09 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_input(int key, t_game *game)
{
	int	i;

	i = 0;
	if (key == 65307)
		mlx_close(game);
	else
		player_move(key, game);
	printf("Number of steps:%d\n", game->steps);
	print_map(game);
	return (0);
}
