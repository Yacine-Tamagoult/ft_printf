#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>


void ft_putstr(const char *str);
int ft_printf(const char *str, ...);
void ft_putchar(char c);
int ft_checkflag(const char c);
int ft_douane(char c, va_list many);
int ft_Sasuke(va_list many);
int ft_Chopper(va_list many);
int	ft_Doflamingo(int n);
int ft_Dodo(va_list many);
int ft_Uranus(unsigned int n);
int ft_Ura(va_list many);
int ft_Peter(unsigned int n);
int ft_Pete(va_list many);
#endif
