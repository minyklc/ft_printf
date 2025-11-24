#include "ft_printf.h"

int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	b = printf(" NULL %s NULL", NULL);
	printf("%d", b);
	return (0);
}