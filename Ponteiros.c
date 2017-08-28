//
//  main.cpp
//  Teste
//
//  Created by Bruno Silva on 09/09/12.
//  Copyright (c) 2012 Bruno Silva. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int i=5, *p;
    p=&i;
    
    printf("endereco do i: %p\n",&i);
    printf("valor    de i: %i\n", i);
    printf("\n");
    printf("endereco do          p: %p\n",&p);
    printf("valor de             p: %p\n", p);
    printf("valor do endereco em p: %i\n",*p);
    
    return 0;
}

