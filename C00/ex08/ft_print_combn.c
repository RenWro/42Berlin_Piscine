/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:39:28 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/06 21:42:19 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int num, int n)
{
	int		div;
	char	digit;

	div = 1;
	while (--n > 0)
		div *= 10;
	while (div > 0)
	{
		digit = (num / div) + '0';
		ft_putchar(digit);
		num %= div;
		div /= 10;
	}
}

void	ft_recursive_comb(int current, int n, int start)
{
	if (n == 0)
	{
		ft_print_number(current, start);
		if (current / (10 * (start - 1)) != 10 - start)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return;
	}
	for (int i = (current == 0) ? 0 : current % 10 + 1; i <= 9; i++)
	{
		ft_recursive_comb(current * 10 + i, n - 1, start);
	}
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
		ft_recursive_comb(0, n, n);
}

int	main(void)
{
	ft_print_combn(42);
	return (0);
}
