#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define TAM 80
int main ()
{
    char pa[TAM], pa2[TAM],pa3[TAM], cop[TAM], C, l, l2;
    int n, contar, cont;
    //string 1
    printf ("\n Informe uma string: ");
    fflush(stdin);
    fgets (pa, 80, stdin);
    pa[strlen(pa)-1]='\0';
    // tamanho da string
    int size=strlen(pa);
    //menu
    printf("selecione a opção desejada\n");
    printf("digite:\n");
    printf("\n 1 para concatear\n 2 para comparar as strings \n 3 para contar caracteres\n 4 para ver se string S2 é substring de S1\n");
    scanf("%d", &n);
 
    if(n==1){
    printf (" Esta palavra tem %d caracteres.\n", size);
    printf ("A palavra digitada é %s\n", pa);
    strcat (cop,"concatenada");
    printf ("A palavra concatenada é %s\n", strcat(pa, cop));

    }
    if(n==2)
    {
    fgetc(stdin);
    printf ("Digite a String 2: ");
    fgets(pa2,80, stdin);
    pa2[strlen(pa2)-1]='\0';
    size=strlen(pa2);
    printf ("Esta palavra tem %d caracteres.\n", size);
    printf("A palavra digitada foi %s\n", pa);
    
    if(strncmp(pa, pa2, TAM)==0){
        printf("são iguais");    
    }
    else {
        printf("são diferentes");
    }
   
    printf ("A palavra concatenada é %s\n", strcat(pa, pa2));

    }
    if(n==3){
        printf("Qual caractere deseja contar: ");
        scanf(" %c", &C);

        for(int i=0; i<TAM; i++){
            if (pa[i]==C){
                contar++;
            }
        }
        printf("\nDigite qual letra deseja substituir: ");
        scanf(" %c", &l);
        printf("Digite a letra para por no lugar: ");
        scanf(" %c", &l2);
        for(int i=0; i <size; i++){
            if(pa[i]==l) {
                cont++;
                pa[i]= l2;
                break;
            }
        }


        printf("Tem %d caracteres repetidos", contar);
        printf("a nova palavra é: %s", pa);

    }
    if(n==4){
    fgetc(stdin);
    printf ("Digite a String menor : ");
    fgets(pa3,80, stdin);
    pa3[strlen(pa3)-1]='\0';
    size=strlen(pa3);
    printf ("Esta palavra tem %d caracteres.\n", size);
    printf("A palavra digitada foi %s\n", pa3);
    if(strstr(pa, pa3)!=NULL){
        printf(" É substring");
    }
    else{
        printf("Não é substring");
    }

    }

    return 0;
}