#include "main.h"

/**
 * ft_print_hexa - Entry point
 *
 * Return: Always count
 */


int	ft_print_hexa(unsigned int n, const char format)
{
	int	count;

	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (n >= 16)
	{
		count += ft_print_hexa(n / 16, format);
		count += ft_print_hexa(n % 16, format);
	}
	else
	{
		if (n <= 9)
			count += ft_print_char(n + '0');
		else
		{
			if (format == 'x')
				count += ft_print_char(n - 10 + 'a');
			if (format == 'X')
				count += ft_print_char(n - 10 + 'A');
		}
	}
	return (count);
}
