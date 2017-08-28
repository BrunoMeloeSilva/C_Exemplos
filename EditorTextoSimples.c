//
//  main.c
//  Teste
//
//  Created by R2D2 on 10/07/17.
//  Copyright © 2017 R2D2. All rights reserved.
//

#include <stdio.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

/*Um editor de texto muito simples*/
int main(void) {
    register int t, i, j;
    printf("Digite uma linha vazia para sair.\n");
    for (t=0; t<MAX; t++) {
        printf("%d: ", t);
        gets(text[t]);
        if(!*text[t]) break;
    }
    
    //Poderia ser mais simples, mas assim é interessante.
    for (i=0; i<t; i++) {
        for (j=0; text[i][j]; j++) {
            putchar(text[i][j]);
        }
        putchar('\n');
    }
    
    return 0;
}
