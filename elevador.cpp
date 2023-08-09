#include <stdio.h>

int main() {
    
    int n;
    
printf("Digite a quantidade de moradores (n > 0): ");
scanf("%d", &n);

    while (n <= 0) {
        printf("Digite um valor válido para n: ");
        scanf("%d", &n);
    }

    int elevadores[3][3] = {0}; 
    
    for (int i = 0; i < n; i++) {
        char elevador, periodo;
        printf("Digite o elevador utilizado pelo morador %d (A, B ou C): ", i + 1);
        scanf(" %c", &elevador);

        
        while (elevador != 'A' && elevador != 'a' && elevador != 'B' && elevador != 'b' && elevador != 'C' && elevador != 'c') {
            printf("Elevador invalido!\n Digite A, B ou C: ");
            scanf(" %c", &elevador);
        }

        printf("Digite o período utilizado pelo morador %d (M, T ou N): ", i + 1);
        scanf(" %c", &periodo);
        
        while (periodo != 'M' && periodo != 'm' && periodo != 'T' && periodo != 't' && periodo != 'N' && periodo != 'n') {
            printf("Período inválido!\n Digite novamente M, T ou N: ");
            scanf(" %c", &periodo);
        }

        switch (elevador) {
            case 'A':
            case 'a':
                switch (periodo) {
                    case 'M':
                    case 'm':
                        elevadores[0][0]++;
                        break;
                    case 'T':
                    case 't':
                        elevadores[0][1]++;
                        break;
                    case 'N':
                    case 'n':
                        elevadores[0][2]++;
                        break;
                }
                break;
            case 'B':
            case 'b':
                switch (periodo) {
                    case 'M':
                    case 'm':
                        elevadores[1][0]++;
                        break;
                    case 'T':
                    case 't':
                        elevadores[1][1]++;
                        break;
                    case 'N':
                    case 'n':
                        elevadores[1][2]++;
                        break;
                }
                break;
            case 'C':
            case 'c':
                switch (periodo) {
                    case 'M':
                    case 'm':
                        elevadores[2][0]++;
                        break;
                    case 'T':
                    case 't':
                        elevadores[2][1]++;
                        break;
                    case 'N':
                    case 'n':
                        elevadores[2][2]++;
                        break;
                }
                break;
        }
    }

    int mais_frequentado = 0;
    int maior_frequencia = 0;

    for (int i = 0; i < 3; i++) {
        int frequencia = 0;
        for (int j = 0; j < 3; j++) {
            frequencia += elevadores[i][j];
        }
        if (frequencia > maior_frequencia) {
            maior_frequencia = frequencia;
            mais_frequentado = i;
        }
    }

    int maior_demanda = 0;
    maior_frequencia = 0;

    for (int j = 0; j < 3; j++) {
        int frequencia = 0;
        for (int i = 0; i < 3; i++) {
            frequencia += elevadores[i][j];
        }
        if (frequencia > maior_frequencia) {
            maior_frequencia = frequencia;
            maior_demanda = j;
        }
    }

    printf("\nElevador mais frequentado: ");
    switch (mais_frequentado) {
        case 0:
            printf("A\n");
            break;
        case 1:
            printf("B\n");
            break;
        case 2:
            printf("C\n");
            break;
    }

    printf("Período de maior demanda: ");
    switch (maior_demanda) {
        case 0:
            printf("Manhã\n");
            break;
        case 1:
            printf("Tarde\n");
            break;
        case 2:
            printf("Noite\n");
            break;
    }

printf("Elevador/Período mais usado: ");
    int maxFrequencia = 0;
    int elevadorMaisUsado, periodoMaisUsado;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (elevadores[i][j] > maxFrequencia) {
                maxFrequencia = elevadores[i][j];
                elevadorMaisUsado = i;
                periodoMaisUsado = j;
            }
        }
    }

    switch (elevadorMaisUsado) {
        case 0:
            printf("A/");
            break;
        case 1:
            printf("B/");
            break;
        case 2:
            printf("C/");
            break;
    }

    switch (periodoMaisUsado) {
        case 0:
            printf("Manhã\n");
            break;
        case 1:
            printf("Tarde\n");
            break;
        case 2:
            printf("Noite\n");
            break;
    }
}




