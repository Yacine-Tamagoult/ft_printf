/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_douane.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soleil <soleil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:48:22 by yatamago          #+#    #+#             */
/*   Updated: 2022/11/29 11:46:03 by soleil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_douane(char c, va_list many)
{
	if(c == 's')
	{
	   return(ft_Sasuke(many));
	}
	if(c == 'c')
	{
		return(ft_Chopper(many));
	}
	if(c == 'd' || c == 'i')
	{
		return(ft_Dodo(many));
	}
	if(c == 'u')
	{
		return(ft_Ura(many));
	}
	if(c == 'x' || c == 'X')
	{
		return(ft_Pete(many));
	}
	return(0);
}
