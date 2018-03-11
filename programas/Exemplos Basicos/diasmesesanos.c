#include <stdio.h>
int main()
{

    //Quantos anos meses e dias tem em 1329 dias
    int dias, anos, semanas, meses;

    dias = 1329;

    // Converter dias para anos, semanas and dias
    anos = dias/365;
    semanas = (dias % 365)/7;
    dias = dias - ((anos*365) + (semanas*7));

    printf("anos: %d\n", anos);
    printf("semanas: %d\n", semanas);
    printf("dias: %d \n", dias);

    return 0;
}
