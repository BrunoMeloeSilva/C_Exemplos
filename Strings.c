//
//  main.c
//  Teste
//
//  Created by R2D2 on 10/07/17.
//  Copyright © 2017 R2D2. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[6], s2[6];
    gets(s1);
    gets(s2);
    printf("String 1: %s\t", s1);
    printf("String 2: %s\n", s2);
    //strcpy(s1,s2) : Copia s2 em s1, probrepondo s1.
    //Se s2 for menor que s1 e você imprimir todo o vetor s1, você percebera um lixo, que nunca
    //  aparece devico a terminação da string '/0'.
    strcpy(s1, s2);
    printf("String 1: %s\t", s1);
    printf("String 2: %s\n", s2);
    //strcat(s1,s2) : Concatena s2 ao final de s1.
    strcat(s1, s2);
    printf("String 1: %s\t", s1);
    printf("String 2: %s\n", s2);
    //strlen(s1) : retorna a quantidade de caracteres
    printf("Quantidade: %lu\n", strlen(s1));
    //strcmp(s1, s2) : Compara as strings e retorna um inteiro, 0 iguais, negativo se s1 < s2, positivo se s1 > s2.
    printf("s1 Igual a s2 ? %d\n", strcmp(s1, s2));
    //strchr(s1,ch) : Retorna um ponteiro para a primeira ocorrência de ch em s1.
    //Se usado como se segue, retorna a string da posicao encontrada ate o fim '/0'
    //Se usada com o retorno inteiro, se obtem um ponteiro para a primeira ocorrência de ch em s1, senao 0.
    printf("Primeira ocorrencia do char i : %s\n", strchr(s1, 'i'));
    //strstr(s1, s2) : Retorna um ponteiro para a primeira ocorrencia de s2 em s1.
    //idem as observacoes de strchr(s1, ch)
    printf("Primeira ocorrencia de s2 em s1 : %s\n", strstr(s1, s2));
    return 0;
}
