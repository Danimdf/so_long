/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bye.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:05:47 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/11 21:19:02 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int bye(t_game *game)
{
	if (game->obj_map.obj_c == 0)
	{
		printf("Bye Bye");
		exit (0);
	}
	return (0);
}