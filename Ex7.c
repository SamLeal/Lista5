#include <stdio.h>
#include <stdlib.h>

int lim1, lim2;

void calculador(){
  int num, cont=0, ultimo=0, maior, menor;
int array[50];

printf("Digite o primeiro limite inteiro:");
scanf("%i", &lim1);

printf("Digite o segundo limite inteiro:");
scanf("%i", &lim2);

printf("Digite um numero inteiro:");
scanf("%i", &num);

if (lim1 > lim2)
{
  maior = lim1;
  menor = lim2;
} else if (lim1 < lim2){
  maior = lim2;
  menor = lim1;
}

while (num != -1){
  if (menor < num && num < maior){
    if (num%5 != 0 && num%3 ==0){
      array[ultimo++] = num;
      cont++;
    } 
  }
  printf("Digite um numero inteiro(-1 para parar):");
  scanf("%i", &num);
}
  printf("Valores dentro do limite e multiplos de 2 e 3:");
  for(int i=0; i < cont; i++){
    printf("%d ", array[i]);
  }
  printf("\nO numero total de multiplos de 2 e 3 no intervalo é: %i", cont);
}

int main(){
        /*Crie um procedimento para:
- ler dois valores inteiros positivos, limites para definirem um intervalo ( esses valores deverão ser globais)
- ler uma quantidade de valores inteiros a serem testados;- Flag -1, um por vez;
- contar e mostrar dentre esses valores lidos os que forem múltiplos de 3, que não forem também múltiplos de 5, e 
pertençam ao intervalo.
            ENTRADA                               SAIDA
        0 100, 300 12 15 21 -1                  12 21, 2 numeros.
*/
  calculador();
  return 0;
}
