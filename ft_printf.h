#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>

void ft_putstr(const char *str);
int ft_printf(const char *str, ...);
void ft_putchar(char c);
int ft_checkflag(const char c);


#endif