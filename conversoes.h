int grandezasEletricas();

int grandezasEletricas()
{
  int choice = 0;
  float watts, kwatts, calavalosVapor = 0;

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

  switch (choice)
  {
  case 1:
    /* code */
    printf("Clique Enter para continuar");
    grandezasEletricas();
  case 2:
    /* code */
    printf("Clique Enter para continuar");
    grandezasEletricas();
  case 3:
    /* code */
    printf("Clique Enter para continuar");
    grandezasEletricas();
  case 4:
    /* code */
    printf("Clique Enter para continuar");
    grandezasEletricas();
  case 5:
    /* code */
    printf("Clique Enter para continuar");
    grandezasEletricas(); 
  case 6:
    /* code */
    printf("Clique Enter para continuar");
    grandezasEletricas();
  case 7:
    return 0;;
  default:
    printf("Opção inválida\n");
    printf("Clique Enter para continuar");
    grandezasEletricas();
  };
}