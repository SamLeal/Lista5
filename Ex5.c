#include <stdio.h>
#include <stdlib.h>

void calculador(){
  char cadeia[50];
  int contNumeros=0;

  printf("Digite uma cadeia de caracteres:");
  fflush(stdin);
  gets(cadeia);
  fflush(stdin);

printf("Numeros dentro da cadeia:");
  for (int i = 0; cadeia[i] != '\0'; i++){
    if((cadeia[i] >='0' && cadeia[i] <= '9' || cadeia[i] >= 'a' && cadeia[i] <= 'z')){

    } else {
      printf("%c ", cadeia[i]);
      contNumeros++;   
    }
  }
  printf("\nA cadeia de caracteres tem %i caracteres.", contNumeros);  

}

int main(){
        /*Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar tudo o que não for dígito e também não for letra minúscula.
            ENTRADA                 SAIDA
            ba12BA                B A, 2 caracteres.
            ba2B.                 b . , 2 caracteres
*/
  calculador();
  return 0;
}
