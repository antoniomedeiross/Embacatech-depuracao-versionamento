#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// feature/interface-usuario
// Protótipo da função para desenhar o menu inicial
void desenharMenuCategoria(void);

// Protótipo da função para validar a entrada e garantir que seja um número inteiro
int inteiro_validado(void);

int main()
{
    int sair = 1;
    int tipo_de_unidade = 0;

    // Define o valor das páginas de código UTF-8 e default do Windows
    UINT CPAGE_UTF8 = 65001;                   // Código de página para UTF-8
    UINT CPAGE_DEFAULT = GetConsoleOutputCP(); // Obtém a codificação padrão do console
    while (sair)
    {

        SetConsoleOutputCP(CPAGE_UTF8); // Define codificação como sendo UTF-8 para permitir exibição correta de caracteres acentuados
        system("cls");                  // Limpa a tela no Windows
                                        // Desenvolvimento da interface de usuário
        desenharMenuCategoria();

        // Solicita e valida a entrada do usuário
        printf("|---------------------------------------------|\n");
        printf("\nINFORME O TIPO DE UNIDADE (1 a 9) : ");
        tipo_de_unidade = inteiro_validado();

        // Verifica se a entrada é válida
        while (tipo_de_unidade < 0 || tipo_de_unidade > 10)
        {
            system("cls"); // Limpa a tela no Windows
            desenharMenuCategoria();
            // Retorna codificação padrão do Windows
            printf("|---------------------------------------------|\n");
            printf("************* ENTRADA INVALIDA ***************|\n");
            printf("\nINFORME O TIPO DE UNIDADE (1 a 9) : ");
            tipo_de_unidade = inteiro_validado(); // Chama a função para validar a entrada
        }
        SetConsoleOutputCP(CPAGE_DEFAULT); // Restaura a codificação padrão do console para evitar interferências em outras operações

        switch (tipo_de_unidade)
        {
        case 1:
            // CHAMA A FUNCAO DE  Unidades de Comprimento
            break;
        case 2:
            // CHAMA A FUNCAO DE    Unidades de Massa
            break;
        case 3:
            // CHAMA A FUNCAO DE  Unidades de Volume
            break;
        case 4:
            // CHAMA A FUNCAO DE  Unidades de Temperatura
            break;
        case 5:
            // CHAMA A FUNCAO DE Unidades de Velocidade
            break;
        case 6:
            // CHAMA A FUNCAO DE  Unidades de Potência
            break;
        case 7:
            // CHAMA A FUNCAO DE Unidades de Área
            break;
        case 8:
            // CHAMA A FUNCAO DE  Unidades de Tempo
            break;
        case 9:
            // CHAMA A FUNCAO DE  Unidades de Dados
            break;
        case 10:
            // CHAMA A FUNCAO DE   ajuda
            break;
        default:
            // Caso não entre em nenhum dos casos (não deveria ocorrer)
            sair = 0;
            printf("\nPrograma Encerrado\n");
            break;
        }
    }
    return 0;
}

// Funcoes do prgrama principal
//  Função para desenhar o menu inicial

void desenharMenuCategoria(void)
{
    // Cabeçalho do programa
    printf("|----------- CONVERSOR DE UNIDADES -----------|\n|%-45s|\n", " ");
    printf("| ESCOLHA UMA OPCAO DE 0 a 9                  |\n|%-45s|\n", " ");

    // Opções do menu, ajustando a largura das colunas para alinhar as barras verticais
    printf("| %-43s | \n", "1. Unidades de Comprimento"); // Opção de conversão de comprimento
    printf("| %-43s | \n", "2. Unidades de Massa");       // Opção de conversão de massa
    printf("| %-43s | \n", "3. Unidades de Volume");      // Opção de conversão de volume
    printf("| %-43s | \n", "4. Unidades de Temperatura"); // Opção de conversão de temperatura
    printf("| %-43s | \n", "5. Unidades de Velocidade");  // Opção de conversão de velocidade
    printf("| %-43s | \n", "6. Unidades de Potencia");    // Opção de conversão de potência
    printf("| %-44s | \n", "7. Unidades de Área");        // Opção de conversão de área
    printf("| %-43s | \n", "8. Unidades de Tempo");       // Opção de conversão de tempo
    printf("| %-43s | \n", "9. Unidades de Dados");       // Opção de conversão de dados
    printf("| %-43s | \n", "10. DIGITE 10 PARA AJUDA");
    printf("| %-43s | \n", "0. PARA ENCERRAR O PROGRAMA");
}

// Função para validar a entrada e garantir que seja um número inteiro
int inteiro_validado(void)
{
    char buffer[100];
    int resultado = 0;

    // Lê a entrada do usuário
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        return -1; // Retorna -1 em caso de erro na leitura
    }

    // Remove o '\n' gerado pelo fgets (caso exista)
    buffer[strcspn(buffer, "\n")] = 0;

    // Valida a string e calcula o número
    for (size_t i = 0; i < strlen(buffer); i++)
    { // size_t para compatibilidade com strlen
        if (buffer[i] < '0' || buffer[i] >= '9')
        {
            return -1; // Retorna -1 se encontrar caractere inválido
        }
        resultado = resultado * 10 + (buffer[i] - '0');
    }

    return resultado;

void unidades_armazenamento();

int main(){
  printf("===== CONVERSOR DE UNIDADES =====");

  return 0;
}

void unidades_armazenamento(){
    char unidades[][5] = {"B", "KB", "MB", "GB", "TB"};
    char continua;
    int opcao1, opcao2, i;
    double valor, resultado;
    const float M = 1024;

    printf("\n----- Conversor de unidades de armazenamento -----\n\n");
    do
    {
        printf("Selecione a unidade de entrada:\n1 - Bytes(B)\n2 - Kilobytes(KB)\n3 - Megabytes(MB)\n4 - Gigabyte(GB)\n5 - Terabyte(TB)\nEscolha: ");
        scanf("%d", &opcao1);
        if (opcao1 < 1 || opcao1 > 5)
        {
            do
            {
                printf("\nPor favor, escolha um numero no intervalo correto\n");
                printf("Escolha: ");
                scanf("%d", &opcao1);
            } while (opcao1 < 1 || opcao1 > 5);
        }

        printf("\nDigite o valor a ser convertido: ");
        scanf("%lf", &valor);
        resultado = valor;

        printf("\nUnidade de destino:\n1 - Bytes(B)\n2 - Kilobytes(KB)\n3 - Megabytes(MB)\n4 - Gigabyte(GB)\n5 - Terabyte(TB)\nEscolha: ");
        scanf("%d", &opcao2);
        if (opcao2 < 1 || opcao2 > 5)
        {
            do
            {
                printf("\nPor favor, escolha um numero no intervalo correto\n");
                printf("Escolha: ");
                scanf("%d", &opcao2);
            } while (opcao2 < 1 || opcao2 > 5);
        }

        // agora o valor será multiplicado ou dividido de acordo com as escolha de conversão
        if (opcao1 != opcao2)
        {
            if (opcao1 > opcao2)
            {
                i = opcao1 - opcao2;
                for (; i > 0; i--)
                {
                    resultado = (resultado * M);
                }
            }
            else
            {
                i = opcao2 - opcao1;
                for (; i > 0; i--)
                {
                    resultado = (resultado / M);
                }
            }
        }

        printf("\n%.4lf %s = %.4lf %s", valor, unidades[opcao1 - 1], resultado, unidades[opcao2 - 1]);
        printf("\n\nDeseja fazer uma nova conversao?\n[Y/N]: ");
        scanf(" %c", &continua);
        printf("\n");
    } while (continua == 'Y' || continua == 'y');
  return;
  main()
}
