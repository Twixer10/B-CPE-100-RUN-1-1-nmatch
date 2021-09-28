/*
** EPITECH PROJECT, 2020
** N MATCH
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my.h"
#include "match.c"

int nmatch(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int total = 0;
    char *to_compare[strlen(s1)];
    
    while (s1[i]) {
        to_compare[j] = s1[i];
        if(match(to_compare, s2) == 1) {
            total = total + 1;
            j = -1;
            *to_compare = 0;
        }
        j = j + 1;
        i = i + 1;
    }
    return (total);
}
