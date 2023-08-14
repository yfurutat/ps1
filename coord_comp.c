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
	t_stack	*tmp_list;
	int		tmp_num;
	int		i;
	int		j;

	i = 0;
	tmp_list = *stk;
	tmp_num = 0;
	while (i < info->size)
	{
		j = 0;
		while (j < info->size)
		{
			if (tmp_list->content < (*stk)->content)
				tmp_num++;
			tmp_list = tmp_list->next;
			j++;
		}
		(*stk)->id = tmp_num;
		tmp_num = 0;
		(*stk) = (*stk)->next;
		tmp_list = *stk;
		i++;
	}
	i = 0;
	while (i < info->size)
	{
		printf("index: %d content: %d\n", tmp_list->id, tmp_list->content);
		tmp_list = tmp_list->next;
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

// static void	compress_coordinates(t_list *head)
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
