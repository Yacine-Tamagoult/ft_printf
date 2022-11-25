/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:07:19 by soleil            #+#    #+#             */
/*   Updated: 2022/11/25 18:20:08 by yatamago         ###   ########.fr       */
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
	va_end(many);
	return 0;
}

int main ()
{   
	char str[] = "1";
	char str2[] = "2";
	char str3[] = "3";
	char c = 122;
	int num = 999999;

	ft_printf("sal%sut%s%ssalut%c%d", str, str2, str3, c, num);
	printf(" //// ");
	printf("sal%sut%s%ssalut%c%d ", str, str2, str3, c, num);
	return 0;
}
