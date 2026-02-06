#include <stdio.h>

int main(){
    
    int i, j;
    int matriz[3][3];

    for(i = 0; i <3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");

    for(i = 0; i <3; i++){
        for(j = 0; j < 3; j++){
            printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Principal:\n");

    for(i = 0; i <3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                printf("%2d", 0);   
            
            } else{
                printf("%2d", matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("\nMatriz Zerada Acima da D.P:\n");

    for(i = 0; i <3; i++){
        for(j = 0; j < 3; j++){
            if(j > i){
                printf("%2d", 0);
            } else{
                printf("%2d", matriz[i][j]);
            }
        }
        printf("\n");
    }

    for(i = 0; i <3; i++){
        for(j = 0; j < 3; j++){
            if(j > i){
                printf("%2d", 0);
            } else{
                printf("%2d", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}