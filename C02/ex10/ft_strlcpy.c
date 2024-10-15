/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:45:49 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/15 18:39:35 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length])
		src_length++;
	if (size == 0)
		return (src_length);
	else
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}

/* int	main(void)
{
	unsigned int	size = 20;
	char		src[100] = "This is a string";
	char		dest[100] = "This is a string";

	printf("String: %s\n", dest);
	printf("Length: %d", ft_strlcpy(dest, src, size));
	return (0);
} */
