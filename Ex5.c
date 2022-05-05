#include <stdio.h>
#include <stdlib.h>

int main(){
        /*Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar tudo o que não for dígito e também não for letra minúscula.
            ENTRADA                 SAIDA
            
*/
	char palavra[50];
  int cont=0;

  printf("Digite uma palavra:");
  fflush(stdin);
  gets(palavra);

  for (int i = 0; palavra[i] != '\0'; i++)
  {
    if (64 < palavra[i] && palavra[i] < 91 || 96 < palavra[i] && palavra[i] < 123){
      cont++;
    }
  }
  printf("\nA cadeia de caracteres tem %i letras.", cont);
}
