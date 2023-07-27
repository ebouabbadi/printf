#include "main.h"

/**
 * ft_strlen - Entry point
 * @str: arguments.
 * Return: Always count
 */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
