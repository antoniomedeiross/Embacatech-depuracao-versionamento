# Conversão de Unidades de Medidas

## Sobre o Programa

Este é o **Primeiro Exercício - Grupo 5, Subgrupo 2** do programa EmbarcaTech. O programa foi desenvolvido para realizar **conversões de unidades** em diversas categorias

**Mentor**: Professor Giovanni Antherreli Lima da Silva  
**Participantes Ativos**:  
- Daniel Silva de Souza  
- *(Adicione seu nome aqui)*

---

## Funcionalidades

O programa permite realizar conversões entre unidades de diversas categorias, apresentadas no **menu principal**:

1. **Unidades de Comprimento** (ex.: metros, quilômetros, milhas, pés).  
2. **Unidades de Massa** (ex.: gramas, quilogramas, libras).  
3. **Unidades de Volume** (ex.: litros, mililitros, galões).  
4. **Unidades de Temperatura** (ex.: Celsius, Fahrenheit, Kelvin).  
5. **Unidades de Velocidade** (ex.: km/h, m/s, mph).  
6. **Unidades de Potência** (ex.: watts, kilowatts, cavalos-vapor).  
7. **Unidades de Área** (ex.: metros quadrados, hectares, acres).  
8. **Unidades de Tempo** (ex.: segundos, minutos, horas).  
9. **Unidades de Dados** (ex.: bytes, kilobytes, megabytes).  
10. **Ajuda** – Exibe informações sobre como usar o programa.  
0. **Sair** – Finaliza a execução do programa.  

---

## Pré-requisitos

Para executar o programa, você precisa de:

1. **Sistema Operacional**: Windows.  
2. **Compilador C**: Exemplo: GCC (via MinGW ou outra ferramenta compatível).  
3. **Editor de Código**: Opcional, como Visual Studio Code ou Code::Blocks.  

---

## Como Usar o Programa

### 1. Inicialização
- Execute o programa em seu terminal (ex.: `./conversor_unidades.exe`).  
- O menu principal será exibido na tela.  

### 2. Navegação no Menu Principal
- Escolha uma das categorias de conversão digitando o **número correspondente** (1 a 10) e pressione **Enter**.  
- Caso queira sair do programa, digite **0** e pressione **Enter**.  

### 3. Realizando uma Conversão
- Após selecionar uma categoria, insira o valor a ser convertido.  
- Escolha as unidades de origem e destino (a depender da categoria).  
- O programa exibirá o valor convertido.  

#### Exemplo de Conversão de Comprimento
1. Escolha a opção **1. Unidades de Comprimento**.  
2. Digite o valor que deseja converter (ex.: 100).  
3. Escolha as unidades de origem e destino (ex.: metros para quilômetros).  
4. O programa exibirá o resultado (ex.: 100 metros = 0,1 quilômetros).  

### 4. Realizar Outra Conversão
- Após cada conversão, o programa perguntará:  
  **"Deseja realizar outra conversão? (Y/N)"**  
  - Digite **Y** ou **Sim** para realizar uma nova conversão.  
  - Digite **N** ou pressione **Enter** para voltar ao menu principal.  

---

## Validações Implementadas

O programa foi projetado para evitar erros de entrada:
1. **Somente números são aceitos**. Caso letras ou caracteres inválidos sejam digitados, o programa exibirá uma mensagem de erro.  
2. **Valores negativos** não são aceitos para conversões.  
3. Para unidades não disponíveis ou entradas inválidas, o programa solicitará uma nova tentativa.  

---

## Instruções Adicionais (Opção Ajuda)

Caso você precise de mais informações durante o uso, selecione a opção **10. Ajuda** no menu principal. Essa opção fornece instruções detalhadas para cada funcionalidade.  

---

## Saída do Programa

Quando desejar encerrar o programa:
- Escolha a opção **0. Sair do Programa** no menu principal.  
- O programa exibirá a mensagem: **"Programa Encerrado"** e fechará.  

---

## Estrutura de Código

O programa é modular, com as principais funções organizadas da seguinte forma:
- **`main()`**: Gerencia o menu principal e a navegação.  
- **Funções de Conversão**: Cada categoria de unidade possui uma função dedicada (ex.: `unidades_comprimento()`, `unidades_tempo()`).  
- **Validação de Entrada**: A função `inteiro_validado()` garante que somente números sejam aceitos.  
- **Ajuda**: A função `ajuda()` exibe as instruções detalhadas.  

---
