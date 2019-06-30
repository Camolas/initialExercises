#include <stdio.h> 

    int main (void){
        // Matrizes def.: extensão de vetores-> utilizar matrizes vetores muitiderecionais (com linhas e colunas)

            int i = 0;
            int j = 0; 

            int vetor[3]={1,2,3};
            int matriz[3][4]={0,1,2,3,4,5,6,7,8,9,10,11}; //linhas e colunas respectivamente
            // pode-se utilizarem matrizes tri-, qua-...dimensionais
            //fazer blocos de matrizes {{1,2,3},{4,5,6},{7,8,9}}; ou ignora-se todas as chaves, ele percebe quando muda de linha :)
            for (i=0;i<vetor[i];i++){
             printf("\n -> %d", vetor[i]);
             }

             printf("\n\n\n"); // acessar ao membros usando o printf, no caso de  matriz temos 2 blocos de informação

            for(i=0;i< 3; i++){
                for(j=0;j<4;j++){
                    printf("\t\t %d", matriz[i][j]);
                }
                printf("\n");
            }

            printf("\n\n***Fim***\n\n ");

    return 0;
    }
