/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** concatenate two strings
*/

#include "../../headers/my.h"
#include <stddef.h>

char *my_strcat(char *dest, char const *src)
{
    int index_dest = 0;
    int index_src = 0;

    while (dest[index_dest] != '\0') {
        index_dest++;
    }
    while (src[index_src] != '\0') {
        dest[index_dest] = src[index_src];
        index_dest++;
        index_src++;
    }
    dest[index_dest] = '\0';
    return dest;
}

char *my_strcatm(char *str1, char *str2)
{
    char *result = NULL;
    long index = 0;
    long str_index = 0;
    long len = 0;

    len = my_strlen(str1);
    len += my_strlen(str2);
    if (do_strmalloc(&result, len) == 84)
        return NULL;
    for (; str1[index] != '\0'; index++) {
        result[index] = str1[index];
    }
    for (; str2[str_index] != '\0'; str_index++) {
        result[index + str_index] = str2[str_index];
    }
    result[index + str_index] = '\0';
    return result;
}