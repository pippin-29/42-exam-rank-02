// #include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	char *saved;

	saved = s1;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] ='\0';
	return (saved);
}

// int main (void)
// {
// 	char s1[50];
// 	char s2[] = "XYZ";

// 	printf ("%s, %s\n", s1, s2);
// 	ft_strcpy(s1, s2);
// 	printf ("%s, %s\n", s1, s2);
// 	return (0);
// }