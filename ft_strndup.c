/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:54:21 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/18 18:14:20 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strndup(const char *s1, size_t n)
{
    char *res;
    size_t i;

    i = 0;
    res = (char *)malloc(strlen(s1) + 2 * sizeof(char)); 
    if (res == NULL)
		return (NULL);
	while (s1[i] && i < n)
	{
        res[i] = s1[i];
        i++;
	}
    res[i] = '\0';
    return (res);
}

