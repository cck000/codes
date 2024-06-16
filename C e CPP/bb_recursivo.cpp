// busca binaria recursiva
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

int buscaBinR(int esq, int dir, int v[], int x){

    int meio;

    if (esq == dir - 1)
        return dir;

    else {
        meio = (esq + dir) / 2;

        if (v [meio] < x)
            return buscaBinR(meio, dir, v , x);

        else
            return buscaBinR(esq, meio, v , x);
    }
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

    printf("\n%d ", buscaBinR(-1 , n, v, x));

}