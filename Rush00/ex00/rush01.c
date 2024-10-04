/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:15:45 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/04 19:16:01 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char start, char mid, char end)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(start);
		else if (j == x - 1)
			ft_putchar(end);
		else
			ft_putchar(mid);
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			print_line(x, '/', '*', '\\');
		else if (i == y - 1)
			print_line(x, '\\', '*', '/');
		else
			print_line(x, '*', ' ', '*');
		i++;
	}
}
