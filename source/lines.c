/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lines.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:22:15 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 15:54:05 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	**lines(char *file, t_game *game)
{
	int		fd;
	int		read_line;
	char	c;

	fd = open(file, O_RDONLY);
	if (!fd)
		return (NULL);
	if (!check_file(file, "ber"))
	{
		printf("Every map must have a .ber extension\n");
		exit (1);
	}
	game->row = 1;
	read_line = 1;
	while (read_line)
	{
		read_line = read(fd, &c, 1);
		if (read_line < 0)
			return (NULL);
		if (c == '\n')
			game->row++;
	}
	close(fd);
	game->map = (char **)ft_calloc(game->row + 1, sizeof(char *));
	return (game->map);
}
