
#include <stdio.h>
#define MAX 10

    int pilha[MAX];
    int topo = -1;
    
    void push(int e){
        topo++;
        pilha[topo] = e;
    }
    int pop(){
        int e = pilha[topo];
        topo--;
        return e;
    }
    
    char estaVazia(){
        return topo < 0;
    }
    char estaCheia(){
        return topo >= MAX-1;
    }

int main(){
    push(2);
    push(5);
    push(15);
    push(1);
    
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
}
