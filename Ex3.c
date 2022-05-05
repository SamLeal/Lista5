#include <stdio.h>
#include <stdlib.h>

int main(){
        /*Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas.
            ENTRADA                 SAIDA
            b.a.n.a.n=a             6 letras
            b.=c.,a                 3 letras
*/
  char palavra[50];
  int contLetras=0;

  printf("Digite uma palavra:");
  fflush(stdin);
  gets(palavra);

  for (int i = 0; palavra[i] != '\0'; i++)
  {
    if (64 < palavra[i] && palavra[i] < 91 || 96 < palavra[i] && palavra[i] < 123){
      contLetras++;
    }
  }
  printf("\nA cadeia de caracteres tem %i letras.", contLetras);
}
