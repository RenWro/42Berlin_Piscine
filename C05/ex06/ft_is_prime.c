/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:55:14 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/23 15:07:11 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int			i;
	long int	n;

	n = (long int)nb;
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n < 2)
		return (0);
	i = 3;
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	int	number;

	number = 2;
	printf("Is %d prime? %d\n", number, ft_is_prime(number));
	number = 17;
	printf("Is %d prime? %d\n", number, ft_is_prime(number));
	number = 18;
	printf("Is %d prime? %d\n", number, ft_is_prime(number));
	number = 1000;
	printf("Is %d prime? %d\n", number, ft_is_prime(number));
	return (0);
} */
