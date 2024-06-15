//apenas um codigo de lista encadeada

#include <stdio.h>
#include <stdlib.h>


struct Cad
{
    int valor;
    Cad *prox;
};

void addlista (Cad **lst){
    int x;
    scanf("%d", &x);
    if ((*lst) == NULL){

        (*lst) = (Cad *) malloc(sizeof(Cad));
        (*lst)->prox = NULL;
        (*lst)->valor = x;
        
    } else{
        Cad *p;

        

        for(p = (*lst); p->prox != NULL; p = p->prox);
        p->prox = (Cad *) malloc(sizeof(Cad));

        p->prox->valor = x;
        p->prox->prox = NULL;
    }

}


void removeLista(Cad **lst){
    Cad *p, *l;
    for(p = (*lst); p->prox != NULL; p = p->prox){
        l = p;
    }

    l->prox = NULL;
    free(p);
}

void imprimelista(Cad **lst){

    Cad *p;

    for(p = (*lst); p != NULL; p = p->prox){

      printf("%d ", p->valor);
    }
}

Cad * busca(int x, Cad ** lst){

    Cad *p;

    for(p = (*lst); p != NULL && p->valor != x; p = p->prox);

    return p;

}


void buscaRemove(int x, Cad **lst){

    Cad *p, *q;

    q = NULL;
    for(p = (*lst); p != NULL && p->valor != x; p = p->prox){
        q = p;
    }

    if (p != NULL){

        if (p != NULL){
            q->prox = p->prox;
            free(p);
        } else {

            (*lst) = p->prox;
            free(p);
        }
    }
}

void Apagar(Cad **lst){

    Cad *p;

    for(p = (*lst); *lst != NULL; *lst = (*lst)->prox){
        free(p);
    }

 
}

int main(){ 

    Cad *lista;
    lista = NULL;
    
    addlista(&lista);
    addlista(&lista);
    //addlista(&lista);



    //buscaRemove(2, &lista);
    
    imprimelista(&lista);
    //Apagar(&lista);

    
    printf("\n%d\n", *(busca(2, &lista)));


}