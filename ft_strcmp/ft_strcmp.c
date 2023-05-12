// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main (int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("%d\n", ft_strcmp(argv[1], argv[2]));
// 	}
// 	return (0);
// }