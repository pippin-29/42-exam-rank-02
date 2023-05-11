#include <unistd.h>
void putchar(char c)
{
	write (1, &c, 1);
}

void snake_to_camel(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i-1] == '_')
				putchar(s[i] - 32);
			else
				putchar(s[i]);
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		snake_to_camel(argv[1]);
	}
	write (1, "\n", 1);
}