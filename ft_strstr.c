/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 06:52:32 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/17 13:35:12 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
        if (*s1 == *s2)
        {
                return (s1);
            s1++;
            
        }
        if (*s2 == '\0')
        {
            return (NULL);
        }
        s1++;
}
    return (s1);
}

// int main() 
// { 
//     // Take any two strings 
//    char s1[] = "A"; 
//     char s2[] = "Z"; 
//     char* p; 
//     char* p_my;
  
//     // Find first occurrence of s2 in s1 
//     p = strstr(s1, s2); 
//     p_my = ft_strstr(s1, s2);

//     // Prints the result 
//     if (p) { 
//         printf("String found\n"); 
//         printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p); 
//     } else
//         printf("String not found%s\n", p); 

// printf("\n-----------------------------------------------------------------------\n");
//     if (p) { 
//         printf("String found\n"); 
//         printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p_my); 
//     } else
//         printf("String not found%s\n", p_my); 
  
  
//     return 0; 
// } 