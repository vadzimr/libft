/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:42:37 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/23 20:48:48 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_copy;
	unsigned const char	*src_copy;

	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned const char *)src;
	while (n > 0)
	{
		*dst_copy = *src_copy;
		if (*src_copy == (unsigned char)c)
			return ((void *)dst_copy + 1);
		dst_copy++;
		src_copy++;
		n--;
	}
	return (NULL);
}
