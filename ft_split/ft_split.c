#include <stdlib.h>

static int count_words(char *s)
{
	int count = 0;
	int i = 0;
	int trigger = 1;

	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\0' && s[i] != '\n' && s[i] != '\t' && trigger == 1)
		{
			count++;
			trigger = 0;
		}
		else if (s[i] == ' ' || s[i] == '\0' || s[i] == '\n' || s[i] == '\t')
			trigger = 1;
		i++;
	}
	return (count);
}

static char *ft_strndup(char *s, int n)
{
	char *dup;
	dup = malloc (sizeof (char) * (n + 1));
	if (!dup)
		return (NULL);
	int i = 0;
	while (i < n && s[i])
	{
		dup[i] = s[i];
		i++;
	}
	while (i <= n)
	{
		dup[i] = 0;
		i++;
	}
	return (dup);
}

char **ft_split(char *str)
{
	char **out;
	int  wordcount = count_words(str);
	
	out = (char **)malloc (sizeof(char *) * (wordcount + 1));
	if (!out)
		return (0);
	int i = 0;
	int j = 0;

	while (i < wordcount)
	{
		while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
			j++;
		str = &str[j];
		j = 0;
		while (str[j] != ' ' && str[j] != '\0' && str[j] != '\n' && str[j] != '\t' && str[j])
			j++;
		out[i++] = ft_strndup(str, j);
	}
	out[i] = 0;
	return (out);
}