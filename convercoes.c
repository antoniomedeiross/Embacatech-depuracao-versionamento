#include <stdio.h>


// Função que converte grandezas elétricas
int grandezasEletricas() {
  int choice = 0;
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
      grandezasEletricas();
      break;
    case 2:
      printf("Digite o valor em Watts: ");
      scanf("%lf", &watts);
      printf("%.2lf Watts equivalem a %.2lf Cavalos-Vapor", watts, watts / 735.5);
      grandezasEletricas();
      break;
    case 3:
      printf("Digite o valor em Kilowatts: ");
      scanf("%lf", &kwatts);
      printf("%.2lf Kilowatts equivalem a %.2lf Watts", kwatts, kwatts * 1000);
      grandezasEletricas();
      break;
    case 4:
      printf("Digite o valor em Kilowatts: ");
      scanf("%lf", &kwatts);
      printf("%.2lf Kilowatts equivalem a %.2lf Cavalos-Vapor", kwatts, kwatts * 1.35962);
      grandezasEletricas();
      break;
    case 5:
      printf("Digite o valor em Cavalos-Vapor: ");
      scanf("%lf", &calavalosVapor);
      printf("%.2lf Cavalos-Vapor equivalem a %.2lf Watts", calavalosVapor, calavalosVapor * 735.499);
      grandezasEletricas();
      break; 
    case 6:
      printf("Digite o valor em Cavalos-Vapor: ");
      scanf("%lf", &calavalosVapor);
      printf("%.2lf Cavalos-Vapor equivalem a %.2lf Kilowatts", calavalosVapor, calavalosVapor * 735.499 / 1000);
      grandezasEletricas();
      break;
    case 7:
      return 0;;
    default:
      printf("Opção inválida\n");
      grandezasEletricas();
      break;
  };
  return 0;
}