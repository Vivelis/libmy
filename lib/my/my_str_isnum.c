/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** fonction for my library
*/

#include "../headers/my.h"

char my_str_isnum(char *str)
{
    int i = 0;
    int nbr_start = 0;

    while (str[i] == ' ')
        i++;
    if (str[i] == '-')
        i++;
    nbr_start = i;
    while (is_number(str[i]) == 'y')
        i++;
    if (i > nbr_start)
        return 'n';
    return 'y';
}
