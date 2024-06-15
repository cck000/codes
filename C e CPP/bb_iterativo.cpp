//busca binaria iterativa

#include <stdio.h>

void isort(int n, int v[]){

    int i,j,x;

    for (i = 0; i < n; i++){
        x = v[i];
        for (j = i -1; j >= 0 && v[j] > x; j--){
            v[j+1] = v[j];   
        }
        v[j+1] = x; 
    }
}


int buscaBin(int n, int v[], int x){

    int esq, dir, meio;
    esq = -1;
    dir = n;

    while (esq < dir - 1) {
        meio = (esq + dir) / 2;

        if (v [meio] < x)
            esq = meio;

        else
            dir = meio;

    }
    return dir;
}



int main(){

    int n, x;
    scanf("%d", &n);
    int v[n];
    
    for (int i = 0; i < n; i++){

        scanf("%d", &v[i]);
    }
    scanf("%d", &x);

    isort(n, v);

    for (int i = 0; i < n; i++){

        printf("%d ", v[i]);
    }

    printf("\n%d ", buscaBin(n, v, x));

}