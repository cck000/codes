//apenas um codigo de lista circular
#include <stdio.h>
#include <stdlib.h>

struct Circo {

    int x;

    Circo *p;
};

void add(int x, Circo **cursor){

    Circo * n;
    n = (Circo *) malloc(sizeof(Circo));

    n->x = x;

    if (*cursor == NULL){

        n->p = n;
        *cursor = n;
    } else {

        n->p = (*cursor)->p;
        (*cursor)->p = n;
    }

}

void remove(Circo **cursor){

    Circo * aux;
    
    if (*cursor != NULL){
        aux = (*cursor)->p;

        if (aux == *cursor)
            *cursor = NULL;
        else
            (*cursor)->p = aux->p;
        
        free(aux);

    }


}

void imprime(Circo **cursor){


    Circo *aux;

    aux = (*cursor);

    do{
    printf("%d ", aux->x);
    aux = aux->p;

    }while(aux != (*cursor));
     
}

Circo * busca(Circo **cursor, int x){

    Circo * aux;

   
    aux = (*cursor);
    do{
    
    aux = aux->p;

    }while(aux != (*cursor) && aux->x != x);

    return aux;

}

int main(){

    Circo * cursor, * aux;
    
    cursor = NULL;

    

    add(1,&cursor);
    add(2,&cursor);
    add(3,&cursor);
    add(4,&cursor);
    add(5,&cursor);

    imprime(&cursor);

    aux = busca(&cursor, 3);
    printf("\n%d", aux);
}