#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void sequenciaFibonacci(int alcance){
    int x = 0, y = 1, z;
    while (x <= alcance){
    printf("%d\t", x);
    z = x + y;
    x = y;
    y = z;
    }
}


 int main(){
   int alcance;

   printf("Digite o alcance do fibonacci: ");
   scanf("%d", &alcance);
   printf("a Sequencia de fibonacci é: \n");
   sequenciaFibonacci(alcance);
   //fim do teste do exercicio 1
   return 0;
} 
