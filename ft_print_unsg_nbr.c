#include "main.h"

int	ft_print_unsg_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_print_char(n + '0');
	else
	{
		count += ft_print_nbr(n / 10);
		count += ft_print_nbr(n % 10);
	}
	return (count);
}
