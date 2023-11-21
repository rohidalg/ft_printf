#include "libftprintf.h"
#include <ctype.h>
#include <string.h>

int	main(void)
{
	int n = 42;
	int *pu = &n;

	printf("  y vale %d", ft_printf("%p", pu));
	printf("\n");
	printf("  y vale %d\n", printf("%p", pu));
	return (0);
}
