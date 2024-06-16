// apenas um codigo de lista duplamente encadeada
#include <stdio.h>
#include <stdlib.h>


struct celula {

    int x;
    celula *p, *a;

};

void addfim(celula **lista, int x){

    celula * nova, *aux;
    nova = (celula *) calloc (1,sizeof(celula));
    nova->x = x;
    

    if((*lista) == NULL){

        (*lista) = nova;

    }else{ 
        
        for (aux = (*lista); aux->p != NULL; aux = aux->p);
        
        
        aux->p= nova;
        nova->a = aux;


    }
}

void addini(celula ** lista, int x){

    celula * nova;

    nova = (celula *) calloc (1, sizeof(celula));

    nova->x = x;
    nova->p = (*lista);
    
    
    if((*lista) != NULL){
        (*lista)->a = nova;
 
    }

    *lista = nova;    

}

celula * busca(celula ** lista, int x){

    celula * p;
    p = (*lista);

    while (p != NULL && p->x != x)
        p = p->p;

    return p;

}

void buscaremove(celula **lista, int x){
    
    celula *p;
    p = busca(&(*lista), x);
    if(p->a == NULL) /*nó a remover é o primeiro*/
    {
        *lista = (*lista)->p;
        if(*lista != NULL)
            (*lista)->a = NULL;
    }
    else{
        p->a->p = p->p;
        if(p->p!=NULL) /*caso p seja o último nó, seu prox é NULL*/
            p->p->a = p->a;
    }
    free(p);
}

// falta imprimir
int main(){

    celula * lista, *ptr;

    lista = NULL;
    addfim(&lista, 1);
    addfim(&lista, 2);
    addfim(&lista, 3);
    addfim(&lista, 4);
    addini(&lista, 5);
    addini(&lista, 6);
    ptr = busca(&lista, 3);

    if (ptr != NULL){
        printf("%d ", ptr->x);
    } else {
        printf("ponteiro não encontrado");
    }


}