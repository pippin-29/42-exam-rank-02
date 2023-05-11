#include <stdlib.h>
size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int r = 0;

	while (s[i])
	{
		while(reject[r])
		{
			if (s[i] != reject[r])
				r++;
			else
				return (i);
		}
		r = 0;
		i++;
	}
	return (i);
}