#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int Operacao;
    float Numero1, Numero2, Resultado;

    printf("Digite um numero para a operação: ");
    scanf("%f", &Numero1);

    printf("Digite outro numero para a operação: ");
    scanf("%f", &Numero2);
    printf("Digite a operação que deseja realizar:\n1 = +\n2 = -\n3 = /\n4 = *\n");
    scanf("%d", &Operacao);

    switch (Operacao){
        case 1:
            Resultado = Numero1 + Numero2;
            printf("O resultado foi: %f\n", Resultado);
        break;
        case 2:
            Resultado = Numero1 - Numero2;
            printf("O resultado foi: %f\n", Resultado);
        break;
        case 3:
            Resultado = Numero1 / Numero2;
            printf("O resultado foi: %f\n", Resultado);
        break;
        case 4:
            Resultado = Numero1 * Numero2;
            printf("O resultado foi: %f\n", Resultado);
        break;
        default:
            printf("De 1 a 4, idiota!\n");
        }
        system("pause");
}