#include <stdio.h>
#include <stdlib.h>

float lim01, lim02;

void limite(){
printf("Digite o primeiro limite:");
scanf("%f", &lim01);

printf("Digite o segundo limite:");
scanf("%f", &lim02);

while (lim01 > lim02){
  printf("Erro!!! Digite Novamente(O primeiro lime deve ser menor que o segundo)");

  printf("Digite o primeiro limite:");
  scanf("%f", &lim01);

  printf("Digite o segundo limite:");
  scanf("%f", &lim02);
}
}

void calculador(){
  float num, array[50];
  int quant, ultimo=0, cont=0, intNum=0;

  limite();

  printf("Digite a quantidade de numeros reais:");
  scanf("%i", &quant);

  for (int i = 0; i <= (quant-1); i++){
    printf("Digite um numero real:");
    scanf("%f",&num);

    intNum = num;

    if (num > lim01 && num < lim02){
    if(intNum % 2 != 0){
      array[ultimo++] = num;
      cont++;
    } 
  }
  }

  printf("Valores dentro do limite e multiplos de 2 e 3: ");
  for(int i=0; i < cont; i++){
    printf("%.2f ", array[i]);
  }
  printf("\nO numero total de numeros impares no intervalo é: %i", cont);
}


int main(){
        /*Crie um procedimento para:
- ler dois valores reais, o primeiro menor que o segundo, caso não seja emita uma mensagem de erro e peça novamente, para
definirem um intervalo; ( esses valores deverão ser globais)
- Crie outro procedimento para:
- ler a quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;
- contar e mostrar todos os valores lidos, pertencentes ao do intervalo, cujas partes inteiras forem números ímpares.
            ENTRADA                                       SAIDA
        0 100, 3, 11.6 11.4 12                    11.6 11.4, 2 valores impares.
*/
  calculador();
}
