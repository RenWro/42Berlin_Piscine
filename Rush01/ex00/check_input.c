/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:56:43 by damohame          #+#    #+#             */
/*   Updated: 2024/10/13 23:02:58 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	error_detector(int *array)
{
	int	j;

	j = 0;
	write (1, "Error", 5);
	write (1, "\n", 1);
	while (j < 16)
	{
		array[j] = 0;
		j++;
	}
}

int	check_length(char *argv[], int *array)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (argv[1][i] != '\0')
	{
		i++;
		count++;
	}
	if (count != 31)
	{
		error_detector(array);
		return (1);
	}
	return (0);
}

int	check_spacing(char *argv[], int *array)
{
	int	x;

	x = 1;
	while (x <= 29)
	{
		if (argv[1][x] != ' ')
		{
			error_detector(array);
			break ;
			return (1);
		}
		x = x + 2;
	}
	return (0);
}

int	check_number(char *argv[], int *array)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (j <= 30)
	{
		if (argv[1][j] >= '1' && argv[1][j] <= '4' )
		{
			array[i] = argv[1][j] - '0';
			j = j + 2;
			i++;
		}
		else
		{
			error_detector(array);
			break ;
			return (1);
		}
	}
	return (0);
}

int	*atoi_modified(char *argv[], int *pointer)
{
	int	z;

	z = check_length(argv, pointer);
	if (z != 1)
	{
		z = check_spacing(argv, pointer);
		if (z != 1)
		{
			z = check_number(argv, pointer);
			if (z != 1)
			{
				return (pointer);
			}
		}
	}
	return (pointer);
}
