#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Crie um procedimento para:
- ler uma palavra do teclado;
- mostrar todas as letras maiúsculas que estão na palavra digitada.
DICA: Definir um teste para determinar se um caractere é letra maiúscula.
            ENTRADA                 SAIDA
            Banana                    B
            BaNaNa                  B N N
*/
    char palavra[25];

    printf("Digite uma palavra:");
    fflush (stdin);
    gets(palavra);

    for (int i = 0; palavra[i] != '\0'; i++){
        if(64 < palavra[i] && palavra[i] < 91){
            printf("%c ",palavra[i]);
    }
    }
    
    

}
