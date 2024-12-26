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
        fflush(stdin);
        scanf(" %c", &continua);
        printf("\n");
    } while (continua == 'Y' || continua == 'y');
  return;
}
//-----------------------------------------------------------------------------------------------
//UNIDADES DE TEMPO

// Protótipos
double entrada_validada(void) {
    char buffer[100];
    double valor = 0;

    while (1) { // Loop para validação da entrada
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Entrada inválida. Tente novamente: ");
            continue;
        }

        buffer[strcspn(buffer, "\n")] = 0; // Remove o caractere de nova linha

        // Tenta converter para número
        char *endptr;
        valor = strtod(buffer, &endptr);

        // Verifica se a conversão foi bem-sucedida e se o valor é positivo
        if (endptr == buffer || *endptr != '\0' || valor < 0) {
            printf("Entrada inválida. Digite um número positivo: ");
            continue;
        }

        break; // Entrada válida
    }

    return valor;
}


// Função principal de conversão de unidades de tempo
// Função principal de conversão de unidades de tempo
void unidades_tempo(void) {
    int opcao = 0;
    double valor = 0;
    char resposta[10]; // Para verificar a resposta do usuário

    do {
        system("cls");
        fflush(stdin);
        printf("|--------- Conversão de Unidades de Tempo --------|\n");
        printf("| Escolha a unidade de entrada:                  |\n");
        printf("| 1. Segundos                                    |\n");
        printf("| 2. Minutos                                     |\n");
        printf("| 3. Horas                                       |\n");
        printf("--------------------------------------------------\n");
        printf("Escolha uma opção (1 a 3): ");
        opcao = (int)entrada_validada();

        while (opcao < 1 || opcao > 3) {
            printf("Opção inválida. Escolha uma opção entre 1 e 3: ");
            opcao = (int)entrada_validada();
        }

        printf("\nDigite o valor para conversão (deve ser positivo): ");
        valor = entrada_validada();

        printf("\n|----------------- Resultados ------------------|\n");
        if (opcao == 1) { // Conversão de segundos
            printf("%.2f segundos = %.2f minutos\n", valor, valor / 60);
            printf("%.2f segundos = %.2f horas\n", valor, valor / 3600);
        } else if (opcao == 2) { // Conversão de minutos
            printf("%.2f minutos = %.2f segundos\n", valor, valor * 60);
            printf("%.2f minutos = %.2f horas\n", valor, valor / 60);
        } else if (opcao == 3) { // Conversão de horas
            printf("%.2f horas = %.2f minutos\n", valor, valor * 60);
            printf("%.2f horas = %.2f segundos\n", valor, valor * 3600);
        }
        printf("|----------------------------------------------|\n");

        // Perguntar ao usuário se ele deseja realizar outra conversão
        printf("\nDeseja realizar outra conversão? (Y/N): ");
        fgets(resposta, sizeof(resposta), stdin);
        resposta[strcspn(resposta, "\n")] = 0; // Remove o '\n' da entrada

    } while (strcasecmp(resposta, "Y") == 0 || strcasecmp(resposta, "SIM") == 0);
}






//----------------------------------------------------------------------------------------

// Função principal de conversão de unidades de comprimento
void unidades_comprimento(void) {
    int opcao = 0;
    double valor = 0;
    char resposta[10]; // Para verificar a resposta do usuário

    do {
        system("cls");
        fflush(stdin);
        printf("|--------- Conversão de Unidades de Comprimento --------|\n");
        printf("| Escolha a unidade de entrada:                        |\n");
        printf("| 1. Metros                                            |\n");
        printf("| 2. Centímetros                                       |\n");
        printf("| 3. Milímetros                                        |\n");
        printf("| 4. Quilômetros                                       |\n");
        printf("--------------------------------------------------------\n");
        printf("Escolha uma opção (1 a 4): ");
        opcao = (int)entrada_validada();

        while (opcao < 1 || opcao > 4) {
            printf("Opção inválida. Escolha uma opção entre 1 e 4: ");
            opcao = (int)entrada_validada();
        }

        printf("\nDigite o valor para conversão (deve ser positivo): ");
        valor = entrada_validada();

        printf("\n|----------------- Resultados ------------------|\n");
        if (opcao == 1) { // Conversão de metros
            printf("%.2f metros = %.2f centímetros\n", valor, valor * 100);
            printf("%.2f metros = %.2f milímetros\n", valor, valor * 1000);
            printf("%.2f metros = %.2f quilômetros\n", valor, valor / 1000);
        } else if (opcao == 2) { // Conversão de centímetros
            printf("%.2f centímetros = %.2f metros\n", valor, valor / 100);
            printf("%.2f centímetros = %.2f milímetros\n", valor, valor * 10);
            printf("%.2f centímetros = %.2f quilômetros\n", valor, valor / 100000);
        } else if (opcao == 3) { // Conversão de milímetros
            printf("%.2f milímetros = %.2f metros\n", valor, valor / 1000);
            printf("%.2f milímetros = %.2f centímetros\n", valor, valor / 10);
            printf("%.2f milímetros = %.2f quilômetros\n", valor, valor / 1000000);
        } else if (opcao == 4) { // Conversão de quilômetros
            printf("%.2f quilômetros = %.2f metros\n", valor, valor * 1000);
            printf("%.2f quilômetros = %.2f centímetros\n", valor, valor * 100000);
            printf("%.2f quilômetros = %.2f milímetros\n", valor, valor * 1000000);
        }
        printf("|----------------------------------------------|\n");

        // Perguntar ao usuário se ele deseja realizar outra conversão
        printf("\nDeseja realizar outra conversão? (Y/N): ");
        fgets(resposta, sizeof(resposta), stdin);
        resposta[strcspn(resposta, "\n")] = 0; // Remove o '\n' da entrada

    } while (strcasecmp(resposta, "Y") == 0 || strcasecmp(resposta, "SIM") == 0);
}



void mostrarAjuda(void) {
    system("cls"); // Limpa a tela no Windows
    printf("|---------------- AJUDA ---------------------|\n");
    printf("| Este programa é um conversor de unidades. |\n");
    printf("| Siga as instruções abaixo para utilizá-lo:|\n");
    printf("|-------------------------------------------|\n");
    printf(" 1. Escolha uma opção de conversão no menu:\n");
    printf("    - 1: Unidades de Comprimento\n");
    printf("    - 2: Unidades de Massa\n");
    printf("    - 3: Unidades de Volume\n");
    printf("    - 4: Unidades de Temperatura\n");
    printf("    - 5: Unidades de Velocidade\n");
    printf("    - 6: Unidades de Potência\n");
    printf("    - 7: Unidades de Área\n");
    printf("    - 8: Unidades de Tempo\n");
    printf("    - 9: Unidades de Dados\n");
    printf("    - 10: Ajuda (exibe este menu de ajuda)\n");
    printf("    - 0: Sair do programa\n");
    printf("\n");
    printf(" 2. Após escolher uma opção, você será redirecionado\n");
    printf("    para a funcionalidade correspondente.\n");
    printf("\n");
    printf(" 3. Siga as instruções fornecidas em cada funcionalidade\n");
    printf("    para realizar a conversão desejada.\n");
    printf("\n");
    printf(" DICA: Certifique-se de digitar apenas números válidos\n");
    printf(" para evitar erros na entrada de dados.\n");
    printf("|-------------------------------------------|\n");
    printf("| Pressione qualquer tecla para voltar ao menu principal. |\n");
    getchar(); // Aguarda o usuário pressionar uma tecla
}

