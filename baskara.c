#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/// @brief
/// @param argc
/// @param argv
/// @return
int main(int argc, char **argv)
{
  float a, b, c, x1, x2, delta;

  printf("\n>>>>>Instituto Federal da Paraiba - IFPB<<<<<\n");
  printf("Tecnologia em Automacao Industrial     2022.1\n");
  printf("Disciplina: Algoritmo e Logica de Programacao\n");
  printf("Docente:                  Prof. Mateus Maximo\n");
  printf("Discente: Isaac Gomes Veras,  Mtr: 2022145002\n\n");
  printf("Exercicio Pratico 1              (18/08/2022)\n\n");
  printf("Calculadora para o teorema de Baskara:\n\n");

  // Le os termos da equacao
  printf("Digite o valor do termo a: ");
  scanf("%f", &a);
  printf("Digite o valor do termo b: ");
  scanf("%f", &b);
  printf("Digite o valor do termo c: ");
  scanf("%f", &c);

  // Calcula o valor de x1
  delta = b * b - 4 * a * c;
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  // Imprime os resultados
  if (delta < 0)
  {
    printf("\nA equacao nao possui raizes reais.n");
  }
  else
  {
    printf("\nO valor de x1: %.2fn e o", x1);
    printf(" valor de x2: %.2fn", x2);
    printf("\n\n");
  }

  return 0;
}