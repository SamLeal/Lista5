#include <stdio.h>
#include <stdlib.h>

void calculador(){
  char cadeia[50], tmp;
  int contNumeros=0, size=0;

  printf("Digite uma cadeia de caracteres:");
  fflush(stdin);
  gets(cadeia);
  fflush(stdin);

  for (int i = 0; cadeia[i] != '\0'; i++){
    size++;
  }
  
  for(int i = 0; i < size / 2; i++){
       tmp = cadeia[i];
       cadeia[i] = cadeia[size - i - 1]; 
       cadeia[size - i - 1] = tmp; 
    }

printf("Numeros dentro da cadeia:");
  for (int i = 0; cadeia[i] != '\0'; i++){
    if(cadeia[i] >='0' && cadeia[i] <= '9'){
      printf("%c ", cadeia[i]);
      contNumeros++;
    }
  }
  printf("\nA cadeia de caracteres tem %i digitos.", contNumeros);  
}


int main(){
        /*Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos os dígitos, percorrendo desde o fim até o início da cadeia de caracteres.
            ENTRADA                 SAIDA
              b12n32            2 3 2 1, 4 digitos.
              bana123           3 2 1, 3 digitos.
*/
calculador();
}
