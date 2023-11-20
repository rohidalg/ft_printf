#include "libftprintf.h"
#include <ctype.h>
#include <string.h>

int	main(void)
{
	char ch = 'a';

	printf("  y vale %d", ft_printf("%c", ch));
	printf("\n");
	printf("  y vale %d\n", printf("%c", ch));
	return (0);
}
