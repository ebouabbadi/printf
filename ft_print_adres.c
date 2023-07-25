#include "main.h"

int	ft_print_adres(unsigned long n)
{
	int	count;

	count = 0;
	count += ft_print_string("0x");
	if (n == 0)
		count += ft_print_char('0');
	else
		count += ft_adres(n);
	return (count);
}

int	ft_adres(unsigned long n)
{
	int	count;

	count = 0;
	if (n > 15)
	{
		count += ft_adres(n / 16);
		count += ft_adres(n % 16);
	}
	else
	{
		if (n <= 9)
			count += ft_print_char(n + '0');
		else
			count += ft_print_char(n - 10 + 'a');
	}
	return (count);
}
