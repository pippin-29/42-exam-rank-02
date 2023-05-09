#include <unistd.h>
void print_char(char c)
{
	write (1, &c, 1);
}

int lazy_atoi(char *s)
{
	int out = 0;
	int i = 0;
 while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			out = (out * 10) + (s[i] - '0');
			i++;
		}
 	}
	return (out);
}

void print_hex(int h)
{
	char *hex = "0123456789abcdef";
	int mod;
	if (h >= 16)
		print_hex(h / 16);
	mod = h % 16;
	print_char(hex[mod]);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int a = lazy_atoi(argv[1]);
		print_hex(a);
		write (1, "\n", 1);
	}
	else 
	{
		write (1, "\n", 1);
	}
}