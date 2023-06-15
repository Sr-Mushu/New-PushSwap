#include "libft.h"

int	ft_startsign(int character)
{
	if (character == '-' || character =='+')
		return (1);
	return (0);
}
