#include <stdio.h>
#include <stdlib.h>

void calculador(){
  char cadeia[50];
  int contLetras=0;

  printf("Digite uma cadeia de caracteres:");
  fflush(stdin);
  gets(cadeia);

printf("Letras dentro da cadeia: ");
  for (int i = 0; cadeia[i] != '\0'; i++)
  {
    if ('A' <= cadeia[i] && cadeia[i] <= 'Z' || 'a' <= cadeia[i] && cadeia[i] <= 'z'){
      printf("%c ", cadeia[i]);
      contLetras++;
    }
  }
  printf("\nA cadeia de caracteres tem %i letras.", contLetras);  
}

int main(){
/*Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas.
            ENTRADA                 SAIDA
            b.a.n.a.n=a             6 letras
            b.=c.,a                 3 letras
*/
  calculador();
}
