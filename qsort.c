#include <stdio.h>

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	partition(int arr[], int low, int high)
{
	int	pivot;
	int	i;
	int	j;
	int	k;

	pivot = arr[high];
	i = (low - 1);
	j = low;
	k = 1;
	while (j <= high - 1)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			printf("sw %d\n", k);
			k++;
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	printf("sw piv\n");
	return (i + 1);
}

void	quick_sort(int arr[], int low, int high)
{
	int	pivot_index;

	if (low < high)
	{
		pivot_index = partition(arr, low, high);
		quick_sort(arr, low, pivot_index - 1);
		quick_sort(arr, pivot_index + 1, high);		
	}
}

void	print_array(int arr[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	// int		arr[] = {64, 34, 25, 12, 22, 11, 90};
	// int		arr[] = {64, 34, 25, 22, 11, 90};
	int		arr[] = {11, 22, 64, 34, 25, 90};
	// int		arr[] = {-6, 12, 90};
	// int		arr[] = {64, 34, 12, 22, 90};
	// int		arr[] = {64, 34, 25, 11, 90};
	size_t	size;

	size = sizeof(arr) / sizeof(arr[0]);
	// printf("%lu\n", sizeof(arr));
	// printf("%lu\n", sizeof(arr[0]));
	printf("%lu\n", size);
	printf("unsorted array: ");
	print_array(arr, size);
	quick_sort(arr, 0, size - 1);
	printf("Sorted array: ");
	print_array(arr, size);
	return (0);
}
