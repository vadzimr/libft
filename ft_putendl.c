
#include "libft.h"

void    ft_putendl(char const *s)
{
    while(*s != '\0')
	{
		write(1, &*s, 1);
		s++;
	}
    write(1, "\n", 1);
}