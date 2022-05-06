#include <stdio.h>
#include <stdlib.h>

float lim91, lim92;

void limite2(){
  float maior, menor;

printf("Digite o primeiro limite:");
scanf("%f", &lim91);

printf("Digite o segundo limite:");
scanf("%f", &lim92);

if (lim91 > lim92)
  {
    maior = lim91;
    menor = lim92;
  } else if (lim91 < lim92){
    maior = lim92;
    menor = lim91;
  }

  lim91 = menor;
  lim92 = maior;

while (lim91 < 0 || lim91 > 1 || lim92 < 0 || lim92 > 1){
    if (lim91 > lim92)
  {
    maior = lim91;
    menor = lim92;
  } else if (lim91 < lim92){
    maior = lim92;
    menor = lim91;
  }

  lim91 = menor;
  lim92 = maior;

  printf("Erro!!! Digite Novamente(O primeiro lime deve ser menor que o segundo)");

  printf("Digite o primeiro limite:");
  scanf("%f", &lim91);

  printf("Digite o segundo limite:");
  scanf("%f", &lim92);
}
}



void calculador(){
  float num, array[50];
  int quant, ultimo=0, cont=0, intNum=0;

  limite2();

  printf("Digite a quantidade de numeros reais:");
  scanf("%i", &quant);

  for (int i = 0; i <= (quant-1); i++){
    printf("Digite um numero real:");
    scanf("%f",&num);

    intNum = num;
    num = (intNum - num)*(-1);

    if (num >= lim91 && num <= lim92){
      array[ultimo++] = (intNum+num);
      cont++;
    }
  }

  printf("Valores dentro do limite e multiplos de 2 e 3:");
  for(int i=0; i < cont; i++){
    printf("%.2f ", array[i]);
  }
  printf("\nO numero total de numeros no intervalo: %i", cont);
}

int main(){
        /*Crie um procedimento para:
- ler dois valores reais, maiores que 0 e menores que 1, caso não seja emita uma mensagem de erro e peça novamente, para
definirem um intervalo de precisão; ; ( esses valores deverão ser globais)
Crie um procedimento para:
- ler uma quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade; -
contar e mostrar todos os valores lidos que tenham suas partes fracionárias ao intervalo de precisão.
            ENTRADA                                         SAIDA
    0.2 0.8, 3, 11.4 11.5 11.1                        11.40 11.50, 2 numeros no intervalo.
*/
  calculador();
}
