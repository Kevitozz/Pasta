#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  int Numero, Total;
  printf("Escolha um número positivo para realizar a fatoração.\n");
  scanf("%d", &Numero);
  Total = Numero;
  if (Numero <= 0)
  {
    printf("O número tem que ser maior que zero, imbecil!");
  }
  else
  {

    printf("O fatorial do seu número é\n");
    while (Numero >= 2)
    {
      Numero--;
      Total = Total * Numero;
      printf("%d\n", Total);
    }
  }
  system("pause");  
   return 0;
}