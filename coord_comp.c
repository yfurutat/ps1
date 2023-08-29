#include "push_swap.h"

	// info->size = lstsize_circle(*stk);
	// info->max = find_max(*stk, info);
	// info->min = find_min(*stk, info);
	// i = 0;
	// while (i < info->size)
	// {
	// 	if (tmp_list->content == info->max)
	// 		tmp_list->id = info->size - 1;
	// 	if (tmp_list->content == info->min)
	// 		tmp_list->id = 0;
	// 	tmp_list = tmp_list->next;
	// 	i++;
	// }
	// printf(" max: %d\n", info->max);
	// printf(" min: %d\n", info->min);
	// printf(" size: %d\n", info->size);
	// while (i < info->size)
	// {
	// 	if (tmp_list->content != info->max 
	// 		&& tmp_list->content != info->min)
	// 		tmp_list->id = 0;
	// }
void	coord_comp(t_stack **stk, t_id *info)
{
	t_stack	*current;
	int		compressed_value;
	int		i;
	int		j;

	i = 0;
	// compressed_value = 0;
	while (i < info->size)
	{
		j = 0;
		compressed_value = 0;
		current = *stk;
		while (j < info->size)
		{
			if (current->content < (*stk)->content)
				compressed_value++;
			current = current->next;
			j++;
		}
		(*stk)->id = compressed_value;
		(*stk) = (*stk)->next;
		// current = *stk;
		i++;
	}
	i = 0;
	while (i < info->size)
	{
		printf("index: %d content: %d\n", current->id, current->content);
		current = current->next;
		i++;
	}
}

// static int	get_index(t_list *start)
// {
// 	t_list	*tmp;
// 	int		index;

// 	index = 0;
// 	tmp = start->next;
// 	while (1)
// 	{
// 		if (tmp->num < start->num)
// 			index++;
// 		tmp = tmp->next;
// 		if (tmp == start)
// 			break ;
// 	}
// 	return (index + 1);
// }

// void	compress_coordinates(t_list *head)
// {
// 	t_list	*tmp;

// 	tmp = head;
// 	while (1)
// 	{
// 		tmp->index = get_index(tmp);
// 		tmp = tmp->next;
// 		if (tmp == head)
// 			break ;
// 	}
// }
