//apenas um codigo de uma fila
#include <stdio.h>
#include <stdlib.h>

struct Queue {

    int x;
    Queue * p;
};

void enfila (Queue ** i, Queue **f, int x){

    Queue * nova;

    nova = (Queue *) malloc(sizeof(Queue));

    nova->x = x;
    nova->p = NULL;

    if ((*i) == NULL){
        *i = *f = nova;

    } else {

        (*f)->p = nova;

        (*f) = nova;
    }


}


void desenfila(Queue **I, Queue **F){
    Queue *aux;
    
    if(*I != NULL){
       
        aux = *I;
        *I = aux->p;
        if(*I == NULL) // a lista tinha apenas 1 elemento
            *F = NULL; // agora a lista está vazia
        
        
        
        free(aux);
        
        
    }
}

void imprime(Queue ** i){

    Queue * aux;

    for(aux = (*i); aux != NULL; aux = aux->p){

        printf("%d ", aux->x);
    }



} 


int main (){

    Queue * i, *f;

    i = NULL;
    f = NULL;


    enfila(&i, &f, 1);
    enfila(&i, &f, 2);
    enfila(&i, &f, 3);
    enfila(&i, &f, 4);
    enfila(&i, &f, 5);
    desenfila(&i, &f);
    desenfila(&i, &f);
   
    imprime(&i);






}