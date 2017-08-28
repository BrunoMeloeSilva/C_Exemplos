//
//  main.c
//  C
//
//  Created by R2D2 on 13/08/17.
//  Copyright © 2017 R2D2. All rights reserved.
//
//  Escreve em um arquivo texto.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    char ch;
    
    if((fp = fopen("/Users/r2d2/Documents/C/texto.txt", "w")) == NULL){
        printf("O arquivo não pode ser aberto.\n");
        exit(1);
    }
    
    do{
        ch = getchar();
        putc(ch, fp);
    }while(ch != '$');
    
    fclose(fp);
    
    return 0;
}
