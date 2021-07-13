/*
** EPITECH PROJECT, 2020
** for strlen
** File description:
** sous fonction
*/

#include "function.h"

char *for_strlen(char *str, int i)
{
    int res = 0;
    char *tmp = malloc(sizeof(char) * i);

    for (i; str[i] >= '0' && str[i] <= '9'; i++) {
        tmp[res] = str[i];
        res++;
    }
    tmp[res] = '\0';
    return (tmp);
}