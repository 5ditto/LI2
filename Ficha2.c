#include <stdio.h>
#include <math.h>
#include <assert.h>

//Função para o calculo do perimetro

void perimetro (int a, int b, int c){
    int resultado;
    resultado = a+b+c;
    printf ("%d ", resultado);
}

//Função para o calculo da area

void area (int a, int b, int c){
    float p,resultado;
    p = (float)(a+b+c)/2;
    resultado = (p * (p- (float) a)*(p- (float) b)*(p- (float) c));
    resultado = sqrtf(resultado);
    printf("%.2f\n", resultado);
}

int main() {
    int a,b,c;

    assert(scanf("%d%d%d", &a, &b, &c) == 3);

    if ((a+b<=c) || (a+c<=b) || (b+c<=a)) //Invalido
        printf("INVALIDO\n");

    else {
        if ((a==b) && ((b==c)))
            printf("EQUILATERO ");
        else {
            if ((a*a)==(b*b+c*c) || (b*b)==(a*a+c*c) || (c*c)==(a*a+b*b))// RETANGULO
                printf("RETANGULO ");
            else{
                if ((a==b) || (a==c) || (b==c)) // ISOSCELES
                    printf("ISOSCELES ");
                else
                    printf("ESCALENO " );// ESCALENO
                }
            }
        perimetro(a,b,c);
        area(a,b,c);
        }


    return 0;
    }
