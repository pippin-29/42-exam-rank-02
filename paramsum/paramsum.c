#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
		
}


int main (int argc, char **argv)
{
	int a = argc - 1;
	ft_putnbr(a);
	write (1, "\n", 1);
	return (0);
}