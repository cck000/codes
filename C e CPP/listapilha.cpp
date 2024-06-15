// apenas um codigo de pilha
#include <stdio.h>
#include <stdlib.h>

struct Cel{
    int valor;
    Cel * prox;
};

void Empilha(Cel **pilha){

    Cel * nova = (Cel *) malloc(sizeof(Cel));

    scanf("%d", &(nova->valor)); 
    nova->prox = (*pilha);

    (*pilha) = nova;

}

int Desempilha(Cel **pilha){

    Cel *p;
    int num;

    if (*pilha == NULL)
        return 0;
    else {
        num = (*pilha)->valor;
        p = *pilha;
        *pilha = (*pilha)->prox;
        free(p);
        return num;
    }
    
}



int main(){

    Cel *pilha;

    pilha = NULL;

    Empilha(&pilha);
    Empilha(&pilha);
    Empilha(&pilha);

    printf("%d", Desempilha(&pilha));

}