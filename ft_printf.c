/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soleil <soleil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:07:19 by soleil            #+#    #+#             */
/*   Updated: 2022/11/29 11:42:33 by soleil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int ft_printf(const char *str, ...)
{
	int i;
	int r;
	va_list many;

	r = 0;
	i = 0;
	va_start(many, str);
	while(str[i])
	{
		if(str[i] != '%')
		{
		 	ft_putchar(str[i]);
		 	r++;
		}
		else if(str[i] == '%')
		{
			 r = r + ft_douane(str[i + 1], many);
			 i++;
		}
		i++;
	}
	//printf("Return: %i", r);
	va_end(many);
	return r;
}

/*
int main ()
{   
	char str[] = "";
	ft_printf(" %x ", -1);
	printf("\n");
	//printf("%c", '0');
	printf("%d", printf(" %x ", -1));
	return 0;
}
*/