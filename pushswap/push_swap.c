#include "push_swap.h"

void	push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	tmp = (*src)->next;
	if (*src == NULL)
		return ;
	// if (*dst == NULL)
	// if ((*src)->next == *src)

	//src->prev->next = src->next
	((*src)->prev)->next = (*src)->next;
	//src->next->prev = src->prev
	((*src)->next)->prev = (*src)->prev;

	//src->next = dst
	(*src)->next = *dst;
	//src->prev = dst->prev
	(*src)->prev = (*dst)->prev;
	((*dst)->prev)->next = *src;
	(*dst)->prev = *src;

	*dst = (*dst)->prev;
	*src = tmp;
	// *src = (*src)->next;
}
	//dst = src
	//dst->next = dst
	//dst->prev = dst
	//src->next

	//src->next = src

void	swap(t_stack **current)
{
	int	tmp;

	if (*current == NULL)
		return ;
	tmp = (*current)->content;
	(*current)->content = ((*current)->next)->content;
	((*current)->next)->content = tmp;
}

void	rotate(t_stack **current)
{
	if (*current == NULL)
		return ;
	*current = (*current)->next;
}

void	reverse_rotate(t_stack **current)
{
	if (*current == NULL)
		return ;
	*current = (*current)->prev;
}
