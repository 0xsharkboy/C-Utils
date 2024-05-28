/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** my_putstr.c
*/

#include "cutils.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
