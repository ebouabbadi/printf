#ifndef MAIN_H
# define MAIN_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int _printf(const char *s, ...);
int	ft_convert(char c, va_list ap);

#endif
