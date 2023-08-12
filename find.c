#include "push_swap.h"

int	find_max(t_stack *stk, t_id *info)
{
	t_stack *tmp;
	int		i;

	i = 0;
	tmp = stk;
	info->size = lstsize_circle(stk);
	while (i < info->size)
	{
		if (tmp->content < stk->content)
			tmp = stk;
		stk = stk->next;
		i++;
		if (stk == tmp)
			break ;
	}
	tmp->id = info->size - 1;
	return (tmp->content);
}
	// printf("content: %d id: %d\n", tmp->content, tmp->id);

int	find_min(t_stack *stk, t_id *info)
{
	t_stack *tmp;
	int		i;

	i = 0;
	tmp = stk;
	info->size = lstsize_circle(stk);
	while (i < info->size)
	{
		if (tmp->content > stk->content)
			tmp = stk;
		stk = stk->next;
		i++;
		if (stk == tmp)
			break ;
	}
	tmp->id = 0;
	return (tmp->content);
}
	// printf("content: %d id: %d\n", tmp->content, tmp->id);

int	find_median(t_stack *stk, t_id *info)
{
	t_stack	*tmp;
	int 	larger;
	int 	smaller;
	int		i;

	i = 0;
	larger = 0;
	smaller = 0;
	tmp = stk->next;
	info->boarder = info->size / 2;
	while (i < info->size)
	{
		if (tmp->content > stk->content)
			larger++;
		if (tmp->content < stk->content)
			smaller++;
		if (smaller > info->boarder || larger > info->boarder)
			return (find_median(stk->next, info));
		tmp = tmp->next;
		i++;
	}
	if (smaller == info->boarder || larger == info->boarder)
		return ((*stk).content);
	else
		return (0);
}
			// break ;
    // else if (smaller > boarder || larger > boarder)

// #define LARGER 0
// #define SMALLER 1

// void    count_smaller_larger(t_stack *start, int count[2])
// {
//     t_stack *tmp;

//     count[SMALLER] = 0;
//     count[LARGER] = 0;
//     tmp = start;
//     while (1)
//     {
//         if (tmp->content > start->content)
//             count[LARGER]++;
//         else if (tmp->content < start->content)
//             count[SMALLER]++;
//         tmp = tmp->next;
//         if (tmp == start)
//             break ;
//     }
// }

// int    find_median(t_stack *stk, int boarder)
// {
//     t_stack    *tmp;
//     int    count[2];

//     tmp = stk;
//     while (1)
//     {
//         count_smaller_larger(tmp, count);
//         if (count[SMALLER] == boarder || count[LARGER] == boarder)
//             return (tmp->content);
//         tmp = tmp->next;
//     }
// }

// int    find_median(t_stack *stk, int boarder)
// {
//     t_stack    *tmp;
//     int    count[2];

//     tmp = stk;
//     count_smaller_larger(tmp, count);
//     if (count[SMALLER] == boarder || count[LARGER] == boarder)
//         return (tmp->content);
//     else
//         return (find_median(tmp->next, boarder));
// }

	// median = 0;
	// if (smaller == boarder || larger == boarder)
	// 	median = (*stk).content;
	// else if (smaller > boarder || larger > boarder)
	// {
	// 	find_median(stk->next, size, boarder);
	// 	return (0);
	// }
	// return (median);
	// printf("median: %d\n", median);
		// printf(" i: %d\n", i);
		// printf(" tmp_cntnt: %d\n", tmp->content);
		// printf(" larger: %d\n", larger);
		// printf(" smaller: %d\n", smaller);
		// printf("\n");
	// printf("\n");
	// printf("stk_cntnt: %d\n", stk->content);
	// printf("tmp_cntnt: %d\n", tmp->content);
	// printf("larger: %d\n", larger);
	// printf("smaller: %d\n", smaller);
	// printf("\n");
		// while (1)
		// {
		// 	if (median != 0)
		// 		break ;
		// }
		// {
		// 	stk = stk->next;
		// 	larger = 0;
		// 	smaller = 0;
		// }
		// median = (*stk).content;
		// {
		// 	anchor = anchor->next;
		// 	larger = 0;
		// 	smaller = 0;
		// }

// median_boarder = lstsize_circle(stk) / 2 (+ 1);
// *anchor = *stk;
// while (stack->next != anchor)
// if (*stk->content > anchor->content)
// larger++;
// if (*stk->content < anchor->content)
// smaller++;
// if (smaller > med_achor && larger > med_anchor)
// recur(); or
// anchor = anchor->next;
// }
// stk = stk->next;
// }
// if (smaller == median_boarder || larger == median_boarder)
// median = *stk->content

// 4 3 -10 50
// 3 0 2

	// boarder = lstsize_circle(stk) / 2;

	// printf("\n");
	// printf("boarder: %d\n", boarder);
	// printf("stk_cntnt: %d\n", stk->content);
	// printf("tmp_cntnt: %d\n", tmp->content);
	// printf("\n");
	// int	median;
