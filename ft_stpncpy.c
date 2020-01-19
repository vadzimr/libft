/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 19:17:24 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/18 19:20:50 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_stpncpy(char * dst, const char * src, size_t len)
{
	while (*src && len)
	{
        *dst = *src;
        src++;
        dst++;
        len--;
	}
    *dst = '\0';
    return (dst);
}
