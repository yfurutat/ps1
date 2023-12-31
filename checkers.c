/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfurutat <yfurutat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:51:42 by yfurutat          #+#    #+#             */
/*   Updated: 2023/11/04 00:51:43 by yfurutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lstsize_circle(t_stack *current)
{
	t_stack	*head;
	int		cnt;

	cnt = 0;
	if (current == NULL)
		return (cnt);
	cnt++;
	head = current;
	while (current->next != head)
	{
		current = current->next;
		cnt++;
	}
	return (cnt);
}

int	check_if_in_order(t_stack *stack)
{
	t_stack	*tmp;

	if (stack == NULL)
		return (EMPTY);
	tmp = stack;
	while (tmp->next != stack)
	{
		if (tmp->content > (tmp->next)->content)
			return (NO);
		tmp = tmp->next;
	}
	return (YES);
}

int	check_order_descending(t_stack *stack)
{
	t_stack	*tmp;

	if (stack == NULL)
		return (EMPTY);
	tmp = stack;
	while (tmp->next != stack)
	{
		if (tmp->content < (tmp->next)->content)
			return (NO);
		tmp = tmp->next;
	}
	return (YES);
}
