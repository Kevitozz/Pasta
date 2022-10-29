#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
  int numero, chute;
  srand(time(NULL));
  numero = (rand() % 10);
  printf("Um número aleatório entre um e dez foi gerado, tente acertá-lo!\n");
  while (chute != numero) {
    scanf("%d", &chute);
    if (chute < 1 || chute > 10) {
      printf("De 1 a 10, idiota!\n");
    } else if (chute > numero) {
      printf("Seu chute foi maior que o número gerado, tente novamente!\n");
    } else if (chute < numero) {
      printf("Seu chute foi menor que o número gerado, tente novamente!\n");
    }
  }
  printf("Você acertou! O número era %d.\n", numero);
  system("pause");
  return 0;
}