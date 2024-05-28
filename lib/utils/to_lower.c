/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** to_lower.C
*/

char *to_lower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
    }
    return str;
}
