/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soleil <soleil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:07:19 by soleil            #+#    #+#             */
/*   Updated: 2022/11/24 11:35:44 by soleil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == '%')
        {
            if(str[i + 1] == '%')
            {
                i++;
            }
            else 
                return (0);
        }
        ft_putchar(str[i]);
        i++;
    }
    return 0;
}

int main ()
{   
    ft_printf("salut%%cava%% \n");
    printf(" Pas le mien : ");
    printf("salut%%cava%%");
    return 0;
}