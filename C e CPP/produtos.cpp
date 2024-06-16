//sistema de cadastro e busca de produtos
#include <stdio.h>
#include <string.h>
struct tProduto{
    int cod ;
    char nome[31];
    float preco ;

};

void Cadastro(struct tProduto prod[], int i) {
    
    for (int j = 0; j < i; j++){
        
        scanf("%d %30s %f", &prod[j].cod, prod[j].nome, &prod[j].preco);

    }
    
}

void Imprime(struct tProduto prod[], int i){
    printf("LISTAGEM\n");
    for(int j = 0; j < i; j++){
        printf("%d %s\n", prod[j].cod, prod[j].nome);
    }
}

int Busca(struct tProduto prod[], int n, int codigo){
    
    for (int j = 0; j < n; j++){

        if (prod[j].cod == codigo){

            return printf("Preço: R$ %.2f", prod[j].preco);
        }  
        

    }
    return printf("Inexistente");
}

int main(){

    
    int n, cod;

    scanf("%d", &n);
    tProduto prod[n];
    Cadastro(prod, n);
    
    Imprime(prod, n);
    
    scanf("%d", &cod);
    Busca(prod, n, cod);
    
    return 0;
}