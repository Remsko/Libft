#include "libft.h"

int	ft_intpow(int n, int p)
{
	return (p != 0 ? n * ft_intpow(n, p - 1) : 1);
}
