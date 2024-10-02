/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:13:52 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/02 19:03:00 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c <= 'a')
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
