#include <stdio.h>
#include <assert.h>

void repeat (int n, int c){
    int x;
    for (x=n; x>0; x--) {
        printf("%d", c);
    }
}
int main() {
    int dezenas, unidades, x=0 ,  i, j;
    int matriz[10][10]={0}; //Matriz com as dezenas em linhas e as unidades em colunas

    //Inclusão dos valores na matriz que regista o número de repetições
    while (x != (-1)){
        assert ((scanf("%d", &x)) == 1);
        dezenas = x/10;
        unidades = x%10;
        matriz[dezenas][unidades]++;//regista as ocorrencias

    }

    for (i=0; i<10; i++){ // dezenas
        printf("%d|", i);
        for (j=0;j<10;j++){// unidades
            if (matriz[i][j] > 0) {
                repeat(matriz[i][j], j);

            }
        }
        putchar('\n');
    }
    return 0;
/*
 *
 *  12 56 12 98 99 10 05
 *    0  1  2  3  4  5  6  7  8  9
 * 0                 1
 * 1  1  2
 * 2
 * 3
 * 4
 * 5                 1
 * 6
 * 7
 * 8
 * 9                         1  1
 */
}