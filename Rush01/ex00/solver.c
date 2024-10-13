/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoniowrobleskifilho <antoniowrobleski    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:17:32 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/13 12:03:42 by antoniowrob      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib.h"

int	check_valid(int grid[4][4], int lin, int col, int num)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (grid[lin][i] == num)
            return (0);
        i++;
    }

    i = 0;
    while (i < 4)
    {
        if (grid[i][col] == num)
            return (0);
        i++;
    }

    return (1);
}

int	solve_grid(int grid[4][4], int line, int col, int *hints)
{
    int	num;

    num = 1;
    if (line == 4)
        return (check_views(grid, hints));
    if (col == 4)
        return (solve_grid(grid, line + 1, 0, hints));
    while (num <= 4)
    {
        if (check_valid(grid, line, col, num))
        {
            grid[line][col] = num;
            if (solve_grid(grid, line, col + 1, hints))
                return (1);
            grid[line][col] = 0;
        }
        num++;
    }
    return (0);
}

void	fill_hints(int *hints, int arr[4][4])
{
    int	i;

    i = 0;
    while (i < 16)
    {
        hints[i] = arr[i / 4][i % 4];
        i++;
    }
}

void	process_hint_print(int grid[4][4], int arr[4][4])
{
    int	hints[16];

    fill_hints(hints, arr);
    if (solve_grid(grid, 0, 0, hints))
        print_grid(grid);
    else
        write(1, "Error\n", 6);
}

void	solve(int arr[4][4])
{
    int	grid[4][4];
    int	line;
    int	col;

    line = 0;
    while (line < 4)
    {
        col = 0;
        while (col < 4)
        {
            grid[line][col] = 0;
            col++;
        }
        line++;
    }
    process_hint_print(grid, arr);
}