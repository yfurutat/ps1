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
	while(current->next != head)
	{
		current = current->next;
		cnt++;
	}
	return (cnt);
}


