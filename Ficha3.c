#include <stdio.h>
#include <assert.h>

// Função que coloca n vezes o caracter c
void replicate (int n, char c){
    int i;
    for (i=0;i<n; i++)
        putchar (c);
}
int main() {
    int x, //Valor inserido == tamanho do padrão
        i; //Contador

    assert (scanf("%d", &x) == 1);

    for (i=1;i<x;i++) {
        replicate (i,'*');
        replicate (2*x-2*i,'.');
        replicate (i,'*');
        putchar('\n');
    }
    for (i=x;i>0;i--) {
        replicate (i,'*');
        replicate (2*x-2*i,'.');
        replicate (i,'*');
        putchar('\n');
    }

    return 0;
}
