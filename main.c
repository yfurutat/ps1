/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:31:28 by efmacm23          #+#    #+#             */
/*   Updated: 2023/08/10 17:44:32 by efmacm23         ###   ########.fr       */
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

// void	insert(t_stack **stk_a, t_stack **stk_b, int num_args)
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

void	push_swap(t_stack **stk_a, t_stack **stk_b, int num_args)
{
	// int	cnt;

	(void)stk_b;
	// printf("%d\n", check_if_in_order(*stk_a));
	if (num_args == 1 || check_if_in_order(*stk_a) == 0)
		return ;
	else if (num_args == 2)
		sa(stk_a);
	else if (num_args == 3)
		sort3(stk_a);
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
	printf("size: %d\n", lstsize_circle(stack_a));	
	print_list(stack_a);
	printf("\n");
	swap(&stack_a);
	print_list(stack_a);
	// push_swap(&stack_a, &stack_b, argc - 1);
	free_null_list(&stack_a);
	free_null_list(&stack_b);
	return (0);
}

// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q push_swap");
// }
