#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//FUNCOES ABAIXO
int tempAgua(int x){ //Exercicio 1: Função que retorna o estado da água
        if(x <= 0){
            printf("A agua esta solida ");
        }
        if(x >= 0 && x <= 100){
            printf("A agua esta liquida ");
        }
        if(x >= 100){
            printf("A agua esta gasosa ");
        }
        return x;
}

int permFinanciamento(double x, double y, int z){ //Exercicio 2: Função para permitir financiamento ou não
    int calcSalarioParcela = x / z;
    int salarioDividido = 0.33 * x;

    if(calcSalarioParcela < salarioDividido){
        printf("Financiamento negado\n\n");
    }else{
        printf("Financiamento concedido\n\n");
    }
}

int porcentagem(int x){ //Exercicio 6: função que retorna 10% do valor
    return(0.10 * x);
}

int menorNumero(int x, int y, int z){ //Exercicio 7: Função que recebe tres numeros e retorna o menor
    int menor = x;

    if(y < menor)
        menor = y;
    
    if(z < menor)
        menor = z;
    
    return menor;
}

//FIM DAS FUNCOES
int main(){ 
    
    int a = 0, b = 100, c = 300, temp, x, y, z;   
    
    //Exercicio 1
    printf("EXERCICIO 1: Digite a temperatura da agua: \t"); 
    scanf("%d", &temp);
    printf("com a temperatura de: %d\n\n", tempAgua(temp));
    
    //Exercicio 2
    printf("Digite seu salario:\t ");
    scanf("%d", &x );
    printf("Digite o valor do financiamento:\t ");
    scanf("%d", &y );
    printf("Digite em quantas vezes quer parcelar:\t ");
    scanf("%d", &z ); 
    permFinanciamento(x, y, z);

    //Exercicio 3
    for (int i = 1; i <= 5; i++){ //fazer digitar a frase 10000x ( 5 para poupar o output ) i <= 10000
    printf("EXERCICIO 3: vou fazer todos os exercicios da lista!\n\n"); 
    }
    
    //Teste do Exercicio 6
    printf("EXERICIO 6: 10 por cento do valor %d: %d\n\n", c, porcentagem(c));
    
    //Teste do Exercicio 7  
    printf("EXERCICIO 7: entre %d, %d e %d, o menor: %d\n\n", a, b, c, menorNumero(a,b,c));   
    
}
