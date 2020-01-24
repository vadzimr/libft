/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:29:08 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/23 18:13:53 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t n)
{
    size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < n)
		ptr[i++] = c;
	return (b);
}
