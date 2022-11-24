#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

void ft_putstr(const char *str);
int ft_printf(const char *str, ...);
void ft_putchar(char c);
int ft_checkflag(const char c);
void ft_douane(char c, va_list many);
void ft_test(va_list);

#endif
