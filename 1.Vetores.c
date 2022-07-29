#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tam 3
int main()
{
    int  i=0;
    float num[tam], r[tam], cubo[tam];
    while(i<tam){
    printf("digite o numero desejado:");
    scanf("%f", &num[i]);
    i++;
}
    i=0;
    while(i<tam){
    r[i]= sqrt(num[i]);
    printf("a raiz quadrada é: %.2f \n", r[i]);
    i++;
}
    i=0;
    while(i<tam){
    cubo[i]= pow(num[i], 3);
    printf(" o numero elevado ao cubo é: %.2f \n", cubo[i]);
    i++;
}
    i=0;
    while(i<tam){
    printf(" os valores originais são: %.2f \n", num[i]);
    i++;
}
return 0;
}
