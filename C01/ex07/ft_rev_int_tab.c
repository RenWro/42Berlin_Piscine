/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:17:50 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/09 14:04:08 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	var_temp;

	i = 0;
	while (i < size / 2)
	{
		var_temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = var_temp;
		i++;
	}
}

int	main(void)
{
	int	arr[5];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	ft_rev_int_tab(arr, 5);
	printf("%d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return (0);
}
