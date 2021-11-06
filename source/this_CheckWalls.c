#include "../includes/so_long.h"

int	this_CheckWalls(t_game *game)
{
	int thisRow;
	int thisCol;

	thisRow = 0;

	//printf("%d", game->col - 1);

	while (thisRow < game->row)
	{
		thisCol = 0;
		while (thisCol < game->col)
		{
			//printf("%c", game->map[thisRow][thisCol]);
			if (thisRow == 0 || thisRow == (game->row - 1) || thisCol == 0 || thisCol == (game->col - 1))
			{
				printf("%c", game->map[thisRow][thisCol]);
					if (game->map[thisRow][thisCol] != '1')
					{
						printf("Map with invalids rows!\n");
						exit(1);
						return (1);
					}
			}
			thisCol++;
		}
		thisRow++;
		//printf("\n");
	}
	return (0);
}