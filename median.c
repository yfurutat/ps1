#include "push_swap.h"

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

	// printf("boarder: %d\n", boarder);
	// printf("stk_cntnt: %d\n", stk->content);
	// printf("tmp_cntnt: %d\n", tmp->content);
	// printf("\n");
int	find_median(t_stack *stk, int size, int boarder)
{
	t_stack	*tmp;
	int larger;
	int smaller;
	int	median;
	int	i;

	i = 0;
	larger = 0;
	smaller = 0;
	tmp = stk->next;
	while (i < size)
	{
		if (tmp->content > stk->content)
			larger++;
		if (tmp->content < stk->content)
			smaller++;
		if (smaller > boarder || larger > boarder)
			find_median(stk->next, size, boarder);
		// {
		// 	stk = stk->next;
		// 	larger = 0;
		// 	smaller = 0;
		// }
		tmp = tmp->next;
		i++;
	}
	median = 0;
	if (smaller == boarder || smaller == boarder)
		median = stk->content;
	return (median);
}
		// printf("i: %d\n", i);
		// printf("tmp_cntnt: %d\n", tmp->content);
		// printf("larger: %d\n", larger);
		// printf("smaller: %d\n", smaller);
		// printf("\n");
		// median = (*stk).content;
		// {
		// 	anchor = anchor->next;
		// 	larger = 0;
		// 	smaller = 0;
		// }
