#include "ft_printf.h"

void ft_douane(char c, va_list many)
{
	if(c == 's')
	{
	   ft_Sasuke(many);
	}
	if(c == 'c')
	{
		ft_Chopper(many);
	}
	if(c == 'd')
	{
		ft_Dodo(many);
	}
}
