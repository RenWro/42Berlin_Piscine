
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "Hello, 42 people!";
	char	to_find[] = "42";
	char	*result;

	result = ft_strstr(str, to_find);
	if (result != NULL)
		printf("Substring is: %s\n", result);
	else
		printf("Substring not found. \n");
	return (0);
}
