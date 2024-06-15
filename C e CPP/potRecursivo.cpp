//calcula de pontencia recursiva
#include <stdio.h>

int potRecursivo(int n, int x){

    if (n == 0){

        return 1;
    } else{

        return  x *  potRecursivo(n-1, x);
    }

}

int main(){

    int n = 2, x = 4;

    printf("%d", potRecursivo(n, x));

}