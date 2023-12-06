#include "libftprintf.h"
#include <ctype.h>
#include <string.h>

int	main(void)
{
printf("/*---------------------------%%---------------------------*/\n");

	printf("  y vale %d", ft_printf("%%%%%%"));
	printf("\n");
	printf("  y vale %d\n", printf("%%%%%%"));
	return (0);
}
