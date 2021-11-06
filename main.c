/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:03:44 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/06 17:17:30 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
	{
		printf("Error! Input a valid .ber file\n");
		exit(1);
	}

	game.map = this_Read(argv[1], &game);
	if(!game.map)
		return (0);
	if (this_CheckWalls(&game) == 1)
	{
		ft_free_matriz(game.map);
		exit(1);
	}
}
