// algoritmo de euclides recursivo
#include <stdio.h>

int euclidesRec(int a, int b) {
    if (b == 0) {
        return a; 
    } else {
        return euclidesRec(b, a % b);
    }
}

int main(){

    int a, b;

    scanf("%d %d", &a, &b);
    
    printf("%d", euclidesRec(a, b));


}

