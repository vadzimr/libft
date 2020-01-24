/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:32:03 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/23 20:45:06 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*s1_copy;
	unsigned const char	*s2_copy;

	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned const char *)s2;
	while (n > 0)
	{
		if (*s1_copy != *s2_copy)
			return ((unsigned char)*s1_copy - (unsigned char)*s2_copy);
		s1_copy++;
		s2_copy++;
		n--;
	}
	return (0);
}
