/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** do_strmalloc.c
*/

#include <stdlib.h>
#include <stddef.h>
#include "../headers/my.h"

char *do_strmalloc(ssize_t size)
{
    char *str = NULL;

    str = malloc(sizeof(char) * (size + 1));
    if (!str)
        my_puterror("error: malloc have failed");
    return str;
}
