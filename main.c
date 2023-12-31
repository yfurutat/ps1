/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfurutat <yfurutat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:31:28 by efmacm23          #+#    #+#             */
/*   Updated: 2023/11/04 08:33:35 by yfurutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	push_swap(t_stack **sa, t_stack **sb, int argc)
// {
// 	// char *b[] = {"10", "20", "30", 0};
// 	// char *b[] = {"10", 0};
// 	// init_stack(&stack_b, b);
// 	// init_stack(&stack_b, NULL);
// 	// if (stack_b == NULL)
// 	// 	return (1);

// 	// print_list(stack_a);
// 	// swap(&stack_a);
// 	// printf("\n");
// 	// print_list(stack_a);
// 	// rotate(&stack_a);
// 	// printf("\n");
// 	// print_list(stack_a);
// 	// reverse_rotate(&stack_a);
// 	// printf("\n");
// 	// print_list(stack_a);
// 	printf("\nA\n");
// 	print_list(stack_a);
// 	printf("\nB\n");
// 	print_list(stack_b);
// 	// push(&stack_a, &stack_b);
// 	push(&stack_b, &stack_a);

// 	push(&stack_b, &stack_a);
// 	// push(&stack_b, &stack_a);
// 	// push(&stack_b, &stack_a);
// 	// push(&stack_b, &stack_a);
// 	// push(&stack_b, &stack_a);
// 	// push(&stack_b, &stack_a);
// 	printf("\nA\n");
// 	print_list(stack_a);
// 	printf("\nB\n");
// 	print_list(stack_b);
// 	// push(stack_b, stack_a);
// }
	// size_t	end;
	// end = (size_t)argc - 1;

	// if (num_args == 1)
	// else if (num_args == 2)


// void	insert_one(t_stack **stk_a, t_stack **stk_b, int num_args)
// {
// 	t_stack	*tmp;
// 	int		i;
// 	int		j;

// 	(void)num_args;
// 	tmp = *stk_a;
// 	i = 0;
// 	while(tmp->content < (*stk_b)->content)
// 	{
// 		tmp = tmp->next;
// 		i++;
// 	}
// 	j = stacksize(stk_a) / 2;
// 	if (j < i)
// 	{
// 		while (j < i)
// 		{
// 			rra(stk_a);
// 			i--;
// 		}
// 	}
// 	else
// 	{
// 		while (i > 0)
// 		{
// 			ra(stk_a);
// 			i--;
// 		}
// 	}
// 	pa(stk_a, stk_b);
// }

	// printf("ascend: %d\n", check_if_in_order(*stk_a));
	// printf("descend: %d\n", check_order_descending(*stk_a));
void	push_swap(t_stack **stk_a, t_stack **stk_b, int num_args, t_id *info)
{
	// int	cnt;

	(void)stk_b;
	if (num_args == 1 || check_if_in_order(*stk_a) == 0)
		return ;
	else if (num_args == 2)
		sa(stk_a);
	else if (num_args == 3)
		sort3(stk_a);
	else if (num_args == 4)
	{
		while (check_if_in_order(*stk_a) == NO \
			&& lstsize_circle(*stk_a) > 3)
		{
			if ((*stk_a)->content == info->min)
				pb(stk_a, stk_b);
			else
				ra(stk_a);
		}
		if (check_if_in_order(*stk_a) == NO)
			sort3(stk_a);
		pa(stk_a, stk_b);
	}
	else if (num_args == 5)
	{
		while (lstsize_circle(*stk_a) != 3)
		{
			if ((*stk_a)->content < info->boarder)
				pb(stk_a, stk_b);
			else
				ra(stk_a);
		}
		if (check_if_in_order(*stk_a) == NO)
			sort3(stk_a);
		if (check_order_descending(*stk_b) == NO)
			sb(stk_b);
		while (*stk_b)
			pa(stk_a, stk_b);
	}
	else
		my_radix(stk_a, stk_b, num_args);
	// cnt = 0;
	// if (num_args >= 4 && num_args <= 6)
	// {
	// 	while (cnt + 3 < num_args)
	// 	{
	// 		pb(stk_b, stk_a);
	// 		cnt++;
	// 	}
	// 	sort3(stk_a);
	// 	// if (cnt == 3)
	// 	// 	sort3(stk_b);
	// 	// else if (cnt == 2 && check_if_in_order(*stk_b) == 1)
	// 	// 	sb(stk_b);
	// 	insert(stk_a, stk_b, num_args);
	// }
	
	// else if (num_args == 3)
	// else if (num_args == 4)
	// else if (num_args == 5)

	//COMMENT THIS OUT!!!
	// printf("%p\n", *stk_b);
}


int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_id	info;

	if (argc < 2)
		exit (1);
	if (handle_error(&argv[1], argc - 1) != 0)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		exit (1);
	}
	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, &argv[1]);
	if (stack_a == NULL)
		return (1);
	info.size = lstsize_circle(stack_a);
	// printf("size: %d\n", info.size);
	info.boarder = find_median(stack_a, &info);
	// printf("med: %d\n", info.boarder);
	info.max = find_max(stack_a, &info);
	// printf("max: %d\n", info.max);
	info.min = find_min(stack_a, &info);
	// printf("min: %d\n", info.min);
	coord_comp(&stack_a, &info);
	// print_list(stack_a);
	// printf("\n");
	// main_sort(&stack_a, &stack_b, &info);
	push_swap(&stack_a, &stack_b, argc - 1, &info);
	
	// t_stack
	// for (int i = 0; i < info.size ; i++)
	// {
	// printf("index: %d content: %d\n", stack_a->id, stack_a->content);
	// 	current = current->next;
	// 	i++;
	// }
	// while (stack_a)
	// 	pb(&stack_a, &stack_b);
	// if (stack_b)
	// 	print_list(stack_b);
	// while (stack_b)
	// 	pa(&stack_a, &stack_b);
	// if (stack_a)
	// 	print_list(stack_a);
	free_null_list(&stack_a);
	free_null_list(&stack_b);
	// printf("nums: %d\n", argc - 1);
	// printf("cmds: %zd\n", g_cmd_n);
	return (0);
}
	// printf("%d\n", );
	// swap(&stack_a);
	// printf("YES: %d\n", YES);
	// printf("NO: %d\n", NO);
	// printf("ERROR: %d\n", ERROR);
	// printf("EMPTY: %d\n", EMPTY);
	// printf("A: %d\n", A);
	// printf("B: %d\n", B);
	// printf("BOTH: %d\n", BOTH);

// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q push_swap");
// }
