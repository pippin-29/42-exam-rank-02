
#include <unistd.h>

void putchar(char c)
{
	write (1, &c, 1);
}

void putstring(char *s)
{
	int i = 0;
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
}

void lazy_putnbr(int n)
{
	int mod = 0;
	char *ten = "0123456789";
	if (n >= 0 && n <= 9)
		putchar(n + 48);
	else if (n >= 10)
	{
		lazy_putnbr(n / 10);
		mod = n % 10;
		putchar(ten[mod]);
	}
}

int main (void)
{
	int i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			putstring("fizzbuzz");
		else if ((i % 5) == 0)
			putstring("buzz");
		else if ((i % 3) == 0)
			putstring("fizz");
		else
			lazy_putnbr(i);
		i++;
		putchar('\n');
	}
	return (0);
}