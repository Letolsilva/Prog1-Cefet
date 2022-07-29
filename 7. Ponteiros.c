#include <stdio.h>
#include <stdlib.h>
#define TAM 10
void cria_vetor (int *vetor, int conteudo)
{
    int i=0;
    int *inicio;
    inicio = vetor;
    while(i<TAM)
    {
        *vetor=conteudo;
        vetor++;
        i++;
        conteudo++;
    }

    vetor=inicio;
    for(int i=0; i<TAM; i++){
        printf("\n [%d]: %d", (i+1), *vetor++);
    }
}
void max_min(int *vetor,int *max, int *min)
{
        int menor=10000;
        int maior=0;

        for(int i=0; i<TAM; i++)
        {
            if(menor>vetor[i])
            {
                menor=vetor[i];
                *min=vetor[i];
            }
        
            if(maior<vetor[i])
            {   
                maior=vetor[i];
                *max=vetor[i];
            }
        }
    
}
void soma(int *vet, int *vet2, int *vet3, int x, int y)
{   
    int tam3;  
 
    if(x==y){
       tam3=x;
    }
    
    else if(x>y){
        tam3=x;
        
    }
    
    else if(x<y)
    {
        tam3=y;
    }
    printf("%d\n", tam3);
    vet3=(int*)malloc(tam3 *sizeof(int));

    for(int i=0; i<tam3; i++)
    {
        vet3[i]=vet[i]+vet2[i];
    }
    for(int i=0; i<tam3; i++){
    printf("\nA soma é: %d\n", vet3[i]);
    }


}

int main()
{
    int vetor[TAM],conteudo = 1, min, max, opçao;
    int *vet, *vet2, *vet3, x, y;
    while(opçao!=0)
    {
        printf("---MENU---");
        printf("\nDigite:\n 1- exercicio 1 \n 2- exercicio 2 \n 3- exercicio 3 \n 0-sair");
        scanf("%d", &opçao);
        switch(opçao)
        {
            case 1:
            cria_vetor(vetor, conteudo);
            break;
            case 2:
            max_min(vetor, &max, &min);
            printf("\nO maior valor é: %d\nO menor valor é: %d", max, min);
            break;
            case 3:
            printf("\n*Vetor 1\n");
            printf("\nDigite o tamanho do vetor 1: \n");
            scanf("%d", &x);
            vet=(int*)malloc(x *sizeof(int));

            printf("\n*Vetor 2\n");
            printf("\nDigite o tamaho do vetor 2: \n");
            scanf("%d", &y);
            vet2=(int*)malloc(y *sizeof(int));

            for(int i=0; i<x; i++)
            {
                printf("\n->Vetor 1\n Digite os numeros desejados para %d do 1° vetor: ", i+1);
                scanf("%d", &vet[i]);
            }

            for(int i=0; i<y; i++)
            {
                printf("\n->Vetor 2\n Digite os numeros desejados para %d do 2° vetor: ", i+1);
                scanf("%d", &vet2[i]);
            }
            soma(vet, vet2, vet3, x, y);
            break;
        } 
    }

    return 0;
}
