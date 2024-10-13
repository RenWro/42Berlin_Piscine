/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:41:12 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/13 23:02:53 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib.h"
#include <stdlib.h>

void	dimensional_clue(int *array, int clues[4][4])
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			clues[i][j] = array[count];
			j++;
			count++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	array[16];
	int	*pointer;
	int	clues[4][4]; 

	pointer = array;
	if (argc != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (1);
	}
	atoi_modified(argv, pointer);
	if (pointer[0] == 0)
		return (0);
	dimensional_clue(pointer, clues);
	solve(clues);
	return (0);
}
