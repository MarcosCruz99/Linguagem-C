#include <stdio.h>


int main()
{
    char v1, v2, v3;
    printf("Informe o primeiro caracter:");
    scanf("%c", &v1);
    printf("Informe o segundo caracter:");
    scanf(" %c", &v2);
    printf("Informe o terceiro caracter:");
    scanf(" %c", &v3);
    printf("%c %c %c\n", v1, v2, v3);
   return 0;
}


/*
int main ()
{
    int a, b, c, x;
    printf("Informe o valor de A:");
    scanf("%d", &a);
    printf("Informe o valor de B:");
    scanf("%d", &b);
    printf("Informe o valor de C:");
    scanf("%d", &c);
    x = 2 * ((a - c)/8) - 5 * b;
    printf("Valor de X: %d\n", x);
    return 0;
}
*/

/*
int main ()
{
    int num1, num2, soma, mult, sub, div, resto;
    printf("Informe o primeiro numero:");
    scanf("%d", &num1);
    printf("Informe o segundo numero:");
    scanf("%d", &num2);
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    resto = num1 % num2;
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n",sub);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %d\n", div);
    printf("Resto da divisao: %d\n", resto);
    return 0;
}
*/
