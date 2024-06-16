//calcula idade

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    

    char *nome = argv[1];
    int ano_nascimento = atoi(argv[2]);
    int ano_atual = atoi(argv[3]);

    int idade = ano_atual - ano_nascimento;

    printf("Oi %s, voce tem %d anos\n", nome, idade);

    return 0;
}
