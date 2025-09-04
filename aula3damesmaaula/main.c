#include <stdio.h>

int main()
{
   int cont = 1, soma = 0, num;
   while(cont <= 5){
    printf("Informe o %d° numero:", cont);
    scanf("%d", &num);
    soma = soma + num; //soma += num;
    cont++;
   }
   printf("Soma dos numero: %d", soma);
   return 0;
}
