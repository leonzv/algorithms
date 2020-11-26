#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordemCrescente(){
        int array[255], cliente, c, d, posicao, t;

    printf("Digite o numero de clientes\n");
    scanf("%d", &cliente);

    printf("Digite %d ID's dos clientes\n", cliente);

    for (c = 0; c < cliente; c++)
        scanf("%d", &array[c]);

    for (c = 0; c < (cliente - 1); c++){
    posicao = c;

    for (d = c + 1; d < cliente; d++){
        if (array[posicao] > array[d])
        posicao = d;
    }
    if (posicao != c){
        t = array[c];
        array[c] = array[posicao];
        array[posicao] = t;
    }
    }

    printf("Ordenando a lista em ordem crescente:\n");

    for (c = 0; c < cliente; c++)
        printf("%d\n", array[c]);
}

int main(){
    
    ordemCrescente();
    return 0;
}
