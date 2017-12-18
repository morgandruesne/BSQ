/*
** EPITECH PROJECT, 2017
** cat
** File description:
** cat
*/

#include "include.h"

void	get_big_scare(char *str, int *max, int *str_save, int line)
{
	int i = 0;
	int check = 0;

	for (i = 0; str[i + line]; i++, check = 0) {
		if (str[i + line] == '\n') {
			line += l_line(str);
			str_save[line + 1] = put_zero_begin(str, str_save, line, max);
			i = 0;
			check = 1;
		}
		if (str[i + line] == '.' && i != 0 && !check) {
			str_save[i + line] = getmin(str_save, str, i, line) + 1;
			*max = chek_max(str_save[i + line], *max);
			check = 1;
		}
		str_save[i + line] = check_int(str, str_save, i + line, check);
	}
}

void	put_x_for_finish(char *str, int *str_nb, int nb)
{
	int i;

	for (i = 0; nb != str_nb[i]; i++);
	for (int e = 0; e != nb; e++) {
		for (int c = 0; c != nb; c++) {
			str[i] = 'x';
			i--;
		}
		i += nb;
		i -= l_line(str);
	}
	write(1, str, my_strlen(str));
}
