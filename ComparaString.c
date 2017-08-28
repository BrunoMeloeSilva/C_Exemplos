//
//  main.c
//  Teste
//
//  Created by R2D2 on 10/07/17.
//  Copyright © 2017 R2D2. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "string.h"

void check(char *a, char *b, int (*cmp) (const char *, const char *));
int numcmp(const char *a, const char *b);

int main(void) {
    char s1[80], s2[80];
    
    printf("Informe duas strings separadas por Enter: \n");
    gets(s1);
    gets(s2);
    //Esta verificando se s1 o primeiro char e um caractere.
    if(isalpha(*s1))
        check(s1, s2, strcmp);
    else
        check(s1, s2, numcmp);
}

void check(char *a, char *b, int (*cmp) (const char *, const char *)){
    printf("Testando igualdade\n");
    if(!(*cmp)(a, b))
        printf("Igual\n");
    else
        printf("Diferente\n");
}

int numcmp(const char *a, const char *b){
    if(atoi(a)==atoi(b))
        return 0;
    else
        return 1;
}
