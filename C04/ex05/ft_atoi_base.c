#include <stdio.h>

// Checks if the base is valid: no duplicates, no invalid characters 
// (such as spaces, '+' or '-' signs), and the base has at least two characters
int	checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	// Base must have at least 2 characters
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

// Returns the index of a character in the base, or -1 if the character is not in the base.
int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

// Skips whitespace and sign characters (+/-) at the start of the string.
// Computes the final sign based on the signs found ('-' inverts the sign)
int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

// Converts a string representing a number in any base (defined by 'base') to an integer.
// Checks if the base is valid, skips whitespaces and signs, and performs the conversion.
int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		negative;
	int		nb;
	int		nb2;
	int		begin_len;

	nb = 0;
	i = 0;
	begin_len = checkerror(base);
	if (begin_len >= 2)
	{
		negative = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * begin_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= negative);
	}
	return (0);
}

// Tests the ft_atoi_base function gor decimal, binary and hexadecimal inputs and bases.
int	main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--1234", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---987", "0123456789abcdef"));
}
