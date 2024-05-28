/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** starts_with.c
*/

#include "cutils.h"

bool starts_with(char *str, char *start)
{
    int len = my_strlen(str);

    if (len < my_strlen(start)) {
        return false;
    }
    for (int i = 0; start[i] != '\0'; i++) {
        if (start[i] != str[i]) {
            return false;
        }
    }
    return true;
}
