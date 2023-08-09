#include <stdio.h>

int main() {
    
    int n, k;
    
do{
    printf("N: ");
    scanf("%d", &n);
        if (n < 2)
            puts("Digite um numero maior ou igual a 2!\n");
    } while (n < 2);
    
    int v[n];
   
for (int m = 0; m < n; m++) { 
    
    int num;
    
    do{
        printf("Digite o valor que voce deseja adicionar a sequencia: ");
        scanf("%d", &num);
            if (num == 0){
                puts("Digite um numero diferente de 0\n\n");}
    }while (num == 0);
    v[m] = num;}
    
do{
    printf("Digite o valor de k: ");
    scanf("%d", &k);
        if(k<= 0)
            puts("Digite um valor maior ou igual a 0!!");
    } while (k == 0);
    
    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = i; j < n; j++) {
            soma += v[j];
            if (soma == k) {
                printf("[ ");
                for (int l = i; l <= j; l++) {
                    printf("%d ", v[l]);
                }
                printf("]\n");
            }
        }
    }
}





