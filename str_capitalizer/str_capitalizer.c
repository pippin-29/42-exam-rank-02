#include <unistd.h>
void putchar (char c)
{
	write (1, &c, 1);
}

void print_initial_case (char *s)
{
	int i = 0;
	while (s[i])
	{
		if (i == 0){
			if (s[i] >= 'a' && s[i] <= 'z'){
				putchar (s[i] - 32);
			} else {
				putchar (s[i]);
			}
		} else {
			if (s[i-1] == ' ' && s[i] >= 'a' && s[i] <= 'z' && i != 0)
				putchar (s[i] - 32);
			else if (s[i-1] != ' ' && s[i] >= 'A' && s[i] <= 'Z')
				putchar (s[i] + 32);
			else
				putchar (s[i]);
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 1;
		while (argv[i])
		{
			print_initial_case(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	else
	{
		write (1, "\n", 1);
	}
}