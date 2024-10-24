/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:47:48 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/24 12:08:37 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*tab;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	tab = (char *)malloc(sizeof(char) * len);
	if (!tab)
		return (0);
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		j;
	int		k;

	i = -1;
	k = 0;
	tab = ft_create_str(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			tab[k++] = sep[j];
			j++;
		}
	}
	tab[k] = '\0';
	return (tab);
}

/* char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*result;
	char	*strs[3];
	char	*separator;
	int		size;

	size = 3;
	strs[0] = "Atari";
	strs[1] = "Teenage";
	strs[2] = "Riot";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
	return (0);
} */
