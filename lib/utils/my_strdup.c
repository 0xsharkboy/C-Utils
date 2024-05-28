/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** my_strdup.C
*/

#include "cutils.h"

char *my_strdup(char *str)
{
    int len = my_strlen(str);
    char *cpy = malloc(sizeof(char) * (len + 1));

    for (int i = 0; str[i] != '\0'; i++) {
        cpy[i] = str[i];
    }
    cpy[len] = '\0';
    return cpy;
}
