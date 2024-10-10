/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:37:23 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/10 18:40:22 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("abc"));
	printf("%d\n", ft_str_is_numeric("123"));
	printf("%d\n", ft_str_is_numeric("_1_2_3"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
