/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:53:25 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/13 23:00:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_input(int key, t_game *game)
{
	int i;
	i = 0;
	if (key == 65307)
	{
		free_ptr(game);
		exit(1);
	}
	else
		player_move(key, game);
	printf("Número de passos:%d\n", game->steps);
	print_map(game);
	return (0);
}