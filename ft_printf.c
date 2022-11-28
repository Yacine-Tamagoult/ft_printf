/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:07:19 by soleil            #+#    #+#             */
/*   Updated: 2022/11/28 19:18:56 by yatamago         ###   ########.fr       */
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
	unsigned int i = 563;
	ft_printf("%u", i);
	printf("\n");
	//printf("%c", '0');
	printf("%d", printf("%u", i));
	return 0;
}

*/