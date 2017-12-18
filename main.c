/*
** EPITECH PROJECT, 2017
** cat
** File description:
** cat
*/

#include "include.h"

void initsave(save_scare *save)
{
	save->tail_scare = 0;
	save->position = 0;
}

int	main(int ac, char **av)
{
	char	*buffer;
	char	*str;
	int	line = 0;
	int	*str_save;
	int	max;

	max = 0;
	if (ac > 1) {
		buffer = get_files(av[1]);
		str = buffer + l_line(buffer);
		if (str[0] == '\0')
			return (1);
		str_save = malloc(sizeof(int) * my_strlen(str));
		str_save = got_begin(str_save, str, &line, &max);
		str_save[line + 1] = put_zero_begin(str, str_save, line, &max);
		get_big_scare(str, &max, str_save, line);
		put_x_for_finish(str, str_save, max);
	}
	return (0);
}
