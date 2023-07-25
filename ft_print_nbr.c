#include "main.h"

int	ft_print_nbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (ft_print_string("-2147483648"));
	if (n < 0)
	{
		n = -n;
		count = ft_print_char('-');
	}
	if (n <= 9)
		count += ft_print_char(n + '0');
	else
	{
		count += ft_print_nbr(n / 10);
		count += ft_print_nbr(n % 10);
	}
	return (count);
}
