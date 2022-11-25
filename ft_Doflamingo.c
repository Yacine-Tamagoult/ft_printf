/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Doflamingo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:46:38 by yatamago          #+#    #+#             */
/*   Updated: 2022/11/25 18:12:16 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_Doflamingo(int n)
{
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_Doflamingo(n / 10);
		ft_Doflamingo(n % 10);
	}
	if (n <= 9)
	{
		ft_putchar(n + 48);
	}
}

void ft_Dodo(va_list many)
{
    int n;
    
    n = va_arg(many, int);
    ft_Doflamingo(n);
}






