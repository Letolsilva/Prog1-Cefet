//Faça um programa que preencha uma matriz com os modelos de cinco carros. 
//Em seguida, preencha um vetor com o consumo desses carros. Calcule e mostre: (a) O modelo de carro mais econômico; 
//(b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 quilômetros.

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define TAM 80
#define L 5
int main()
{
    char Carro[L][TAM]; 
    float consumo[L], menor, x;
    int y;
        
    //Carros
    
    for (int i=0; i<L; i++){
            printf("\nNome do carro:");
                fflush(stdin);
                    scanf("%s", Carro[i]);
       }
       printf("--NOMES DOS CARROS---");
       for(int i=0; i<L;i++){
           printf("\n Carros:%s\n", Carro[i]);
       }
    //digitar o consumo
    printf("--CONSUMO DO CARRO--");
        for(int i=0; i<L; i++){
            printf("\nConsumo do carro: ");
            scanf("%f", &consumo[i]);
        }
        //Consumo do carro, quantos quilômetros cada um deles faz com um litro de combustível.
        //Carro mais economico e aquele que mais anda gastando a menor quantidade de litro (1l)
        
        menor= consumo[0];

        for(int i=0; i<L; i++)
        {
            if(consumo[i]>menor)
            {
                menor=consumo[i];
                y=i; 
            }   
        }

        printf("\t O carro mais economico é %s e roda %f km/l\n", Carro[y], menor);

        for(int i=0; i<L; i++){
        printf("\n O carro %s na distancia de 1000km vai consumir %f\n",Carro[i], 1000/consumo[i]);
        }
    


return 0;

} 
