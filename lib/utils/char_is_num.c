/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** char_is_num.c
*/

#include "cutils.h"

bool char_is_num(char c)
{
    if (c >= '0' && c <= '9') {
        return true;
    } else {
        return false;
    }
}
