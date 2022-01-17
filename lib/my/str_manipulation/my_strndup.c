/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strndup.c
*/

#include <stddef.h>
#include <stdlib.h>

char *my_strndup(char *str, int nbr)
{
    char *dup = NULL;

    if (str == NULL)
        return NULL;
    dup = malloc(sizeof(char) * (nbr + 1));
    if (dup == NULL)
        return NULL;
    for (int i = 0; i < nbr; i++) {
        dup[i] = str[i];
        if (str[i] == '\0')
            return dup;
    }
    return dup;
}