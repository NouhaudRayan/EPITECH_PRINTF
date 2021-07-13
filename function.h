/*
** EPITECH PROJECT, 2020
** function
** File description:
** function
*/

#ifndef FUNCTION
#define FUNCTION
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "specifer.h"
#include "flags.h"
#include "width.h"
#include <unistd.h>

void my_putchar(char);
int my_put_nbr(int);
void my_putstr(char const *str);
char *my_revstr(char *str);
int my_strlen(char const *str);
long my_longlen(long nb);
int my_getnbr(char const *str);
long my_atoll(char *str);
int my_put_nbrbase(int nb, int x);
int get_size(char *str, int i);
int my_first_size(va_list copy, char *str, int i);
char *for_strlen(char *str, int i);
int choice(int size_original, char *str, int i, va_list copy);
int size_str(va_list copy);
int my_nbr_base(int nb, int x);

#endif /* !function */