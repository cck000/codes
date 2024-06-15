//soma recursiva
#include <stdio.h>


int somadRecursivo(int n){

    if (n/10 == 0){

        return n;
    } else{

        return  n%10 + somadRecursivo(n/10);
    }

}




int main(){

    int n = 54128;

    
    
    printf("%d", somadRecursivo(n));


}