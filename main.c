#include "push_swap.h"

// Node 1 = *head
// {
// 	content = x;
// 	next = Node 2;
// 	prev = Node 3;
// }

// Node 2
// {
// 	content = y;
// 	next = Node 3;
// 	prev = Node 1;
// }

// Node 3
// {
// 	content = y;
// 	next = Node 1 = *stack_a; -> Node 4
// 	prev = Node 2;
// }

// Node 4
// {
// 	content = num;
// 	next = Node 1 = *stack_a;
// 	prev = Node 3 = tmp;
// }

// Node new
// {
// 	content = ;
// 	next = ;
// 	prev = ;
// }

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

	// size_t	end;
	// end = (size_t)argc - 1;
int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		exit (1);
	if (handle_error(&argv[1], argc - 1) != 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, &argv[1]);
	if (stack_a == NULL)
		return (1);
	// char *b[] = {"10", "20", "30", 0};
	// char *b[] = {"10", 0};
	// init_stack(&stack_b, b);
	// init_stack(&stack_b, NULL);
	// if (stack_b == NULL)
	// 	return (1);
	
	// print_list(stack_a);
	// swap(&stack_a);
	// printf("\n");
	// print_list(stack_a);
	// rotate(&stack_a);
	// printf("\n");
	// print_list(stack_a);
	// reverse_rotate(&stack_a);
	// printf("\n");
	// print_list(stack_a);
	printf("\nA\n");
	print_list(stack_a);
	printf("\nB\n");
	print_list(stack_b);
	push(&stack_a, &stack_b);
	// push(&stack_b, &stack_a);

	// push(&stack_b, &stack_a);
	// push(&stack_b, &stack_a);
	// push(&stack_b, &stack_a);
	// push(&stack_b, &stack_a);
	// push(&stack_b, &stack_a);
	// push(&stack_b, &stack_a);
	printf("\nA\n");
	print_list(stack_a);
	printf("\nB\n");
	print_list(stack_b);
	// push(stack_b, stack_a);
	
	free_null_list(&stack_a);
	free_null_list(&stack_b);
	return (0);
}

// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q push_swap");
// }
