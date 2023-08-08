#include "push_swap.h"

void	rotate(t_stack **current)
{
	if (*current == NULL)
		return ;
	*current = (*current)->next;
}

void	ra(t_stack **stk_a)
{
	ft_putstr_fd("ra\n", STDOUT_FILENO);
	rotate(stk_a);
}

void	rb(t_stack **stk_b)
{
	ft_putstr_fd("rb\n", STDOUT_FILENO);
	rotate(stk_b);
}

void	rr(t_stack **stk_a, t_stack **stk_b)
{
	ft_putstr_fd("rr\n", STDOUT_FILENO);
	rotate(stk_a);
	rotate(stk_b);
}
