/*
** EPITECH PROJECT, 2017
** my_pushswap
** File description:
** header
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "struct.h"

#ifndef _MY_BSQ_
#define _MY_BSQ_

int	l_line(char *str);
void	my_putchar(char c);
int	my_getnbr(char *str);
int	chek_max(int a, int b);
char	*b_0(char *str, int size);
int	my_putstr(char const *str);
void	initsave(save_scare *save);
int	my_strlen(char const *str);
char	*concat(char *dest, char *src);
char	*get_files(char const *filepath);
char	*fs_read(int fd, char *buffer, int size);
int	*put_zero(char *str, int *str_save, int i);
int	getmin(int *str,char *str1, int i, int line);
int	*got_begin(int *str_save, char *str, int *line, int *max);
void	put_x_for_finish(char *str, int *str_nb, int nb);
int	put_zero_begin(char *str, int *str_save, int line, int *max);
int	check_int(char *str, int *str_save, int i, int check);
void	get_big_scare(char *str, int *max, int *str_save, int line);

#endif
