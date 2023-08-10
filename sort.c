#include "push_swap.h"

// 1 2 3 // do nothing
// 1 3 2 //
// 2 1 3 //
// 2 3 1
// 3 1 2
// 3 2 1

	// 321
	// if (tmp->content > (tmp->next)->content && (tmp->next)->content > (tmp->next->next)->content)
	// sa->rra
	// 213, 312
	// if ((tmp->next)->content < tmp->content 
	// && (tmp->next)->content < (tmp->next->next)->content)
		// 213
		// if (tmp->content < (tmp->next->next)->content)
		// sa
		// 312
		// if (tmp->content > (tmp->next->next)->content)
		// rra
	// 231, 132
	// if ((tmp->next)->content > tmp->content 
	// && (tmp->next)->content > (tmp->next->next)->content)
		// 231
		// if (tmp->content > (tmp->next->next)->content)
		// rra
		// 132
		// if (tmp->content < (tmp->next->next)->content)
		// sa->ra

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

int	check_order_descending(t_stack *stack)
{
	t_stack	*tmp;

	if (stack == NULL)
		return (0);
	tmp = stack;
	while (tmp->next != stack)
	{
		if (tmp->content < (tmp->next)->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	sort3(t_stack **stack)
{
	int	mid;

	if (stack == NULL)
		return ;
	mid = ((*stack)->next)->content;
	if ((*stack)->content > mid && mid > ((*stack)->next->next)->content)
		sa(stack);
	mid = ((*stack)->next)->content;
	if (mid > (*stack)->content && mid > ((*stack)->next->next)->content)
	{
		if ((*stack)->content > ((*stack)->next->next)->content)
			rra(stack);
		else if ((*stack)->content < ((*stack)->next->next)->content)
		{
			sa(stack);
			ra(stack);
		}
	}
	else if (mid < (*stack)->content && mid < ((*stack)->next->next)->content)
	{
		if ((*stack)->content < ((*stack)->next->next)->content)
			sa(stack);
		else if ((*stack)->content > ((*stack)->next->next)->content)
			ra(stack);
	}	
}

// void	sort3(t_stack **stack)
// {
// 	t_stack	*tmp;

// 	if (stack == NULL)
// 		return ;
// 	tmp = *stack;
// 	if (tmp->content > (tmp->next)->content 
// 		&& (tmp->next)->content > (tmp->next->next)->content)
// 	{
// 		sa(stack);
// 		rra(stack);
// 		return ;
// 	}	
// 	else if ((tmp->next)->content < tmp->content
// 		&& (tmp->next)->content < (tmp->next->next)->content)
// 	{
// 		if (tmp->content < (tmp->next->next)->content)
// 		{
// 			sa(stack);
// 			return ;
// 		}
// 		else if (tmp->content > (tmp->next->next)->content)
// 		{
// 			ra(stack);
// 			return ;
// 		}
// 	}	
// 	else if ((tmp->next)->content > tmp->content 
// 		&& (tmp->next)->content > (tmp->next->next)->content)
// 	{
// 		if (tmp->content > (tmp->next->next)->content)
// 		{
// 			rra(stack);
// 			return ;
// 		}
// 		else if (tmp->content < (tmp->next->next)->content)
// 		{
// 			sa(stack);
// 			ra(stack);
// 			return ;
// 		}
// 	}
// }
