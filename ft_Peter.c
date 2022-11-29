/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Peter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soleil <soleil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:21:46 by yatamago          #+#    #+#             */
/*   Updated: 2022/11/29 12:55:41 by soleil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_Peter(unsigned int n)
{
	char *base = "0123456789abcdef";
    int r = 0;
	
	if (n > 16)
	{
		r = r + ft_Peter(n / 16);
		r = r +	ft_Peter(n % 16);
	}
	if (n <= 16)
	{
		ft_putchar(base[n]);
		r++;
	}
	return(r);
}

int ft_Pete(va_list many)
{
    unsigned int n;
	
    n = va_arg(many, unsigned int);
    return(ft_Peter(n));
}