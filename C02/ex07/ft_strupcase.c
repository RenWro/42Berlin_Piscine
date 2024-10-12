#include <unistd.h>
#include <stdio.h>

char        *ft_strupcase(char *str)
{
        int        i;

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