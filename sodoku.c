#include <stdio.h>


int checkHorizontal(int matriz[9][9]){

     int i, j, k, lat = 1;

     for(i = 0; i < 9 && lat; i++)
        for(j = 0; j < 9 && lat; j++)
            for(k = 0; k < 9 && lat; k++)
                if((j != k) && (matriz[i][j] == matriz[i][k]))
                    lat = 0;

     return lat;
}

int checkVertical(int matriz[9][9]){

    int i, j, k, lat = 1;

    for(j = 0; j < 9 && lat; j++)
        for(i = 0; i < 9 && lat; i++)
            for(k = 0; k < 9 && lat; k++)
                if((i != k) && (matriz[i][j] == matriz[k][j]))
                    lat = 0;

    return lat;
}

void popularMatriz(int matriz[9][9]){

    int i, j;

    printf("\n   Digite os valores do quadrado a ser testado:  ");

    for(i = 0; i < 9; i++)
        for(j = 0; j < 9; j++){
            scanf("%i", &matriz[i][j]);
            while(matriz[i][j] < 1 || matriz[i][j] > 9){
                printf("\n   Somente valores maiores que 0 e menores ou iguais a 9");
                printf("\n   sao permitidos no jogo de sudoku, digite outro valor.");
                scanf("%i", &matriz[i][j]);
            }
        }
}

int checarMenor(int mini[3][3]){
    int i, j, num, existe = 0;

    for(num = 1; num <= 9; num++){
        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                if(mini[i][j] == num) existe++;
        if(existe > 1) return 0;
        existe = 0;
    }

    return 1;
}

int checarMenores(int matriz[9][9]){

    int i, j, k, l, mini[3][3];

    for(i = 0; i < 9; i += 3)
        for(j = 0; j < 9; j += 3){
            for(k = 0; k < 3; k++)
                for(l = 0; l < 3; l++)
                    mini[k][l] = matriz[k+i][l+j];
            if(!checarMenor(mini))
                return 0;
        }

    return 1;
}
int main(){
    int matriz[9][9];
    popularMatriz(matriz);

    if(checkHorizontal(matriz) && checkVertical(matriz) && checarMenores(matriz))
        printf("\n   A matriz inserida forma um Sudoku. Parabéns!");
    else
        printf("\n   A matriz inserida nao forma um Sudoku. Que pena!");

    return 0; //
}