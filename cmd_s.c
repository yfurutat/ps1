#include "push_swap.h"

void	swap(t_stack **current)
{
	int	tmp;

	if (*current == NULL)
		return ;
	tmp = (*current)->content;
	(*current)->content = ((*current)->next)->content;
	((*current)->next)->content = tmp;
}

void	sa(t_stack **stk_a)
{
	ft_putstr_fd("sa\n", STDOUT_FILENO);
	swap(stk_a);
}

void	sb(t_stack **stk_b)
{
	ft_putstr_fd("sb\n", STDOUT_FILENO);
	swap(stk_b);
}

void	ss(t_stack **stk_a, t_stack **stk_b)
{
	ft_putstr_fd("ss\n", STDOUT_FILENO);
	swap(stk_a);
	swap(stk_b);
}
