#include "ft_printf.h"

void ft_test(va_list many)
{
	int i;
	char *str;

	str = va_arg(many, char *);
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
