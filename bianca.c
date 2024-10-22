#include <stdio.h>
#include <math.h>


int main() {

    //declaração de variável

    int folhas;
    float custo;

    //saida e entrada

    printf("informe a quantidade de folhas : ");
    scanf("%d", &folhas);

    // se folha>100

    if(folhas>100) {
    custo = 0.25*folhas;
    }

    // se folha<=100

    else {
    custo = 0.20*folhas;
    }

    //saida

    printf("%.2f", custo);

}