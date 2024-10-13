/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:39:53 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/13 23:02:57 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	check_column_top(int grid[4][4], int col, int *hints)
{
	int	row;
	int	max_height;
	int	visible_count;

	row = 0;
	max_height = 0;
	visible_count = 0;
	while (row < 4)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			visible_count++;
		}
		row++;
	}
	return (visible_count == hints[col]);
}

int	check_column_bottom(int grid[4][4], int col, int *hints)
{
	int	row;
	int	max_height;
	int	visible_count;

	row = 3;
	max_height = 0;
	visible_count = 0;
	while (row >= 0)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			visible_count++;
		}
		row--;
	}
	return (visible_count == hints[4 + col]);
}

int	check_row_left(int grid[4][4], int row, int *hints)
{
	int	col;
	int	max_height;
	int	visible_count;

	col = 0;
	max_height = 0;
	visible_count = 0;
	while (col < 4)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			visible_count++;
		}
		col++;
	}
	return (visible_count == hints[8 + row]);
}

int	check_row_right(int grid[4][4], int row, int *hints)
{
	int	col;
	int	max_height;
	int	visible_count;

	col = 3;
	max_height = 0;
	visible_count = 0;
	while (col >= 0)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			visible_count++;
		}
		col--;
	}
	return (visible_count == hints[12 + row]);
}

int	check_views(int grid[4][4], int *hints)
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col < 4)
	{
		if (!check_column_top(grid, col, hints)
			|| !check_column_bottom(grid, col, hints))
		{
			return (0);
		}
		col++;
	}
	while (row < 4)
	{
		if (!check_row_left(grid, row, hints)
			|| !check_row_right(grid, row, hints))
		{
			return (0);
		}
		row++;
	}
	return (1);
}
