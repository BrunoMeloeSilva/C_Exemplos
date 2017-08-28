
#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     int tempo=548;
     long double montante=305138.71;
     long double percentualJuros=(0.01662652/100.0);
     long double juros = (montante*percentualJuros), jurosacumulado=0,total;
     int i=0;
     
     jurosacumulado+=juros;
     total = montante+jurosacumulado;
     printf("Montante = %Lf -- #Taxa juros dia = %Lf -- Juros = %Lf -- Juros Acumulado = %Lf -- Total = %Lf\n",montante,percentualJuros,juros,jurosacumulado,total);
     for (i=1; i<tempo; i++) {
     montante=total;
     juros = (total*percentualJuros);
     jurosacumulado+=juros;//83
     total=montante+juros;//583
     printf("Montante = %Lf -- *Taxa juros dia = %Lf -- Juros = %Lf -- Juros Acumulado = %Lf -- Total = %Lf\n"
     ,montante          ,percentualJuros        ,juros           ,jurosacumulado        ,total);
     }
     */
    
    int tempo=185;
    long double montante=(87971.95+208801.34);
    long double percentualJuros=(0.01662652/100.0);
    long double juros = (montante*percentualJuros), jurosacumulado=juros,total=montante+jurosacumulado;
    int i=0;
    
    printf("%Lf\n\n",montante);
    for (i=1; i<tempo; i++) {
        montante=total;
        juros = (total*percentualJuros);
        jurosacumulado+=juros;
        total=montante+juros;
    }
    
    printf("%Lf\n",total);
    return 0;
}
