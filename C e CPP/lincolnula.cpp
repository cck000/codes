// conta linhas e colunas nulas de uma matriz
#include <stdio.h>
#define MAX 100

int main() {

    int matriz[MAX][MAX], m, n, i, j, linhas, colunas, ln, cn;

    linhas = 0 ;
    colunas = 0;
    printf("\ninforme o tamanho da matriz: ");
    scanf("%d %d", &m ,&n);

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){        
            printf("\ninforme o elemento %d %d da matriz: ", i , j);
            scanf("%d", &matriz[i][j]);

        }
    }

    for (i = 0; i < m; i++){
        ln = 1;
            
        for (j = 0; j < n; j++){
            if (matriz[i][j]  != 0){
                ln = 0;
                break;
            }
        }

        if(ln) {
            linhas++;
        }
    }
    
   for (j = 0; j< n; j++){
        cn = 1;
            
        for (i = 0; i < m; i++){
            if (matriz[i][j]  != 0){
                cn = 0;
                break;
            }
        }

        if(cn) {
            colunas++;
        }
    }
    printf("\nA matriz tem %d linhas nulas e %d colunas nulas", linhas, colunas);
  
    return 0;
}