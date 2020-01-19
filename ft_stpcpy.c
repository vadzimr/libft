/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 18:53:59 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/18 19:04:04 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_stpcpy(char * dst, const char * src)
{
	while (*src)
	{
        *dst = *src;
        src++;
        dst++;
	}
    *dst = '\0';
    return (dst);
}

// int main(void)
// {
//     char buffer[20];
//     char *to = buffer;
//     char buffer2[20];
//     char *to2 = buffer2;

//    to = stpcpy(to, "foo");
//     to = stpcpy(to, "bar");
//     printf("%s\n", buffer);
// printf("_______________________________________________________________________________________________________\n");
//     to2 = ft_stpcpy(to2, "foo");
//     to2 = ft_stpcpy(to2, "bar");
//     printf("%s\n", buffer2);

// return(0);
// }