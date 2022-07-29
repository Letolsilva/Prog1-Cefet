#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define NUM 2
#define TAM 5
int cont=0;
typedef struct carros
{
	char modelo[20];
	char fabricante[20];
	int ano;
	float consumo;
}carro;

void inserir(carro car[TAM])
{
       for(int i = 0; i < TAM; i++)
        {
                if (car[i].consumo == -1) 
                {
                    printf("\nInforme o modelo: ");
                    scanf(" %s", car[i].modelo);
                    printf("\nInforme o fabricante: ");
                    scanf("%s", car[i].fabricante);
                    printf("\nInforme o ano: ");
                    scanf("%d", &car[i].ano);
                    printf("\nInforme o consumo em km por litro: \n");
                    scanf("%f", &car[i].consumo);
                    i=TAM;
                    cont++;
                }
                
        }
       
}
void contar(carro car[TAM]){
    for(int i=0;i<TAM;i++)
    {
        if(car[i].consumo!=-1)
        cont++;
    }
}

void remover(carro car[TAM])
{
    int index;
     if(cont == 0)
    {
        printf("Não tem nenhum carro, por favor cadastre primeiro!");
    }
    if(cont!=0)
    {
        printf("->Carros cadastrados");
        printf("%d", cont);
        for(int i=0; i<cont; i++)
        {
            printf("[%d]",i);
            printf("\nModelo: %s\n",car[i].modelo );
            printf("\nFabricante: %s\n", car[i].fabricante);
            printf("\nAno: %d\n", car[i].ano);
            printf("\nConsumo: %.2f\n", car[i].consumo);
            printf("\n");
        }
            printf("Informe o index que deseja apagar: ");
            scanf("%d", &index);
            for(int i=0; i<cont; i++)
            {
                if(i==index)
                { 
                    car[i].consumo=-1;
                
                }  
        
            }
            
            printf("\n->Atualização\n");
            for(int i=0; i<cont; i++)
            {
                if(car[i].consumo != -1) 
                {
                    printf("\n->[%d]",i);
                    printf("\nModelo: %s\n",car[i].modelo );
                    printf("\nFabricante: %s\n", car[i].fabricante);
                    printf("\nAno: %d\n", car[i].ano);
                    printf("\nConsumo: %.2f\n", car[i].consumo);
                    printf("\n");
                }
            }
    }
}


void listagem(carro car[TAM])
{
    char list_fab[20];
    int size, a;
    if(cont == 0)
    {
        printf("Não tem nenhum carro, por favor cadastre primeiro!");
    }
    if(cont!=0)
    {   
        printf("Digite o nome do fabricante que deseja listar: ");
        getc(stdin);
        fgets(list_fab, 20, stdin);
        list_fab[strlen(list_fab)-1]='\0';
        size=strlen(list_fab);


        for(int i=0; i<=size; i++)
        {
            
            list_fab[i]=tolower(list_fab[i]);
        }

        printf("* Os carros do fabricante %s são: ", list_fab );

        for(int i=0; i<cont; i++)
        {
            if(car[i].consumo!=-1)
            {
                if(strcmp(car[i].fabricante, list_fab)==0)
                {
                    printf("\nModelo: %s\n",car[i].modelo );
                    printf("\nAno: %d\n", car[i].ano);
                    printf("\nConsumo: %.2f", car[i].consumo);
                }
            }
        }
    }
}

void mais_economico(carro car[TAM])
{
    int menor=0;
    char Mais_eco[20];
    if(cont==0){
        printf("\nPor favor cadastre um carro!\n");
    }
    if(cont!=0)
    {
        for(int i=0; i<cont; i++)
        {
                if(car[i].consumo>menor)
                {
                    menor=car[i].consumo;
                    strcpy(Mais_eco,car[i].modelo);
                }
        }
    
        printf("\n* O modelo do carro mais economico é: %s ", Mais_eco);
        printf("\nO seu consumo é: %d ", menor);
    }

}
void maior_consumo(carro car[TAM])
{
    int maior=10000;
    char Maior_cons[20];
    if(cont==0){
        printf("\nPor favor cadastre um carro!\n");
    }
    if(cont!=0)
    {
        for(int i=0; i<cont; i++)
        {   
            if(car[i].consumo!=-1)
            {
                if(car[i].consumo<maior)
                {
                    maior=car[i].consumo;
                    strcpy(Maior_cons,car[i].modelo);
                }
            }
        }
    
        printf("\n* O modelo do carro com maior consumo é: %s ", Maior_cons);
        printf("\no seu consumo é: %d ", maior);
    }

}
void mais_novo(carro car[TAM])
{
    int novo=0;
    char mais_novo[20];
    if(cont==0)
    {
        printf("\nPor favor cadastre um carro!\n");
    }
    for(int i=0; i<cont; i++)
        {
                if(car[i].ano>novo)
                {
                    novo=car[i].ano;
                    strcpy(mais_novo,car[i].modelo);
                }
        }
        printf("\n* O carro mais novo é: %s ", mais_novo);
        printf("\n Com o ano de %d", novo);

}
void imprimir(carro car[TAM])
{
    for(int i=0; i<cont; i++)
    {
        printf("[%d]",i);
        printf("\nModelo: %s\n",car[i].modelo );
        printf("\nFabricante: %s\n", car[i].fabricante);
        printf("\nAno: %d\n", car[i].ano);
        printf("\nConsumo: %.2f\n", car[i].consumo);
        printf("\n");
    }
}

int main()
{
    FILE *arquivo;
    carro car[TAM];
    int menu=1, cont, i;
    int resp=0;

        for( i=0; i<TAM; i++)
        {
            car[i].consumo=-1;
        }

        arquivo=fopen("dados.bin", "rb");
        if(arquivo == NULL)
        {
            arquivo=fopen("dados.bin", "wb");
            for(i=0;i<TAM; i++)
            {
                car[i].consumo=-1;

            }
            cont=0;
        }
        else
        {
            fread( car, sizeof(carro), TAM, arquivo);
            contar(car);
        }
            fclose(arquivo);


        while(menu!=8)
        {   
            printf("\n\n");
            printf("\tSeja bem vindo!\t");
            printf("\n");
            printf("\n------------MENU-----------\n");
            printf("\n 1-Cadastrar carro \n 2-Remover carro \n 3-Listar carros de determinado fabricante \n 4-Listar carro mais econômico \n");
            printf(" 5-listar o carro com o maior consumo \n 6-listar o carro mais novo \n 7-Imprimir\n 8-Sair\n");
            printf("\nDigite sua escolha: ");
            scanf("%d", &menu);

            switch(menu)
            {
                case 1:
                inserir(car);
                break;
                case 2:
                remover(car);
                break;
                case 3:
                listagem(car);
                break;
                case 4:
                mais_economico(car);
                break;
                case 5:
                maior_consumo(car);
                break;
                case 6:
                mais_novo(car);
                break;
                case 7:
                imprimir(car);
                break;
                case 8:
                printf("\tObrigada por utilizar o programa! até a próxima!\t\n");
                break;
                default:
				printf("Opcão inválida, tente novamente.\n");
                break;

            }
        }
        arquivo=fopen("dados.bin", "wb");
        fwrite(car, sizeof(carro), TAM, arquivo);
        fclose(arquivo);
    return 0;
}