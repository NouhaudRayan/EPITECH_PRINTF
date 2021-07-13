/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** Fonction Lib
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
