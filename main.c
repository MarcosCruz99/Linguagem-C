#include <stdio.h>
/*
int main()
{
    double n1, n2;
    char operacao;
    printf("Informe dois numero reais:");
    scanf("%lf %lf", &n1, &n2);
    printf("Informe a operacao: +, -, * ou /");
    scanf(" %c", &operacao);
    switch(operacao){
    case '+':{
    printf("Soma: %.lf\n", n1 + n2);
    break;
    }
    case '-':{
    printf("Subtracao: %.2lf\n", n1 - n2);
    break;
    }
    case '*':{
    printf("Multiplicacao: %.lf\n", n1 * n2);
    break;
    }
    case '/':{
    if(n2 == 0){
        printf("Divisao por zero!\n");
    }
    else{
        printf("Divisao: %.2lf", n1/n2);
        }
    break;
    }
    default:{
    printf("Operacao invalida!\n");
    }
    }
    return 0;
}
*/
/*
 int main()
 {
     int n = 1;
     while(n <= 10000){
        printf("%d\n", n);
        n++;
     }
 return 0;
 }
*/
/*
int main ()
{
    int num, fat = 1;
    printf("Informe um numero:");
    scanf("%d", &num);
    while(num >= 1){
        fat *= num;
        num --;
    }
    printf("Fatorial: %d", fat);
    return 0;
}
*/
/*
int main()
{
    int cont = 1, num, soma = 0;
    while(cont <= 10){
        printf("Informe o %d ° numero:", cont);
        scanf("%d", &num);
        soma += num;
        cont++;
    }
    printf("A soma dos numero eh: %d.", soma);
    return 0;
}
*/
/*
int main ()
{
    int cont = 1, num, somaP = 0, neg = 0;
    while(cont <= 15){
        printf("Informe o %d ° numero:", cont);
        scanf("%d", &num);
        if(num >= 0){
            somaP = somaP + num; //somaP += num;
        }
        else{
            neg++; //neg = neg + 1;
        }
        cont++;
    }
    printf("Soma dos positivos: %d\n", somaP);
    printf("Quantidade de negativos: %d\n", neg);
    return 0;
}
*/
int main ()
{
    int num, maior, menor, cont = 2;
    printf("Informe o 1° numero:");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while(cont <= 10){
        printf("Informe o %d° numero:", cont);
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
        else if(num < menor){
           menor = num;
        }
        cont++;
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}