/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:51:49 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/23 20:54:03 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_copy;
	unsigned const char	*src_copy;

	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned const char *)src;
	while (n > 0)
	{
		*dst_copy = *src_copy;
		dst_copy++;
		src_copy++;
		n--;
	}
	return ((void *)dst);
}