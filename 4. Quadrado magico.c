#include <stdio.h>
#include <stdlib.h>
#define M 3
int main ()
{
    int mat[M][M], i, j, erro=0, soma,total, l, c;

    printf("Digite uma 1°matriz:\n");

    for(i=0; i< M; i++)  //digitar a  matriz
    {
        for(j=0; j<M; j++)
        {
            printf("Matriz[%d][%d]=",i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    printf("---MATRIZ 1---");// printar a  matriz
    printf("\n");
    
    for(int i=0; i<M; i++ ){
        for(int j=0; j<M; j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    soma=0;
    for(l=0; l<M; l++){ //soma da diagonal principal
        soma+=mat[l][l];
    }
        printf("\nA soma da diagonal principal é %d\n", soma);
    
    total=soma; 
    soma=0;
    for(l=0; l<M; l++){ //soma da diagonal secundaria 
        soma+=mat[l][M-1-l];
    }
        printf("\nA soma da diagonal secundaria é %d\n", soma);

    if(total!=soma){ // se as somas das diagonais nao forem iguais
        printf("diagonais diferentes");
        erro=1;
    }
    for(l=0; l<M; l++){ //soma das linhas
        soma=0;
        for(c=0; c<M; c++){
            soma+=mat[l][c];
        }
        printf("\nA soma da linha %d é %d\n", l, soma);

        if(total!=soma){ // verificar se todas as linhas tem a mesma soma
            printf("a linha %d é diferente", l);
            erro=1;
    }
    }

    for(c=0; c<M; c++){ //soma das colunas
        soma=0;
        for(l=0; l<M; l++){
            soma+=mat[l][c];
        }
        printf("\nA soma da coluna %d é %d\n", c, soma);
        if(total!=soma){ //verificar se todas as colunas sao iguais
        printf("a coluna %d é diferente", c);
        erro=1;
    }
    }
    //verificar se e matriz magica
    if(erro!=0){
        printf("\n---Não é matriz quadrada magica---\n");
    }
    else{
        printf("\n--é matriz quadrada magica---\n");
    }

    return 0;
}
