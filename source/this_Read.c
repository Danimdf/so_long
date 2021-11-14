/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_Read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:17:27 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 13:34:10 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	**this_Read(char *file, t_game *game)
{
	int		index;
	int		fd;
	int		gnl;

	game->map = lines(file, game);
	if (game->map == NULL)
	{
		printf("invalid ptr: Please add a valid map\n");
		exit (1);
	}
	fd = open(file, O_RDONLY);
	index = 0;
	gnl = 1;
	while (gnl)
		gnl = get_next_line(fd, &game->map[index++]);
	game->map[index] = NULL;
	game->col = (ft_strlen(game->map[0]) - 1);
	close(fd);
	return (game->map);
}
