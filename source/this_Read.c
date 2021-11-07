/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_Read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:17:27 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/06 19:56:57 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	**this_Read(char *file, t_game *game)
{
	int		index;
	int		fd;
	int		gnl;

	game->map = columns(file, game);
	if (game->map == NULL)
	{
		printf("Error!miau\n");
		exit (1);
	}
	fd = open(file, O_RDONLY);
	index = 0;
	gnl = 1;
	while (gnl)
		gnl = get_next_line(fd, &game->map[index++]);
	game->map[index] = NULL;
	game->col = (ft_strlen(game->map[0]) - 1);
	//printf("%s", game->map[0]);
	/*int i;
	i = 0;
	while (i < index)
	{
		printf("%s", game->map[i++]);
	}*/
    /*for (int j = 0; j < game->row; j++)
    {
        for (int x = 0; x < game->col; x++)
        {
            printf("%c", game->map[j][x]);
        }
		printf("\n");
}
	printf("%s", game->obj_map.map[1]);*/
	close(fd);
	return (game->map);
}
