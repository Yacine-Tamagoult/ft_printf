/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Uranus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:08:50 by yatamago          #+#    #+#             */
/*   Updated: 2022/11/28 19:18:10 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_Uranus(unsigned int n)
{
    int r = 0;
    if(n > 9)
    {
        r = r + ft_Uranus(n / 10);
        r = r + ft_Uranus(n % 10);
    }
    if(n <= 9)
    {
        ft_putchar(n + 48);
        r++;
    }
    return (r);
}

int ft_Ura(va_list many)
{
    unsigned int n;

    n = va_arg(many, unsigned int);
    return(ft_Uranus(n));
}