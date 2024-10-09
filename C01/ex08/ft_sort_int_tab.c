/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:57:15 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/08 20:57:18 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
				ft_swap (&tab[i], &tab[i + 1]);
			i++;
		}
		size--;
	}
}

// int	main(void)

// {
// 	int	arr[5];
// 	int	size;

// 	arr[0] = 3;
// 	arr[1] = 2;
// 	arr[2] = 4;
// 	arr[3] = 5;
// 	arr[4] = 1;
// 	size = 5;
// 	ft_sort_int_tab(arr, size);
// 	printf("%d, %d, %d, %d,%d", arr[0], arr[1], arr[2], arr[3], arr[4]);
// 	return (0);
// }
