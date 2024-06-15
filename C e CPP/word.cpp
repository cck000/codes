//encotra a quantidade de letras maiusculas, minusculas, espacos, numeros e simbolos em uma palavra
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minus(char a[]){
    int j = 0;
    for (int i = 0;  a[i] != '\0'; i++){

        if ((int) a[i] >= 97 && (int) a[i] <= 122){

            j++;
        }
    }
    return j;
}

int maius(char a[]){
    int j = 0;
    for (int i = 0;  a[i] != '\0'; i++){

        if ((int) a[i] >= 65 && (int) a[i] <= 90){

            j++;
        }
    }
    return j;
}


int num(char a[]){
    int j = 0;
    for (int i = 0;  a[i] != '\0'; i++){

        if ((int) a[i] >= 48 && (int) a[i] <= 57){

            j++;
        }
    }
    return j;
}

int espaco(char a[]){
    int j = 0;
    for (int i = 0;  a[i] != '\0'; i++){

        if ((int) a[i] == 32){

            j++;
        }
    }
    return j;
}

int symb(char a[]){
    int j = 0;
    for (int i = 0;  a[i] != '\0'; i++){

        if (((int) a[i] >= 33 && (int) a[i] <= 47 )|| ((int) a[i] >= 58 && ((int) a[i] <= 64)) || ((int) a[i] >= 91 && (int) a[i] <= 96 )){

            j++;
        }
    }
    return j;
}

int main (){

    char * texto;

    texto = (char *) malloc(size_t(100) * sizeof(char));

    scanf("%[^\n]", texto);
    
    printf("existe %d letras minusculas\n", minus(texto));
    printf("existe %d letras maiusculas\n", maius(texto));
    printf("existe %d numeros\n", num(texto));
    printf("existe %d espaços\n", espaco(texto));
    printf("existe %d simbolos\n", symb(texto));
    free(texto);
}   