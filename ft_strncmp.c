/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 19:56:12 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/16 20:49:39 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if(n == 0)
	{
		return((unsigned char)*s1 - (unsigned char)*s2);
	}
	else 
	{
	while (*s1 && *s2 && *s1 == *s2 && --n > 0)
	{
		s1++;
		s2++;
	}
	return((unsigned char)*s1 - (unsigned char)*s2);
	}
}
int main() 
{  
    // b has less ASCII value than g 
    char leftStr[] = "q"; 
    char rightStr[] = "a"; 
	  
    int res = strncmp(leftStr, rightStr, 0); 

    int res_my = ft_strncmp(leftStr, rightStr, 0); 
	  
    if (res==0) 
        printf("Strings are equal\n"); 
    else 
        printf("Strings are unequal\n"); 
		  
    printf("\nValue returned by strncmp() is:  %d\n" , res); 
	  
     if (res_my==0) 
        printf("Strings are equal\n"); 
    else 
        printf("Strings are unequal\n"); 

        printf("\nValue returned by ft_strncmp() is:  %d\n" , res_my);


    return 0; 
} 
