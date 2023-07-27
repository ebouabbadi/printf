#include "main.h"


/**
 * ft_print_string - Entry point
 *
 * Return: Always count
 */

int	ft_print_string(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_print_char(str[i]);
		i++;
	}
	return (i);
}
