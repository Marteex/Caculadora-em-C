#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    int option;
    printf("1) Audicao\n");
    printf("2) Subtracao\n");
    printf("3) Multiplicao\n");
    printf("4) Divisao\n");
    printf("digite oque deseja: ");
    scanf("%i", &option);
    printf("\n");

    if (option == 1){
        int num1, num2, soma;
        printf("digite o primeiro numero a ser somado: ");
        scanf("%i", &num1);
        printf("digite o segundo numero a ser somado: ");
        scanf("%i", &num2);

        soma = num1 + num2;
        printf("%i\0", soma);
    } else if(option == 2) {
    int num, nu, sub;
        printf("digite o primeiro numero a ser somado: ");
        scanf("%i", &num);
        printf("digite o segundo numero a ser somado: ");
        scanf("%i", &nu);

        sub = num - nu;
        printf("%i\0", sub);
    } else if(option == 3) {
    int mu1, mu2, mu;
    printf("digite o primeiro numero a ser somado: ");
    scanf("%i", &mu1);
    printf("digite o segundo numero a ser somado: ");
    scanf("%i", &mu2);

    mu = mu1 * mu2;
    printf("%i", mu);
    }else if(option == 4) {
    int div, div1, div2;
    printf("digite o primeiro valor a somar: ");
    scanf("%i", &div1);
    printf("digite o segundo valor a somar: ");
    scanf("%i", &div2);

    div = div1 / div2;
    printf("%i", div);
    } else if (option >= 4) {
    printf("digite uma valor valido seu macaco!\n");
    }

    return 0;
}

// by marteex [https://github.com/Marteex]
