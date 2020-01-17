/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 18:53:04 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/16 20:15:44 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
        s1++;
        s2++;
	}
    return((unsigned char)*s1 - (unsigned char)*s2);
}

// int main() 
// {  
//     // b has less ASCII value than g 
//     char leftStr[] = "\200"; 
//     char rightStr[] = "\0"; 
      
//     int res = strcmp(leftStr, rightStr); 

//     int res_my = strcmp(leftStr, rightStr); 
      
//     if (res==0) 
//         printf("Strings are equal\n"); 
//     else 
//         printf("Strings are unequal\n"); 
          
//     printf("\nValue returned by strcmp() is:  %d\n" , res); 
      
//      if (res_my==0) 
//         printf("Strings are equal\n"); 
//     else 
//         printf("Strings are unequal\n"); 

//         printf("\nValue returned by ft_strcmp() is:  %d\n" , res_my);
           
//     return 0; 
// } 