/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfurutat <yfurutat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:57:54 by yfurutat          #+#    #+#             */
/*   Updated: 2023/11/04 03:41:59 by yfurutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	free_null(void **ptr, int code)
// {
// 	free(*ptr);
// 	*ptr = NULL;
// 	return (code);
// }

	// size_t	k;
	// int		*tmp2;
	// k = i;
	// tmp1 = (int *)malloc(sizeof(int) * k);
	// tmp2 = (int *)malloc(sizeof(int) * k);
	// if (tmp1 != NULL && tmp2 != NULL)
		// free(tmp2);
	// while (i < k)
// int	handle_error(char **argv, int end)
// {
// 	size_t	i;
// 	size_t	j;
// 	int		*tmp1;

// 	i = 0;
// 	while (argv[i] != NULL)
// 	{
// 		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
// 			return (1);
// 		i++;
// 	}
// 	tmp1 = (int *)malloc(sizeof(int) * end);
// 	if (tmp1 == NULL)
// 	{
// 		free(tmp1);
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < (size_t)end)
// 	{
// 		tmp1[i] = ft_atol(argv[i]);
// 		i++;
// 	}
// 	i = 0;
// 	j = 0;
// 	while (i < (size_t)end)
// 	{
// 		j = i + 1;
// 		while (j < (size_t)end)
// 		{
// 			if (tmp1[i] == tmp1[j])
// 				return (1);
// 			j++;
// 		}
// 		i++;
// 	}
// 	free(tmp1);
// 	return (0);
// }

// 17L
int	check_dup(int *tmp, int end)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < (size_t)end)
	{
		j = i + 1;
		while (j < (size_t)end)
		{
			if (tmp[i] == tmp[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// 10L
int	check_size(char **argv)
{
	size_t	i;

	i = 0;
	while (argv[i] != NULL)
	{
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

// 20L
int	handle_error(char **argv, int end)
{
	int		*tmp;
	int		ret;
	size_t	i;

	ret = check_size(argv);
	if (ret == 1)
		return (ret);
	tmp = (int *)malloc(sizeof(int) * end);
	if (tmp == NULL)
		return (1);
	i = 0;
	while (i < (size_t)end)
	{
		tmp[i] = ft_atol(argv[i]);
		i++;
	}
	ret = check_dup(tmp, end);
	free(tmp);
	tmp = NULL;
	return (ret);
}
	// free(tmp2);
		// tmp2[j] = ft_atol(argv[j]);
		// j++;
	// while (i < k)
		// while (j < k)
