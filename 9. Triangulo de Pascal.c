#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Digite o numero de linhas desejado: ");
    scanf("%d", &n);
    int mat[n][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            mat[i][j]=0;
        }
    }

    for(int i=0; i<n; i++){
        mat[i][0]=1;
        mat[i][i]=1;
        for(int i=0; i<n; i++){
            for(int j=1;j<i; j++){
                mat[i][j]=mat[i-1][j]+mat[i-1][j-1];
            }
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            if(mat[i][j]!=0){
           printf("%3d",mat[i][j]);
            }
        }
        printf("\n");
    } 
    return 0;
}
