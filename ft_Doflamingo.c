/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Doflamingo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:46:38 by yatamago          #+#    #+#             */
/*   Updated: 2022/11/28 18:58:27 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_Doflamingo(int n)
{
	int r = 0;
	if (n == -2147483648)
	{
		r = r + write (1, "-2147483648", 11);
		return 0;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		r = r + 1;
	}
	if (n > 9)
	{
		r = r + ft_Doflamingo(n / 10);
		r = r +	ft_Doflamingo(n % 10);
	}
	if (n <= 9)
	{
		ft_putchar(n + 48);
		r++;
	}
return(r);
}

int ft_Dodo(va_list many)
{
    int n;
	
    n = va_arg(many, int);
    return(ft_Doflamingo(n));
}






