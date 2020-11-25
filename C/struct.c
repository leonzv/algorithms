#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//estrutura do produto (exercicio 2)
    struct Produto{
    char nome[50];
    double preco;
    char tamanho[30];
    char cor[15];
    char marca[50];
    char fornecedorNome[255];
    char fornecedorEmail[255];
};

//função para exibir o produto 
void print(struct Produto* x){
    printf("Nome: %s\n", x->nome);
    printf("Preço: %f\n", x->preco);
    printf("Tamanho: %s\n", x->tamanho);
    printf("Cor: %s\n", x->cor);
    printf("Marca: %s\n", x->marca);
    printf("Nome do Fornecedor: %s\n", x->fornecedorNome);
    printf("Email do Fornecedor: %s\n", x->fornecedorEmail);
}

int main(){
    
    //definindo atributos para a estrutura
    struct Produto p1;
    strcpy(p1.nome,"Mouse");
    p1.preco = 100.20;
    strcpy(p1.tamanho,"Pequeno");
    strcpy(p1.cor,"Laranja");
    strcpy(p1.marca,"Cougar");
    strcpy(p1.fornecedorNome,"Redragon");
    strcpy(p1.fornecedorEmail,"Redragon@gmail.com");

//chamando a função
print(&p1);
    
    return 0;
} 
