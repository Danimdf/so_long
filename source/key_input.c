/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:53:25 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/11 20:39:39 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_input(int key, t_game *game)
{
	if (key == 65307)
	{
		exit(1);
	}
	else {
		player_move(key, game);
	}
	print_map(game);
	return (0);
}