#include "main.h"

/**
 * ft_print_char - Entry point
 *
 * Return: Always 1
 */

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
