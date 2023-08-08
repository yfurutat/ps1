#include "push_swap.h"

void	ft_putchr_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	while (*str != '\0')
	{
		ft_putchr_fd(*str, fd);
		str++;
	}
}
