/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:55:42 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/23 15:07:22 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/* int	main(void)
{
	int	number;

	number = 10;
	printf("Next prime >= %d is %d\n", number, ft_find_next_prime(number));
	number = 17;
	printf("Next prime >= %d is %d\n", number, ft_find_next_prime(number));
	number = 1000;
	printf("Next prime >= %d is %d\n", number, ft_find_next_prime(number));
	return (0);
} */
