/*
** EPITECH PROJECT, 2020
** MATCH
** File description:
** NO DESCRIPTION FOUND
*/

int match(char const *s1, char const *s2)
{
    int k = 0;
    int j = 0;
    
    while (s1[k]) {
        while (s1[k] == s2[j]) {
            k = k + 1;
            j = j + 1;
            if (s1[k] == '\0' && s2[j] == '\0')
                return (1);
        }
        while (s2[j] == '*' && s2[j + 1] == '*') {
            j = j + 1;
        }
        if (s2[j] == '*') {
            while (s2[j + 1] != s1[k] && s1[k]) {
                k = k + 1;
            }
        }
        else {
            return (0);
        }
        j = j + 1;
    }
    if (s1[k] == '\0' && s2[j] == '\0')
      return (1);
    else
      return (0);
}
