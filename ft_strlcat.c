/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 18:46:28 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/25 21:44:35 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	// size_t	dst_len;
	// size_t	src_len;

	// dst_len = ft_strlen(dst);
	// src_len = ft_strlen(src);
	// if (size < dst_len)
	// 	src_len += size;
	// else
	// 	src_len += dst_len;
	// while (*src && dst_len + 1 < size)
	// 	*(dst + dst_len++) = *src++;
	// *(dst + dst_len) = '\0';
	// return (src_len);

	char *dst_copy;
	size_t		i;
	size_t		j;
	size_t      size_copy;

	dst_copy = dst;
	size_copy = size;
	i = 0;
	j = 0;
	while (dst[i] && size)
	{
		i++;
		size--;
		
	}
	size--;
	while (*src && size)
	{
		dst[i] = *src;
		src++;
		i++;
		size--;
		j++;
	}
	if (size || ((i - j) > size_copy))
	{
		dst[i++] = '\0';
		j++;
	}
	return (j);
}
