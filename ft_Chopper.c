/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Chopper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:32:14 by soleil            #+#    #+#             */
/*   Updated: 2022/11/27 19:14:26 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_Chopper(va_list many)
{
    char c;
 
    c = (char)va_arg(many, int);
    ft_putchar(c);
    
    return (1);
}