
#include <unistd.h>
#include "lib.h"

void	print_grid(int grid [4][4])
{
	int		line;
	int		column;
	char	p;

	line = 0;
	while (line < 4)
	{
		column = 0;
		while (column < 4)
		{
			p = grid[line][column] + '0';
			write (1, &p, 1);
			if (column < 3)
				write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}

void	print_criteria(int arr[4][4])
{
	int		line;
	int		col;
	char	answer;

	line = 0;
	while (line < 4)
	{
		col = 0;
		while (col < 3)
		{
			answer = arr[line][col] + '0';
			write (1, &answer, 1);
			write (1, " ", 1);
			col++;
		}
		answer = arr[line][col] + '0';
		write (1, &answer, 1);
		write (1, "\n", 1);
		line++;
	}
}
