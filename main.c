#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "conversoes.h"

// Protótipos das funções
void desenharMenuCategoria(void);
int inteiro_validado(void);
void unidades_armazenamento(void);

int main() {
    int sair = 1;
    int tipo_de_unidade = 0;

    // Define o valor das páginas de código UTF-8 e default do Windows
    UINT CPAGE_UTF8 = 65001;                   // Código de página para UTF-8
    UINT CPAGE_DEFAULT = GetConsoleOutputCP(); // Obtém a codificação padrão do console

    while (sair) {
        SetConsoleOutputCP(CPAGE_UTF8); // Define codificação como sendo UTF-8
        system("cls");                  // Limpa a tela no Windows

        desenharMenuCategoria();

        // Solicita e valida a entrada do usuário
        printf("|---------------------------------------------|\n");
        printf("\nINFORME O TIPO DE UNIDADE (1 a 9) : ");
        tipo_de_unidade = inteiro_validado();

        // Verifica se a entrada é válida
        while (tipo_de_unidade < 0 || tipo_de_unidade > 10) {
            system("cls"); // Limpa a tela no Windows
            desenharMenuCategoria();
            printf("|---------------------------------------------|\n");
            printf("************* ENTRADA INVALIDA ***************|\n");
            printf("\nINFORME O TIPO DE UNIDADE (1 a 9) : ");
            tipo_de_unidade = inteiro_validado();
        }
        SetConsoleOutputCP(CPAGE_DEFAULT); // Restaura a codificação padrão

        // Switch para chamar funções específicas
        switch (tipo_de_unidade) {
            case 1:
                printf("Unidades de Comprimento.\n");
                break;
            case 2:
                printf("Unidades de Massa.\n");
                break;
            case 3:
                printf("Unidades de Volume.\n");
                break;
            case 4:
                printf("Unidades de Temperatura.\n");
                break;
            case 5:
                printf("Unidades de Velocidade.\n");
                break;
            case 6:
               // printf("Unidades de Potência.\n");
                grandezasEletricas();
                break;
            case 7:
                printf("Unidades de Área.\n");
                break;
            case 8:
                printf("Unidades de Tempo.\n");
                break;
            case 9:
                unidades_armazenamento();
                break;
            case 10:
                printf("Ajuda.\n");
                break;
            default:
                sair = 0;
                printf("\nPrograma Encerrado\n");
                break;
        }
    }
    return 0;
}

// Função para desenhar o menu inicial
void desenharMenuCategoria(void) {
    printf("|----------- CONVERSOR DE UNIDADES -----------|\n");
    printf("|%-45s|\n", " ");
    printf("| ESCOLHA UMA OPCAO DE 0 a 9                  |\n|%-45s|\n", " ");
    printf("| %-43s |\n", "1. Unidades de Comprimento");
    printf("| %-43s |\n", "2. Unidades de Massa");
    printf("| %-43s |\n", "3. Unidades de Volume");
    printf("| %-43s |\n", "4. Unidades de Temperatura");
    printf("| %-43s |\n", "5. Unidades de Velocidade");
    printf("| %-43s |\n", "6. Unidades de Potência");
    printf("| %-44s |\n", "7. Unidades de Área");
    printf("| %-43s |\n", "8. Unidades de Tempo");
    printf("| %-43s |\n", "9. Unidades de Dados");
    printf("| %-43s |\n", "10. Ajuda");
    printf("| %-43s |\n", "0. Sair do Programa");
}

// Função para validar entrada de número inteiro
int inteiro_validado(void) {
    char buffer[100];
    int resultado = 0;

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return -1;
    }

    buffer[strcspn(buffer, "\n")] = 0;

    for (size_t i = 0; i < strlen(buffer); i++) {
        if (buffer[i] < '0' || buffer[i] > '9') {
            return -1;
        }
        resultado = resultado * 10 + (buffer[i] - '0');
    }
    return resultado;
}

// Função para conversão de unidades de armazenamento
void unidades_armazenamento(void) {
    char unidades[][5] = {"B", "KB", "MB", "GB", "TB"};
    char continua;
    int opcao1, opcao2, i;
    double valor, resultado;
    const float M = 1024;

    do {
        printf("\n----- Conversor de Unidades de Armazenamento -----\n\n");
        printf("1 - Bytes(B)\n2 - Kilobytes(KB)\n3 - Megabytes(MB)\n4 - Gigabytes(GB)\n5 - Terabytes(TB)\nEscolha unidade de entrada: ");
        scanf("%d", &opcao1);

        printf("Digite o valor: ");
        scanf("%lf", &valor);

        printf("Escolha unidade de saída: ");
        scanf("%d", &opcao2);

        resultado = valor;

        if (opcao1 > opcao2) {
            for (i = opcao1 - opcao2; i > 0; i--) resultado *= M;
        } else {
            for (i = opcao2 - opcao1; i > 0; i--) resultado /= M;
        }

        printf("\n%.4lf %s = %.4lf %s\n", valor, unidades[opcao1 - 1], resultado, unidades[opcao2 - 1]);
        printf("Deseja continuar? (Y/N): ");
        scanf(" %c", &continua);
    } while (continua == 'Y' || continua == 'y');
}
