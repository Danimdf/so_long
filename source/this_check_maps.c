#include "../includes/so_long.h"

void	this_check_maps(t_game *game)
{
	map_walls(game);
	check_inboard(game);
	check_floor(game);
}