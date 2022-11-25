/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soleil <soleil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:07:19 by soleil            #+#    #+#             */
/*   Updated: 2022/11/25 07:40:29 by soleil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	int j;
	va_list many;

	i = 0;
	j = 1;
	va_start(many, str);
	while(str[i])
	{
	if(str[i] != '%')
	{
		 ft_putchar(str[i]);
	}
	else if(str[i] == '%')
	{
		 ft_douane(str[i + 1], many);
		 i++;
	}
	
	i++;
	}
	return 0;
}

int main ()
{   
	char str[] = "1";
	char str2[] = "2";

	ft_printf("sal%sut%s", str, str2);
	printf(" //// ");
	printf("sal%sut%s", str, str2);
	return 0;
}
