#include "libft.h"

char    *ft_strndup(const char *s, size_t n)
{
	char    *ret;

	if (!(ret = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	return (ft_strncpy(ret, s, n));
}
