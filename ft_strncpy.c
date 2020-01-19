/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 19:10:01 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/18 19:21:06 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t i;

    i = 0;
	while (src[i] && i < len)
	{
        dst[i] = src[i];
        i++;
	}
    dst[i+1] = '\0';
    return (dst);
}