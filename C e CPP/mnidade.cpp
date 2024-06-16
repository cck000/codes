// encontra o mais velho e o mais novo armazenado em uma struct
#include <stdio.h>

struct {

    char nome[51];
    int idade = 0;

} pessoa[100], aux;

int main(){
    int n = 0 ;
    
    printf("insira quantas pessoas voce quer adicionar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        printf("________NOME_________: ");
        scanf(" %[^\n]", &pessoa[i].nome);
        printf("________IDADE________: ");
        scanf(" %d", &pessoa[i].idade);

    }

    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (pessoa[i].idade > pessoa[i+1].idade){

                aux = pessoa[i];
                pessoa[i] = pessoa[i+1];
                pessoa[i+1] = aux;
                
            }
        }
    }

    printf("O mais velho eh o %s com %d anos\n", pessoa[n].nome, pessoa[n].idade);
    printf("O mais novo eh o %s com %d anos", pessoa[0].nome, pessoa[0].idade);

    return 0;
}

