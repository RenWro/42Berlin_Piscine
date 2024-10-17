/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:31:59 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/16 23:32:02 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int        ft_strlen(char *str);

int        ft_strlen(char *str)
{
        int        i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

//int        main(void)
//{
//        char        str[] = "Hello, 42!";
//        int                len;

//        len = ft_strlen(str);
//        printf("Length of the string: %d\n", len);
//        return (0);
//}