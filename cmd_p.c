#include "push_swap.h"

// NEED to decrease 3 more LINES.
//28L
void	push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;
	int		flag_sole;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	flag_sole = 0;
	if ((*src)->next == *src)
		flag_sole = 1;
	((*src)->prev)->next = (*src)->next;
	((*src)->next)->prev = (*src)->prev;
	if (*dst == NULL)
	{
		*dst = *src;
		(*dst)->next = *dst;
		(*dst)->prev = *dst;
	}
	else if (*dst != NULL)
	{
		(*src)->next = *dst;
		(*src)->prev = (*dst)->prev;
		((*dst)->prev)->next = *src;
		(*dst)->prev = *src;
		*dst = (*dst)->prev;
	}
	*src = tmp;
	if (flag_sole)
		*src = NULL;
}

// void	pa(t_stack **stk_a, t_stack **stk_b)
// {
// 	ft_putstr_fd("pa\n", STDOUT_FILENO);
// 	push(stk_a, stk_b);
// }

// void	pb(t_stack **stk_b, t_stack **stk_a)
// {
// 	ft_putstr_fd("pb\n", STDOUT_FILENO);
// 	push(stk_b, stk_a);
// }
