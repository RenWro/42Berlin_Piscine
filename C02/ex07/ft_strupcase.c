/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:45:54 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/15 17:37:04 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int        main(void)
// {
//         char        str[5];

//         str[0] = 'a';
//         str[1] = 'b';
//         str[2] = 'c';
//         str[3] = 'd';
//         str[4] = '\0';
//         printf("%s", ft_strupcase(str));
// }
