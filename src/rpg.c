/*
** EPITECH PROJECT, 2026
** d
** File description:
** rpg
*/

#include <stdlib.h>

char **generate_labyrinthe(void)
{
    char **res = malloc(sizeof(char *) * 21);
    for (int i = 0; i < 20; i++) res[i] = malloc(sizeof(char) * 21);
    
}

int main(void)
{
    char **map = generate_labyrinthe();
    return 0;
}