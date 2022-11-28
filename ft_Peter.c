/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Peter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:21:46 by yatamago          #+#    #+#             */
/*   Updated: 2022/11/28 19:42:32 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_Peter(unsigned int n)
{
    int r = 0;
    if(n >= 4294967295)
    {
        return 0;
    }
	if (n > 9)
	{
		r = r + ft_Peter(n / 16);
		r = r +	ft_Peter(n % 16);
	}
	if (n <= 9)
	{
		ft_putchar(n + 48);
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