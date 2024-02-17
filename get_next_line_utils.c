#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == (char)c)
		{
			return ((char *)s + x);
		}
		x++;
	}
	if (c == '\0')
		return ((char *)s + x);
	return (NULL);
}


size_t	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*ptr;

	x = 0;
	y = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (x < ft_strlen(s1))
	{
		ptr[x] = s1[x];
		x++;
	}
	while (y < ft_strlen(s2))
	{
		ptr[x] = s2[y];
		x++;
		y++;
	}
	ptr[x] = '\0';
	return (ptr);
}