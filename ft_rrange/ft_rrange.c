// #include <stdio.h>
#include <stdlib.h>

int find_absolute(int a, int b)
{
	int result = a - b;
	if ((a - b) < 0)
		return (-1 * result);
	return (result);
}

int	*ft_rrange(int start, int end)
{
	int i = end;
	int c = 0;
	int *array;
	int distance = find_absolute(start, end);
	array = malloc(sizeof(int) * (distance + 1));	

	if (start > end)
	{
		while (i <= start)
			array[c++] = i++;
	}
	else if (start < end)
	{
		while (i >= start)
			array[c++] = i--;
	}
	return (array);
}

// int main (void)
// {
// 	int *array = ft_rrange(1, -1);
// 	int i = 0;

// 	while (i < 3)
// 	{
// 		printf("%d\n", array[i]);
// 		i++;
// 	}
// 	return (0);
// }