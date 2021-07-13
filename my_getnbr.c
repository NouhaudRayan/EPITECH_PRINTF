/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** Fonction Lib
*/

int my_signe(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '-')
            count++;
    if (count % 2 != 0)
        return (-1);
    return (1);
}

int my_getnbr(char *str)
{
    int i = 0;
    int nbr = 0;
    int signe = my_signe(str);

    if (str[i] < '0' && str[i] > '9')
        return (0);
    while (str[i] == '-' || str[i] == '+')
        i++;
    for (i; str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'); i++) {
            nbr = nbr * 10 + (str[i] - '0');
    }
    return (nbr * signe);
}