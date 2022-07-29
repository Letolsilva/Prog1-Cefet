    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #define TAM 80
    int main ()
    {
    char re[TAM], invertida[TAM];
    int num=0, tamanho=0;
    printf("digite a palavra\n");
    fgets(re, 80, stdin);
    tamanho=strlen(re);
    re[tamanho-1]='\0';
    tamanho=strlen(re);
    //inverter a palavra
    while  (num<tamanho)
    {
        invertida[tamanho-1-num]= re[num];
        num++;
    }
    printf("invertida é:%s\n", invertida);

    //tratamentos 
    for( int i=0; i<tamanho; i++){
        if(invertida[i]==' '){
            for ( int j=i; j<tamanho; j++){
                invertida[j]= invertida[j+1];
            }
        }
  
    }
 
    for( int i=0; i<tamanho; i++){
        if(invertida[i]=='.'){
            for ( int j=i; j<tamanho; j++){
                invertida[j]= invertida[j+1];
            }
        }
  
    }

    for( int i=0; i<tamanho; i++){
        if(invertida[i]==','){
            for ( int j=i; j<tamanho; j++){
                invertida[j]= invertida[j+1];
            }
        }
  
    }
  
 
       for( int i=0; i<tamanho; i++){
        if(re[i]=='-'){
            for ( int j=i; j<tamanho; j++){
                re[j]= re[j+1];
            }
        }
  
    }
    printf("O resultado com os tratamentos são:%s\n", invertida);

    
    for(num=0; num<tamanho; num++)
    {
        invertida[num]= toupper(invertida[num]);
        re[num]= toupper(re[num]);
    }
    //comparaçoes
    if(strcmp(re,invertida)==0)
    {
        printf("\nÉ palíndromo\n");
    }
    else
    {
        printf("\nNão é palíndromo\n");
    }
    printf("%s\n", re);
    printf("%s\n", invertida);



return 0;

}
