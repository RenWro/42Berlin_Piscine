/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:47:11 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/19 20:42:05 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* 	If the base is less than 2, returns 0
	If it finds + or - signs or non-printable characters, returns 0
	check if the base has any repeated character if it has, returns 0
	If no previous conditions are met, the return is 1
	Calls the function to check the past base
	If the return on the function is 0, the program stops */

int	checkerror(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/* 	This function converts a decimal number to another bases and print it
	counts the size of the base
	Array Box receives the converted values of 'nb' to the base
	This formula of 'n' module size will find the correct number at the base */
void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	if (!checkerror(base))
		return ;
	len = ft_strlen(base);
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
	}
	ft_putchar(base[nb % len]);
}

/* Tries hexa, octa, dec and binary numbers */
int	main(void)
{
	int		n;
	char	*hex;
	char	*oct;
	char	*dec;
	char	*bin;

	n = 42;
	*hex = "0123456789abcdef";
	*oct = "012345678";
	*dec = "0123456789";
	*bin = "01";
	write(1, "decimal to decimal: ", 20);
	ft_putnbr_base(n, dec);
	write(1, "\ndecimal to binary: ", 20);
	ft_putnbr_base(n, bin);
	write(1, "\ndecimal to octal: ", 20);
	ft_putnbr_base(n, oct);
	write(1, "\ndecimal to hexadecimal: ", 26);
	ft_putnbr_base(n, hex);
	write(1, "\n", 1);
	return (0);
}
