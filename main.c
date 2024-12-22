#include <stdio.h>
#include <stdlib.h>

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
}
