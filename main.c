#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Função para desenhar o menu inicial



void desenharSubMenuComprimento(){
    printf("|----------- UNIDADES DE COMPRIMENTO -----------|\n|%-45s|\n", " ");
    printf("| ESCOLHA UMA OPCAO DE 0 a 9                  |\n|%-45s|\n", " ");
}

void desenharMenuCategoria(void) {
    // Cabeçalho do programa
    printf("|----------- CONVERSOR DE UNIDADES -----------|\n|%-45s|\n", " ");
    printf("| ESCOLHA UMA OPCAO DE 0 a 9                  |\n|%-45s|\n", " ");

    // Opções do menu, ajustando a largura das colunas para alinhar as barras verticais
    printf("| %-43s | \n", "1. Unidades de Comprimento");  // Opção de conversão de comprimento
    printf("| %-43s | \n", "2. Unidades de Massa");        // Opção de conversão de massa
    printf("| %-43s | \n", "3. Unidades de Volume");       // Opção de conversão de volume
    printf("| %-43s | \n", "4. Unidades de Temperatura");  // Opção de conversão de temperatura
    printf("| %-43s | \n", "5. Unidades de Velocidade");   // Opção de conversão de velocidade
    printf("| %-43s | \n", "6. Unidades de Potencia");     // Opção de conversão de potência
    printf("| %-44s | \n", "7. Unidades de Área");        // Opção de conversão de área
    printf("| %-43s | \n", "8. Unidades de Tempo");       // Opção de conversão de tempo
    printf("| %-43s | \n", "9. Unidades de Dados");       // Opção de conversão de dados
    printf("| %-43s | \n", "10. DIGITE 10 PARA AJUDA");
}

// Função para validar a entrada e garantir que seja um número inteiro
int inteiro_validado(void) {
    char buffer[100];
    int resultado = 0;

    // Lê a entrada do usuário
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return -1; // Retorna -1 em caso de erro na leitura
    }

    // Remove o '\n' gerado pelo fgets (caso exista)
    buffer[strcspn(buffer, "\n")] = 0;

    // Chama a função que valida a string e retorna o valor ou -1 em caso de erro
    for (int i = 0; i < strlen(buffer); i++) {
        // Se encontrar um caractere não numérico, retorna -1
        if (buffer[i] < '0' || buffer[i] > '9') {
            return -1;
        }
        // Acumula o número
        resultado = resultado * 10 + (buffer[i] - '0');
    }

    return resultado;
}

int main() {
    int tipo_de_unidade = 0;

        const char* categorias[] = {
        "Comprimento",
        "Massa",
        "Volume",
        "Temperatura",
        "Velocidade",
        "Potencia",
        "Área",
        "Tempo",
        "Dados",
        "AJUDA"
    };




    // Define o valor das páginas de código UTF-8 e default do Windows
    UINT CPAGE_UTF8 = 65001;  // Código de página para UTF-8
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();  // Obtém a codificação padrão do console
    SetConsoleOutputCP(CPAGE_UTF8); // Define codificação como sendo UTF-8 para permitir exibição correta de caracteres acentuados
    system("cls");  // Limpa a tela no Windows

    // Desenvolvimento da interface de usuário
    desenharMenuCategoria();

    // Solicita e valida a entrada do usuário
    printf("|---------------------------------------------|\n");
    printf("\nINFORME O TIPO DE UNIDADE (1 a 9) : ");
    tipo_de_unidade = inteiro_validado();

    // Verifica se a entrada é válida
    while (tipo_de_unidade < 1 || tipo_de_unidade > 10) {
        system("cls");  // Limpa a tela no Windows
        desenharMenuCategoria();
        printf("|---------------------------------------------|\n");
        printf("************* ENTRADA INVALIDA ***************|\n");
        printf("\nINFORME O TIPO DE UNIDADE (1 a 9) : ");
        tipo_de_unidade = inteiro_validado();  // Chama a função para validar a entrada
    }

    // SUBMENU

    //desenharsubMenu(tipo_de_unidade, categorias);
    
    printf("Você escolheu a opção: %d\n", tipo_de_unidade);

    // PROGRAMA : FINAL
    switch (tipo_de_unidade) {
        case 1:
            // Código para Unidades de Comprimento
            break;
        case 2:
            // Código para Unidades de Massa
            break;
        case 3:
            // Código para Unidades de Volume
            break;
        case 4:
            // Código para Unidades de Temperatura
            break;
        case 5:
            // Código para Unidades de Velocidade
            break;
        case 6:
            // Código para Unidades de Potência
            break;
        case 7:
            // Código para Unidades de Área
            break;
        case 8:
            // Código para Unidades de Tempo
            break;
        case 9:
            // Código para Unidades de Dados
            break;
        case 10:
            // Código para ajuda
            break;
        default:
            // Caso não entre em nenhum dos casos (não deveria ocorrer)
            printf("Opção inválida!\n");
            break;
    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);  // Restaura a codificação padrão do console para evitar interferências em outras operações

    return 0;
}
