#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		int result = 0;

		if (argv[2][0] == '+')
		{
			result = a + b;
			printf("%d\n", result);
		}
		if (argv[2][0] == '-')
		{
			result = a - b;
			printf("%d\n", result);
		}
		if (argv[2][0] == '*')
		{
			result = a * b;
			printf("%d\n", result);
		}
		if (argv[2][0] == '/')
		{
			result = a / b;
			printf("%d\n", result);
		}
		if (argv[2][0] == '%')
		{
			result = a % b;
			printf("%d\n", result);
		}
	}
	else
		printf("\n");
}