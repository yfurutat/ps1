#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define OK (0)
# define OVERFLOW (1)
# define UNDERFLOW (-1)
# define POSITIVE (1)
# define NEGATIVE (-1)

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <signal.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

long	ft_atol(const char *from_ascii);
// int		ft_isdigit(int chr);
// int		ft_isspace(int chr);
void	ft_putchr_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
int		handle_error(char **argv, int end);
void	init_stack(t_stack **node, char **argv);
void	free_null_list(t_stack **head);
void	push(t_stack **dst, t_stack **src);
void	swap(t_stack **current);
void	reverse_rotate(t_stack **current);
void	rotate(t_stack **current);

/**
 *  DO NOT FORGET!!!!! DO NOT FORGET!!!!!
 *  DO NOT FORGET!!!!! DO NOT FORGET!!!!!
 *  DO NOT FORGET!!!!! DO NOT FORGET!!!!!
 */
void	print_list(t_stack *head);

#endif