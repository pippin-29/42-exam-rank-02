#include <stdlib.h>
// #include <stdio.h>

int  max(int* tab, unsigned int len)
{
	int i = 0;
	int temp;

	if (tab != NULL)
		temp = tab[0];
	else
		return (0);

	while (i < len)
	{
		if (tab[i] > temp)
			temp = tab[i];
		i++;
	}
	return (temp);
}

// int main(void)
// {
// 	int array[] = {1, 1, 2, 5, 4, 2, 1, 0};
// 	printf("%d\n", max(array, 8));
// }