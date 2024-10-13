/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:40:17 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/13 23:02:56 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
