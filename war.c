#include <stdio.h>
#include <string.h>

#define TOTAL_TERRITORIOS 5

typedef struct {
    char nome[50];
    char cor[20];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[TOTAL_TERRITORIOS];

    printf("Cadastro de Territorios do WAR\n\n");

    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("---- Territorio %d ----\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Cor do Exercito: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // consumir \n restante

        printf("\n");
    }

    printf("----- Estado Atual do Mapa -----\n");
    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("%d) Nome: %s | Cor: %s | Tropas: %d\n",
               i + 1,
               territorios[i].nome,
               territorios[i].cor,
               territorios[i].tropas);
    }

    return 0;
}
