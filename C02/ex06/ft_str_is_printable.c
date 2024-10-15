/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:29:33 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/15 17:32:26 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= ' ' && str[i] <= '~')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	printf("%d\n", ft_str_is_printable("abc"));
	printf("%d\n", ft_str_is_printable("ABC"));
	printf("%d\n", ft_str_is_printable("123"));
	printf("%d\n", ft_str_is_printable("_1_2_3"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
} */
