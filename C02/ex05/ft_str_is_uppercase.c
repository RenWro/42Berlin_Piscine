/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:47:34 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/10 19:28:46 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("abc"));
	printf("%d\n", ft_str_is_uppercase("ABC"));
	printf("%d\n", ft_str_is_uppercase("123"));
	printf("%d\n", ft_str_is_uppercase("_1_2_3"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}
