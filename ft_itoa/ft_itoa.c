#include <stdlib.h>
// #include <stdio.h>

int count_digits(int nbr)
{
	int count = 0;
	if (nbr == 0)
		count = 1;
	while(nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int nbr)
{
	int digits = count_digits(nbr);
	char *out;
	char *ten = "0123456789";
	int mod = 0;
	int i = 0;
	out = malloc(sizeof(char) * (digits + 2));
	if (!out)
		return (NULL);
	else if (nbr >= 0)
	{
		while (digits)
		{
			mod = nbr % 10;
			out[digits - 1] = ten[mod];
			nbr /= 10;
			digits--;
			i++;
		}
		out[i] = '\0';
	} else if (nbr == -2147483648) {
		out = "-2147483648";
	} else {
		out[0] = '-';
		while (digits)
		{
			mod = -(nbr % 10);
			out[digits] = ten[mod];
			nbr /= 10;
			digits--;
			i++;
		}
		out[i+1] = '\0';
	}
	return (out);
}

// int main (void)
// {
// 	printf("%d\n", count_digits(0));
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }