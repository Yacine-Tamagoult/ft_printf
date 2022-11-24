/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soleil <soleil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:07:19 by soleil            #+#    #+#             */
/*   Updated: 2022/11/24 18:41:24 by yatamago         ###   ########.fr       */
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
    char str[] = "salut";

    ft_printf("sal%sut%s","je","gwada");
    printf("Pas le mien :");
    printf("sal%sut%s","je", "gwada");
    return 0;
}
