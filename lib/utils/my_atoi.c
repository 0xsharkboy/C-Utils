/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** my_atoi.c
*/

#include "cutils.h"

int my_atoi(char *str)
{
    int value = 0;
    int sign = 1;

    if (*str == '+' || *str == '-') {
        if (*str == '-')
            sign = -1;
        str++;
    }
    for (; char_is_num(*str); str++) {
        value *= 10;
        value += (int)(*str - '0');
    }
    return value * sign;
}
