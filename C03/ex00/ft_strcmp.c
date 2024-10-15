/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:47:50 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/15 21:47:54 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d", ft_strcmp("Hello", "42"));
	printf("\n%d", ft_strcmp("Hello", "Hel"));
	printf("\n%d", ft_strcmp("Hel", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}
