#include <stdio.h>

int main()
{
    int num;
    printf("Informe um numero:");
    scanf("%d", &num);
    if(num > 0){
        while(num >= 1){
            printf("%d\t", num);
            num --;
        }
    }
    else{
        printf("O numero deve ser positivo!\n");
    }
    return 0;
}
