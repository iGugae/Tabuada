#include <stdio.h>
int main (void){
    //Variáveis
    int indice, num, multiplica;

    //Escolha a tabuada
    printf("Digite o numero que deseja saber a tabuada: ");
    scanf("%d", &num);

    //Formulando a tabuada
    printf("\n=-=-=- Tabuada do %d -=-=-=", num);
    for(indice = 1; indice <= 10; indice++){
        multiplica = indice * num;
        printf("\n%2d  X %2d = %2d", indice, num, multiplica);
    }
}
