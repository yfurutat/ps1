/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfurutat <yfurutat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:53:09 by yfurutat          #+#    #+#             */
/*   Updated: 2023/11/04 05:28:29 by yfurutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


	// mid = ((*stack)->next)->content;
	// if ((*stack)->content > mid && mid > ((*stack)->next->next)->content)
void	sort3(t_stack **stack)
{
	int	mid;

	if (stack == NULL)
		return ;
	if (check_order_descending(*stack) == YES)
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

	// else
	// 	divide_list(stk_a, stk_b, info, pivot, size - pivot);	
	// int	operations;
	// operations = 0;

int	divide_list(t_stack **stk_a, t_stack **stk_b, int pivot, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*stk_a && i < size && j < pivot)
	{
		if ((*stk_a)->id < pivot)
		{
			pb(stk_a, stk_b);
			j++;
		}
		*stk_a = (*stk_a)->next;
		i++;
	}
	return (j);
}

void	main_sort(t_stack **stk_a, t_stack **stk_b, t_id *info)
{
	int	pivot;
	int	next;
	int	rest;

	next = 0;
	rest = info->size;
	pivot = 2;
	while (*stk_a && rest)
	{
		next = divide_list(stk_a, stk_b, pivot, rest);
		rest -= next;
		pivot += 2;
	}
}
	// pivot = find_median(*stk_a, info);
	// pivot = find_median(*stk_a, info) / 10;
	// next = pivot;
