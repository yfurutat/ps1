#include "push_swap.h"

/**
 * 
 * DO NOT FORGET!!!!!!!!!!!!!!!DO NOT FORGET!!!!!!!!!!!!!!!
 * DO NOT FORGET!!!!!!!!!!!!!!!DO NOT FORGET!!!!!!!!!!!!!!!
 * 
 */
void	print_list(t_stack *head)
{
	t_stack	*tmp;

	if (head == NULL)
	{
		printf("EMPTY STACK\n");
		return ;
	}
	// DO NOT INCLUDE THIS FILE WHEN COMPILING
	tmp = head;
	while (tmp->next != head)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->content);
}
