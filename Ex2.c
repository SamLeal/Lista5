#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculador(){

  char palavra[25], c;
  int contMenor=0, contMaior=0,  contIgual=0;

  printf("Digite uma palavra:");
  fflush(stdin);
  gets(palavra);
  
  for (int i = 0; i != '\0'; i++){
    if (palavra[i] > 'a' && palavra[i] < 'z')
    {
      (palavra[i] = palavra[i]-32);
    }
  }
  

  printf("Digite um caracter maiúsculo:");
  fflush(stdin);
  scanf("%c", &c);

  printf("Letras menores que %c:", c);
  for (int i = 0; palavra[i] != '\0'; i++){
    if (c > palavra[i]){
      printf(" %c", palavra[i]);
      contMenor++;
    }else{
      if ( c < palavra[i]){
        contMaior++;
      } else {
        contIgual++;
      }
    }
  }
  printf("\nA palavra tem %i letras menores, %i letras maiores e %i letras iguais a %c", contMenor, contMaior, contIgual, c);
}

int main()
{
  /*Crie um procedimento para:
- ler uma palavra do teclado;
- ler um caractere do teclado
- transforme toda a palavra em maiúscula;
- contar e mostrar as letras maiúsculas menores que o caractere, e quantas letras são maiores que o caractere, e quantas são iguais ao caractere lido
      ENTRADA                         SAIDA
      banana, A            0 menores, 3 maiores, 3 iguais.
      banana, C            4 menores, 2 maiores, 0 iguais.
*/
  calculador();
  return 0;
}
