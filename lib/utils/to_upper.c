/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** to_upper.c
*/

#include "cutils.h"

char *to_upper(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 'a' - 'A';
        }
    }
    return str;
}
