/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:48:23 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/15 21:48:26 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n && (s1[i] != '\0' || s2[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

int	main(void)
{
	printf("%d", ft_strncmp("Hello", "42", 7));
	printf("\n%d", ft_strncmp("Hello", "Hel", 7));
	printf("\n%d", ft_strncmp("Hel", "Hello", 7));
	printf("\n%d", ft_strncmp("Hello", "Hello", 7));
}
