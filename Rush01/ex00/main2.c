/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoniowrobleskifilho <antoniowrobleski    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:53:51 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/13 11:49:25 by antoniowrob      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib.h"

void	solve(int arr[4][4]);

void	initialize(char *str, int *arrlinecol, int arr[4][4])
{
	if (arrlinecol[1] == 4)
	{
		arrlinecol[1] = 0;
		arrlinecol[2] += 1;
	}
	arr[arrlinecol[2]][arrlinecol[1]] = str[arrlinecol[0]] - '0';
	arrlinecol[1]++;
	arrlinecol[0]++;
}

int	input_to_arr(char *str, int *arrlinecol, int arr[4][4])
{
	while (str[arrlinecol[0]] != '\0')
	{
		if (str[arrlinecol[0]] >= '1' && str[arrlinecol[0]] <= '4')
			initialize(str, arrlinecol, arr);
		else if (str[arrlinecol[0]] == ' ')
			arrlinecol[0]++;
		else
		{
			write(1, "Error", 5);
			return (1);
		}
	}
	if (arrlinecol[0] >= 32)
	{
		write(1, "Error", 5);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	arr[4][4];
	int	arrlinecol[3];

	if (argc == 2)
	{
		i = -1;
		while (i++ < 3)
			arrlinecol[i] = 0;
		arr[3][3] = -1;
		if (input_to_arr(argv[1], arrlinecol, arr) == 1)
			return (0);
		if (arr[3][3] == -1)
			write(1, "Error", 5);
		if (arr[3][3] == -1)
			return (0);
		solve(arr);
	}
	else
		write(1, "Error", 5);
	return (0);
}