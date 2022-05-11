#include <stdio.h>
#include <stdlib.h>

char linha[50];

void calculador(){
  char linhaAux[50];

  printf("Digite uma linha do teclado:");
  fflush(stdin);
  gets(linha);

  for (int i = 0, posicao = 0; linha[i] != '\0'; i++, posicao++ ){
    while(linha[posicao] >= '0' && linha[posicao] <= '9' || linha[posicao] >= 'a' && linha[posicao] <= 'z' || linha[posicao] >= 'A' && linha[posicao] <= 'Z'){
      posicao++;
    }
    
    linhaAux[i] = linha[posicao];
  }
  
  printf("A linha sem valores alfanumericos é: %s", linhaAux);

}

int main(){
        /*Crie um procedimento para:
ler uma linha do teclado; defina essa linha como global ;
- separar em outra cadeia de caracteres e mostrar todos os símbolos não alfanuméricos (letras ou dígitos) na cadeia de caracteres.
            ENTRADA                 SAIDA
          '1234567890-=             '-=
          qwertyuiop´[]             ´[]
*/
  calculador();
}
