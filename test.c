#include "libftprintf.h"
#include <ctype.h>
#include <string.h>

int	main(void)
{
printf("/*---------------------------%%---------------------------*/\n");

	printf("       y vale %d", ft_printf("%%%%%%"));
	printf("\n");
	printf("       y vale %d\n", printf("%%%%%%"));

printf("/*---------------------------%%c---------------------------*/\n");

	char character_c = 'b';
	printf("       y vale %d", ft_printf("%c", character_c));
	printf("\n");
	printf("       y vale %d\n", printf("%c", character_c));

printf("/*---------------------------%%s---------------------------*/\n");

	char string_s[] = "hola que tal";
	printf("       y vale %d", ft_printf("%s", string_s));
	printf("\n");
	printf("       y vale %d\n", printf("%s",string_s));

printf("/*---------------------------%%i&d---------------------------*/\n");

	int n_id = INT_MIN;
	printf("       y vale %d", ft_printf("%i", n_id));
	printf("\n");
	printf("       y vale %d\n", printf("%i", n_id));

printf("/*---------------------------%%u---------------------------*/\n");

	int n_u = -200000;
	printf("       y vale %d", ft_printf("%u", n_u));
	printf("\n");
	printf("       y vale %d\n", printf("%u", n_u));

return (0);
}
