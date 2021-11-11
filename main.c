/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:03:44 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/11 19:37:31 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

int	mlx_close()
{
	exit(0);
}

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
	this_check_maps(&game);
	game.mlx = mlx_init();
	game.mlx_win = mlx_new_window(game.mlx, game.col * 32, game.row * 32, "So_long");
	init_position(&game);
	//printf("%d\n", game.img.position.col_pos);
	print_map(&game);
	//printf("%d\n", game.img.position.col_pos);
	mlx_key_hook(game.mlx_win, key_input, &game);
	mlx_hook(game.mlx_win, 17, 1L<<0, mlx_close, game.mlx_win);

	mlx_loop(game.mlx);
}
