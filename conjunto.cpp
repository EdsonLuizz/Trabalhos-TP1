#include <stdio.h>

int main() {
    int A = 0; 
    int d = -1; 
    int digito;
    
    do {
        printf("Digite um numero de 1 a 9 (ou 0 para terminar): ");
        scanf("%d", &digito);
    
    
        if (digito >= 1 && digito <= 9) {
            int mascara = 1 << (digito - 1);
            if ((A & mascara) == 0) { 
                A |= mascara; 
            } else {
                printf("Este digito ja pertence ao conjunto\n");
            }
        } else if (digito != 0) {
            printf("Digito invalido!!(apenas numeros de 1 a 9).\n");
        }
    } while (digito != 0);
    
    while (d != 0) {
        printf("Digite um numero para saber se ele pertece ao conjunto ou nao (digite 0 novamente para sair): ");
        scanf("%d", &d);
        if (d >= 1 && d <= 9) {
            int mascara = 1 << (d - 1);
            if ((A & mascara) != 0) {
                printf("%d - pertence\n", d);
            } else {
                printf("%d- nao pertence\n", d);
            }
        } else if (d != 0) {
            printf("Digito invalido\n");
        }
    }
    
    return 0;
}

