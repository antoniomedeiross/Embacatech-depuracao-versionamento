#include <stdio.h>
#include <stdlib.h>


// Função que converte grandezas elétricas
void grandezasEletricas() {
  int choice = 0;
  char cont = 'Y';
  double watts, kwatts, calavalosVapor;
  watts = kwatts = calavalosVapor = 0.0;

  printf("==================================================:\n");

  printf("1 - Watts para Kilowatts\n");
  printf("2 - Watts para Cavalos-Vapor\n");
  printf("3 - Kilowatts para Watts\n");
  printf("4 - Kilowatss para Cavalo-Vapor\n");
  printf("5 - Cavalos-Vapor para Watts\n");
  printf("6 - Cavalos-Vapor para Kilowatts\n");
  printf("7 - Sair\n");
  printf("==================================================:\n");
  printf("Escolha a conversão desejada: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      printf("Digite o valor em Watts: ");
      scanf("%lf", &watts);
      printf("%.2lf Watts equivalem a %.2lf Kilowatts", watts, (watts / 1000));
      
      printf("\n\nDeseja fazer uma nova conversao?\n[Y/N]: ");
      scanf(" %c", &cont);
      if (cont == 'Y' || cont == 'y' ) {
        grandezasEletricas();
      }
      break;
    case 2:
      printf("Digite o valor em Watts: ");
      scanf("%lf", &watts);
      printf("%.2lf Watts equivalem a %.2lf Cavalos-Vapor", watts, watts / 735.5);

      printf("\n\nDeseja fazer uma nova conversao?\n[Y/N]: ");
      scanf(" %c", &cont);
      
      if (cont == 'Y' || cont == 'y' ) {
        grandezasEletricas();
      }
      break;
    case 3:
      printf("Digite o valor em Kilowatts: ");
      scanf("%lf", &kwatts);
      printf("%.2lf Kilowatts equivalem a %.2lf Watts", kwatts, kwatts * 1000);

      printf("\n\nDeseja fazer uma nova conversao?\n[Y/N]: ");
      scanf(" %c", &cont);
      
      if (cont == 'Y' || cont == 'y' ) {
        grandezasEletricas();
      }
      break;
    case 4:
      printf("Digite o valor em Kilowatts: ");
      scanf("%lf", &kwatts);
      printf("%.2lf Kilowatts equivalem a %.2lf Cavalos-Vapor", kwatts, kwatts * 1.35962);
      
      printf("\n\nDeseja fazer uma nova conversao?\n[Y/N]: ");
      scanf(" %c", &cont);
      
      if (cont == 'Y' || cont == 'y' ) {
        grandezasEletricas();
      }
      break;
    case 5:
      printf("Digite o valor em Cavalos-Vapor: ");
      scanf("%lf", &calavalosVapor);
      printf("%.2lf Cavalos-Vapor equivalem a %.2lf Watts", calavalosVapor, calavalosVapor * 735.499);
      
      printf("\n\nDeseja fazer uma nova conversao?\n[Y/N]: ");
      scanf(" %c", &cont);
      
      if (cont == 'Y' || cont == 'y' ) {
        grandezasEletricas();
      }
      break; 
    case 6:
      printf("Digite o valor em Cavalos-Vapor: ");
      scanf("%lf", &calavalosVapor);
      printf("%.2lf Cavalos-Vapor equivalem a %.2lf Kilowatts", calavalosVapor, calavalosVapor * 735.499 / 1000);
      
      printf("\n\nDeseja fazer uma nova conversao?\n[Y/N]: ");
      scanf(" %c", &cont);
      
      if (cont == 'Y' || cont == 'y' ) {
        grandezasEletricas();
      }
      break;
    case 7:
      return;;
    default:
      printf("Opção inválida\n");
      
      printf("\n\nDeseja fazer uma nova conversao?\n[Y/N]: ");
      scanf(" %c", &cont);
      
      if (cont == 'Y' || cont == 'y' ) {
        grandezasEletricas();
      }
      break;
  };
  return;
}


void unidades_armazenamento(){
    char unidades[][5] = {"B", "KB", "MB", "GB", "TB"};
    char continua;
    int opcao1, opcao2, i;
    double valor, resultado;
    const float M = 1024;

    
    do{
        system("cls");
        printf("\n----- Conversor de unidades de armazenamento -----\n\n");
        printf("Selecione a unidade de entrada:\n1 - Bytes(B)\n2 - Kilobytes(KB)\n3 - Megabytes(MB)\n4 - Gigabyte(GB)\n5 - Terabyte(TB)\nEscolha: ");
        scanf("%d", &opcao1);
        if (opcao1 < 1 || opcao1 > 5) {
            do
            {
                fflush(stdin); 
                printf("\nPor favor, escolha um numero no intervalo correto\n");
                printf("Escolha: ");
                scanf("%d", &opcao1);
            } while (opcao1 < 1 || opcao1 > 5);
        }

        printf("\nDigite o valor a ser convertido: ");
        fflush(stdin);
        scanf("%lf", &valor);
        resultado = valor;

        printf("\nUnidade de destino:\n1 - Bytes(B)\n2 - Kilobytes(KB)\n3 - Megabytes(MB)\n4 - Gigabyte(GB)\n5 - Terabyte(TB)\nEscolha: ");
        fflush(stdin);
        scanf("%d", &opcao2);
        if (opcao2 < 1 || opcao2 > 5)
        {
            do
            {
                printf("\nPor favor, escolha um numero no intervalo correto\n");
                printf("Escolha: ");
                fflush(stdin);
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
        fflush(stdin);1
        1
        scanf(" %c", &continua);
        printf("\n");
    } while (continua == 'Y' || continua == 'y');
  return;
}