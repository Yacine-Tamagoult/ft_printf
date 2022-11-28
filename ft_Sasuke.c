/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Sasuke.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 07:51:10 by soleil            #+#    #+#             */
/*   Updated: 2022/11/28 18:52:17 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int ft_Sasuke(va_list many)
{
	int i;
	char *str;

	str = va_arg(many, char *);
	i = 0;

	if(str == NULL)
	{
		ft_putstr("(null)");
		return 6;
	}
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(i);
}
