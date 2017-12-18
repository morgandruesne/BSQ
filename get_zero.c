/*
** EPITECH PROJECT, 2017
** cat
** File description:
** cat
*/

#include "include.h"

int put_zero_begin(char *str, int *str_save, int line, int *max)
{
	if (str[line] == 'o')
		str_save[line] = 0;
	if (str[line] == '.') {
		str_save[line] = 1;
		*max = chek_max(str_save[line], *max);
	}
	return (str_save[line]);
}

int *put_zero(char *str, int *str_save, int i)
{
	if (str[i] == 'o' && i != 0) {
		str_save[i] = 0;
	}
	return (str_save);
}

int *got_begin(int *str_save, char *str, int *line, int *max)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
		str_save[i] = put_zero_begin(str, str_save, i, max);
	*line += l_line(str);
	str_save[*line] = put_zero_begin(str, str_save, i, max);
	return (str_save);
}
