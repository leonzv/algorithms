#include <stdio.h>

int main() {
	//programa que recebe uma frase do usuário e conta as vogais.

	char string[100];                      // Um array de caracteres, ou seja, uma string.

	printf("Digite uma frase: ");
	scanf("%[^\n]s", string);              // [^\n] indica que o último caracter lido é o Enter.

	printf("Frase = %s\n", string);
	
	int vogais = 0;     // Contador de vogais
	int i = 0;          // Um índice

	while(string[i] != 0) {                // Enquanto a string na posição i for diferente de zero...
		switch(string[i]) {                
			case 'a': ;
			case 'e': ;
			case 'i': ;
			case 'o': ;
			case 'u': vogais++; break;     // Caso string na posição i seja a,e,i,o,u, incrementa vogais
		}
		i++;
	}

	printf("%d vogais\n", vogais);
}
