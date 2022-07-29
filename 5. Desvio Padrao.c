#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10
int main ()
{
    float vet[N], soma, media, desvio, x;

    printf("Digite o numero:\n");

    for(int i=0; i< N; i++)  //digitar o vetor
    {
        printf("Vetor[%d]",i+1);
        scanf("%f", &vet[i]);
        soma+=vet[i];
    }
    printf("---VETOR 1---");// printar o vetor
    printf("\n");
    for(int i=0; i<N; i++ )
    {
        printf("\n %.2f\n ", vet[i]);
    }
        printf("\n");

    media=soma/N; //media
    printf("\n a media é %.2f \n", media);
    
    for(int i=0; i<N; i++){ // segunda op. vetor menos a media ao quadrado 
        x+=pow (vet[i]- media, 2);
        printf("\nresultado:%.2f\n", x);
    }
    desvio=sqrt(x * (1.0/(N-1))); // calcular o desvio 
    printf("\n O desvio padrão é: %.2f\n", desvio);
        
    
    return 0;
}
    