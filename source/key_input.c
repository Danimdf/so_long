/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:53:25 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/13 09:55:31 by dmonteir         ###   ########.fr       */
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
	printf("Número de passos:%c\n", game->steps);
	print_map(game);
	return (0);
}