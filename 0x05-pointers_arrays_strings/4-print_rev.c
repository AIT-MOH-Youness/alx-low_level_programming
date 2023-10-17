#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
    int cpt=0;
    while(*s != '\0'){
        cpt++;
        s++;
    }
    
    for( int i=cpt ; i >=0; i--){
        _putchar(*s);
        s--
    }

}

