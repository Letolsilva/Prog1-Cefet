#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int dia, mes, ano, A=0, B=0, C=0, D=0, E=0, dia_juliano=0, dia_semana=0;
    char nova_data;
    do{
        printf("Digite o dia, mes e ano desejado:\n");
        printf("\nDia: ");
        scanf("%d", &dia);
        printf("\nMês: ");
        scanf("%d", &mes);
        printf("\nAno: ");
        scanf("%d", &ano);

        if(mes<3){
            ano=ano - 1;
            mes=mes + 12;
            printf("com o mes anterior a março o ano agora é: %d\n", ano);
            printf("com o mes anterior a março o mes agora é: %d\n", mes);
        }
        //Se data for igual ou posterior a 15/10/1582
        if((ano > 1582) || (mes>10 && ano==1582) || (dia>=15 && mes==10 && ano && 1582)){

            A = (ano / 100);
            B = (A / 4);
            C = 2 - A + B;
        }
        else
        C=0;

        D = 365.25 * (ano + 4716);
        E = 30.6001*(mes + 1);
        dia_juliano = D + E + dia + C - 1524;
        dia_semana = dia_juliano % 7;
        if(dia_semana==0){
        printf("\nO dia da semana e segunda feira\n");
        }
        if(dia_semana==1){
        printf("\nO dia da semana e terça feira\n");
        }
        if(dia_semana==2){
        printf("\nO dia da semana e quarta feira\n");
        }
        if(dia_semana==3){
        printf("\nO dia da semana e quinta feira\n");
        }
        if(dia_semana==4){
        printf("\nO dia da semana e sexta feira\n");
        }
        if(dia_semana==5){
        printf("\nO dia da semana e sábado \n");
        }
        if(dia_semana==6){
        printf("\nO dia da semana e domingo\n");
        }
                printf("\n");
        printf("---DEZ ANOS DEPOIS---");
                printf("\n");
        
        for(int i=1; i<=10; i++){
        ano=ano+1;
        if(mes<3){
            ano=ano - 1;
            mes=mes + 12;
            printf("com o mes anterior a março o ano agora é: %d\n", ano);
            printf("com o mes anterior a março o mes agora é: %d\n", mes);
        }
        //Se data for igual ou posterior a 15/10/1582
        if((ano > 1582) || (mes>10 && ano==1582) || (dia>=15 && mes==10 && ano && 1582)){

            A = (ano / 100);
            B = (A / 4);
            C = 2 - A + B;
        }
        else
        C=0;
        
        D = 365.25 *(ano + 4716);
        E = 30.6001 * (mes + 1);
        dia_juliano = D + E + dia + C - 1524;
        
        if(dia_juliano%7==0)
        printf("\n no ano %d o dia da semana é segunda feira\n", ano);
        if(dia_juliano%7==1)
        printf("\n no ano %d o dia da semana é terça feira\n", ano);
        if(dia_juliano%7==2)
        printf("\n no ano %d o dia da semana é quarta feira\n", ano);
        if(dia_juliano%7==3)
        printf("\n no ano %d o dia da semana é quinta feira\n", ano);
        if(dia_juliano%7==4)
        printf("\n no ano %d o dia da semana é sexta feira\n", ano);
        if(dia_juliano%7==5)
        printf("\n no ano %d o dia da semana é sábado\n", ano);
        if(dia_juliano%7==6)
        printf("\n no ano %d o dia da semana é domingo\n", ano);
        
        }

        printf("\nDeseja calcular uma nova data? digite S para sim e N para não\n");
        scanf(" %c",&nova_data);

    } while (nova_data=='S' || nova_data=='s');

return 0;   

}
