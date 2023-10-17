#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * @str: string
 * return: 0
 */
void print_rev(char *s)
{
    int cpt=0;
    while(*s != '\0'){
        cpt++;
    }
    char str[cpt];
    for(int i=0; i<=cpt; i++){
        str[i]=s[cpt-i];
    }

    return(str);
}

