#include "push_swap.h"

// 1 2 3 // do nothing
// 1 3 2 //
// 2 1 3 //
// 2 3 1
// 3 1 2
// 3 2 1

int	check_if_in_order(t_stack *stack)
{
	t_stack	*tmp;

	if (stack == NULL)
		return (0);
	tmp = stack;
	while (tmp->next != stack)
	{
		if (tmp->content > (tmp->next)->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}


void	sort3(t_stack **stack)
{
	t_stack	*tmp;

	if (stack == NULL)
		return ;
	// 321
	// if (tmp->content > (tmp->next)->content && (tmp->next)->content > (tmp->next->next)->content)
	// sa->ra or rra->sa
	tmp = *stack;
	if (tmp->content > (tmp->next)->content 
		&& (tmp->next)->content > (tmp->next->next)->content)
	{
		sa(stack);
		ra(stack);
		return ;
	}	
	// 213, 312
	// if ((tmp->next)->content < tmp->content 
	// && (tmp->next)->content < (tmp->next->next)->content)
	else if ((tmp->next)->content < tmp->content
		&& (tmp->next)->content < (tmp->next->next)->content)
	{
		// 213
		// if (tmp->content < (tmp->next->next)->content)
		// sa
		if (tmp->content < (tmp->next->next)->content)
		{
			sa(stack);
			return ;
		}
		// 312
		// if (tmp->content > (tmp->next->next)->content)
		// rra
		if (tmp->content > (tmp->next->next)->content)
		{
			rra(stack);
			return ;
		}
	}
	
	// 231, 132
	// if ((tmp->next)->content > tmp->content 
	// && (tmp->next)->content > (tmp->next->next)->content)
	else if ((tmp->next)->content > tmp->content 
		&& (tmp->next)->content > (tmp->next->next)->content)
	{
		// 231
		// if (tmp->content > (tmp->next->next)->content)
		// ra
		if (tmp->content > (tmp->next->next)->content)
		{
			ra(stack);
			return ;
		}

		// 132
		// if (tmp->content < (tmp->next->next)->content)
		// sa->rra
		if (tmp->content < (tmp->next->next)->content)
		{
			sa(stack);
			rra(stack);
			return ;
		}
	}
}
