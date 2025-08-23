#include <stdio.h>
/*
main ()

{
    int n1, n2, soma;
    printf("Informe o primeiro número:\n");
    scanf("%d", &n1);
    printf("Informe o segundo numero:");
    scanf("%d", &n2);
    soma = n1 + n2;
    if(soma > 10) {
        printf("A soma é: %d", soma);
    }
    else{
        printf("Soma menor que 10");
    }
    return 0;
}
*/
/*
{
    int n;
    printf("Informe um numero:\n");
    scanf("%d", &n);
    if(n > 0){
        printf("Numero positivo!");
    }
    else if(n == 0){
        printf("Numero nulo!");
    }
    else{
        printf("Numero negativo!");
    }
    return 0;
}
*/
/*
{
    int n1, n2;
    printf("Informe o primeiro numero:");
    scanf("%d", &n1);
    printf("Informe o segundo numero:");
    scanf("%d", &n2);
    if(n1 % 2== 0 && n2 % 2 == 0){
        printf("Os dois numero sao pares!");
    }
    else if(n1 % 2 == 0 || n2 % 2 == 0){
        printf("Um dos dois numero eh par!");
    }
    else{
        printf("Os dois numeros sao impares!");
    }
    return 0;
}
*/
/*
{
    int n1, n2;
    printf("Informe o primeiro numero:");
    scanf("%d", &n1);
    printf("Informe o segundo numero:");
    scanf("%d", &n2);
    if(n1 % 2== 0 && n2 % 2 == 0){
            printf("Os dois numero sao pares!");
    }
    else if(n1 % 2== 0){
        printf("O primeiro numero eh par!");
    }
    else if(n2 % 2 == 0){
        printf("O segundo numero eh par!");
    }
    else{
        printf("Os dois numeros sao impares!");
    }
    return 0;
}
*/
int main ()
{
    char sexo;
    double altura, peso;
    printf("Informe o sexo:");
    scanf("%c", &sexo);
    printf("Informe a altura:");
    scanf("%lf", &altura);
    if(sexo == 'M' || sexo == 'm'){
        peso = (72.7 * altura) - 58;
        printf ("Peso ideal: %.2lf\n", peso);
    }
    else if(sexo == 'f' || sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2lf\n", peso);
    }
    else{
        printf("Opcao invalida!");
    }
    return 0;
}
