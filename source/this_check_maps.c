/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_check_maps.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:34:49 by dmonteir          #+#    #+#             */
/*   Updated: 2021/11/14 15:34:51 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	this_check_maps(t_game *game)
{
	map_walls(game);
	check_inboard(game);
	check_floor(game);
}
