/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:15:45 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/06 11:51:24 by akakumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char start, char mid, char end)
{
	int	pos_x;

	pos_x = 0;
	while (pos_x < x)
	{
		if (pos_x == 0)
			ft_putchar(start);
		else if (pos_x == x - 1)
			ft_putchar(end);
		else
			ft_putchar(mid);
		pos_x++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	pos_y;

	pos_y = 0;
	if (x > 0 && y > 0)
	{
		while (pos_y < y)
		{
			if (pos_y == 0)
				print_line(x, 'o', '-', 'o');
			else if (pos_y == y - 1)
				print_line(x, 'o', '-', 'o');
			else
				print_line(x, '|', ' ', '|');
			pos_y++;
		}
	}
	else
		write(1, "Invalid Input", 13);
}
