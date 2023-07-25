#include "main.h"
/**
 * ft_putstr - Print string
 * @s: string.
 * Return: Printed string.
 */
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s && s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * ft_putchar - Print char
 * @c: char.
 * Return: Printed char.
 */

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * ft_convert - Convert function
 * @c: char.
 * @ap: va_list.
 * Return: Printed chars.
 */

int	ft_convert(char c, va_list ap)
{
	int	a;

	a = 0;
	if (c == 'c')
		a = ft_putchar(va_arg(ap, int));
	else if (c == 's')
        a = ft_putstr(va_arg(ap, char *));
	return (a);
}

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int	_printf(const char *format, ...)
{
    va_list	ap;
    int		i;
    int		a;

    i = 0;
    a = 0;
    va_start(ap, format);
    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            a += ft_convert(format[i], ap);
        }
        else
            a += ft_putchar(format[i]);
        i++;
    }
    va_end(ap);
    return (a);
}