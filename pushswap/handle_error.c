#include "push_swap.h"

// int	free_null(void **ptr, int code)
// {
// 	free(*ptr);
// 	*ptr = NULL;
// 	return (code);
// }

int	handle_error(char **argv, int end)
{
	size_t	i;
	size_t	j;
	// size_t	k;
	int		*tmp1;
	// int		*tmp2;

	i = 0;
	while (argv[i] != NULL)
	{
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	// k = i;
	j = 0;
	tmp1 = (int *)malloc(sizeof(int) * end);
	// tmp1 = (int *)malloc(sizeof(int) * k);
	// tmp2 = (int *)malloc(sizeof(int) * k);
	// if (tmp1 != NULL && tmp2 != NULL)
	if (tmp1 == NULL)
	{
		free(tmp1);
		// free(tmp2);
		return (1);
	}
	i = 0;
	// while (i < k)
	while (i < (size_t)end)
	{
		tmp1[i] = ft_atol(argv[i]);
		// tmp2[j] = ft_atol(argv[j]);
		i++;
		// j++;
	}
	i = 0;
	// while (i < k)
	while (i < (size_t)end)
	{
		j = i + 1;
		// while (j < k)
		while (j < (size_t)end)
		{
			if (tmp1[i] == tmp1[j])
				return (1);
			j++;
		}
		i++;
	}
	free(tmp1);
	// free(tmp2);
	return (0);
}
