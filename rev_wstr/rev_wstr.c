#include <unistd.h>
#include <stdlib.h>

int word_count(char *str)
{
	int trigger = 0;
	int word_count = 0;
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] != 32 && trigger == 0)
		{
			trigger = 1;
			word_count++;
		} 
		else if (str[i] == 32)
			trigger = 0;
		i++;
	}
	return (word_count);
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != 0)
	{
		write (1, &str[i], 1);
		i++;
	}
}

char *ft_strndup(char *str, int len)
{
	char *out;
	int i = 0;

	out = malloc(len + 1);
	if (!out)
		return (0);
	while (i < len && str[i] != 0)
	{
		out[i] = str[i];
		i++;
	}
	while (i <= len)
		out[i++] = 0;
	return (out);
}

char **ft_split(char *str)
{
	char **split;
	int count = word_count(str);
	int i = 0;
	int j = 0;


	if (!str)
		return (0);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (0);
	
	while (i < count)
	{
		while (str[j] == 32)
			j++;
		str = &str[j];
		j = 0;
		while (str[j] != 32 && str[j])
			j++;
		split[i++] = ft_strndup(str, j);
	}
	split[i] = 0;
	return (split);
}

int main(int argc, char **argv)
{
	char **split = ft_split(argv[1]);
	int i = word_count(argv[1]) - 1;

	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		while (i != -1)
		{
			ft_putstr(split[i]);
			if (i != 0)
				write (1, " ", 1);
			i--;
		}
		write (1, "\n", 1);
	}
	return (0);
}