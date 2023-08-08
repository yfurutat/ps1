#include "push_swap.h"

// NEED to decrease 3 more LINES.
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

// void	push(t_stack **dst, t_stack **src)
// {
// 	t_stack	*tmp;
// 	int		flag_sole;

// 	if (*src == NULL)
// 		return ;
// 	tmp = (*src)->next;
// 	flag_sole = 0;
// 	if ((*src)->next == *src)
// 		flag_sole = 1;
// 	((*src)->prev)->next = (*src)->next;
// 	((*src)->next)->prev = (*src)->prev;
// 	if (*dst != NULL)
// 	{
// 		(*src)->next = *dst;
// 		(*src)->prev = (*dst)->prev;
// 		((*dst)->prev)->next = *src;
// 		(*dst)->prev = *src;
// 		*dst = (*dst)->prev;
// 	}
// 	if (*dst == NULL)
// 	{
// 		*dst = *src;
// 		(*dst)->next = *dst;
// 		(*dst)->prev = *dst;
// 	}
// 	*src = tmp;
// 	if (flag_sole)
// 		*src = NULL;
// }
	// if (!flag_sole)
	//src->prev->next = src->next
	//src->next->prev = src->prev
	//src->next = dst
	//src->prev = dst->prev
	// *src = (*src)->next;
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
