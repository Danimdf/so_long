/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:03:44 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/13 09:46:54 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

void free_ptr(t_game *game)
{
	int i;

	i = 0;
	while (game->map[i])
	{
		free(game->map[i++]);
	}
	free(game->map);
	mlx_destroy_window(game->mlx, game->mlx_win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
}

int	mlx_close(t_game *game)
{
	free_ptr(game);
	printf("\nBye Bye\n");
	exit (1);
	return (1);
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
	print_map(&game);
	mlx_key_hook(game.mlx_win, key_input, &game);
	mlx_hook(game.mlx_win, 17, 1L<<0, mlx_close, game.mlx_win);
	mlx_loop(game.mlx);
}
