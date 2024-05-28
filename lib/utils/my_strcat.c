/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** my_strcat.c
*/

#include "cutils.h"

char *my_strcat(char *str1, char *str2)
{
    int len_str1 = my_strlen(str1);
    int len_str2 = my_strlen(str2);
    char *cat = malloc(sizeof(char) * (len_str1 + len_str2 + 1));

    for (int i = 0; i < len_str1; i++) {
        cat[i] = str1[i];
    }
    for (int j = 0; j < len_str2; j++) {
        cat[len_str1 + j] = str2[j];
    }
    cat[len_str1 + len_str2] = '\0';
    return cat;
}
