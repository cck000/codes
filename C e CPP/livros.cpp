
// busca livros em uma lista de structs
#include <stdio.h>


#define TAM 100
#define MAX 30

struct tLivro
{
	char titulo[MAX], autor[MAX];
	int ano;
};

void leitura(tLivro vetor[TAM], int i); // complete o prototipo desta funcao

void listagem(tLivro vetor[TAM], int n, int P);

// funcao principal
int main()
{

    int opcao, i = 0, P = 0;
    tLivro vetor[TAM];
    do{

        printf("[1] adicionar livro\n[2] buscar livro\n[0] encerra o programa\nopcao: ");
        scanf("%d", &opcao);
        
        if (opcao == 1){
            printf("\e[1;1H\e[2J");
            leitura(vetor, i);
            i++;
        }

        if (opcao == 2){
            
            listagem(vetor, i, P);
        }

        
    }while(opcao !=0);




	return 0;
}


void leitura(tLivro vetor [TAM], int i){
    printf("insira o titulo, o autor e o ano do livro seperado por espaco: ");
    scanf("%s %s %d", vetor[i].titulo, vetor[i].autor, &vetor[i].ano);
    
}

void listagem(tLivro vetor[TAM], int i, int P){

    printf("insira o ano limite de busca ou 0 para buscar todos: ");
    scanf("%d", &P);
    
        for(int j = 0; j < i; j++){
            if (P >= vetor[j].ano &&  P != 0){
                printf("LIVRO %d|TITULO %s|AUTOR %s|ANO %d\n", j, vetor[j].titulo, vetor[j].autor, vetor[j].ano);

            } else if(P==0){

                printf("LIVRO %d|TITULO %s|AUTOR %s|ANO %d\n", j, vetor[j].titulo, vetor[j].autor, vetor[j].ano);
            }
        }

    
}