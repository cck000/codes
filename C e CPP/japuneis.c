#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade = 0;
    float media = 0;
    int i = 0;
    do
    {

    scanf("%d", &idade);
    
    media += idade;
    i += 1;

    } while (idade != 0);
    
    media /= i-1;

    printf("%f", media);

}