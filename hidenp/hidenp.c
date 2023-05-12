#include <unistd.h>

int string_finder(char *what, char *where)
{
	int i = 0;
	int j = 0;
	int out = 0;

	while (what[i])
	{
		while(where[j])
		{
			if (what[i] != where[j])
			{
				j++;
				out = 0;
			}
			if (what[i] == where[j])
			{
				out = 1;
				break;
			}	
		}
		i++;
	}
	return (out);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		if (string_finder(argv[1], argv[2]))
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	write (1, "\n", 1);
	return (0);
}