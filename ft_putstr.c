/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 18:15:08 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/11 18:40:02 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putstr(char const *s)
{
	while(*s != '\0')
	{
		write(1, &*s, 1);
		s++;
	}
}

int main(int argc, char **argv)
{
	char string[20] = "kill_me=))";
	ft_putstr(string);
	return 0;
}
