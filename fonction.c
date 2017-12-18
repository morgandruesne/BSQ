/*
** EPITECH PROJECT, 2017
** cat
** File description:
** cat
*/

#include "include.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_putstr(char const *str)
{
	int	i = 0;

	for (i = 0; str[i] != '\0'; i++)
		my_putchar(str[i]);
	return (0);
}

int	my_strlen(char const *str)
{
	int	i = 0;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++);
	return (i);
}

int	my_getnbr(char *str)
{
	int	i = 0;
	int	res = 0;
	int	moins = 1;

	if (str[i] == '-') {
		i++;
		moins = -1;
	}
	for (; str[i] != '\0'; i++)
		res = res * 10 + str[i] - '0';
	res *= moins;
	return (res);
}

int	l_line(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\n'; i++);
	return (i+1);
}
