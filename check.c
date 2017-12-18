/*
** EPITECH PROJECT, 2017
** cat
** File description:
** cat
*/

#include "include.h"

int chek_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int check_int(char *str, int *str_save, int i, int check)
{
	if (str[i] == 'o' && i != 0 && !check)
		str_save[i] = 0;
	return (str_save[i]);
}

int getmin(int *str,char *str1, int i, int line)
{
	int nb1 = str[(i - 1) + line];
	int nb2 = str[i + (line - l_line(str1))];
	int nb3 = str[i - 1 + line - l_line(str1)];

	if (nb3 <= nb2 && nb3 <= nb1)
		return (nb3);
	if (nb1 <= nb2 && nb1 <= nb3)
		return (nb1);
	if (nb2 <= nb1 && nb2 <= nb3)
		return (nb2);
	return (0);
}
