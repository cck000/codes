//algumas funcoes recursivas
#include <stdio.h>
#include <stdlib.h>


int fatRecursivo(int n){
    
    if (n == 1){

        return n;
    } else {

     return n * fatRecursivo(n-1);
    }
    
}


int somaRecursivo(int n){

    if (n == 1){

        return n;
    } else{

        return n + somaRecursivo(n-1);
    }


}

int SomaInteiros(int x, int n)
{
	if(x == n)
		return n;
	else
		return x + SomaInteiros(x+1, n);

}


int contRecursivo(int n){
    int aux = 1 ;
    if (  n / 10 < 1){

        return aux;
    } else{
        
        return aux + contRecursivo(n / 10);
    }
    

}


int potRecursiva(int n, int pot){

    if(pot == 1){

        return n;
    } else {

        return n * potRecursiva(n, pot-1);
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



int somadRecursivo(int n){

    if (n/10 == 0){

        return n;
    } else{

        return  n%10 + somadRecursivo(n/10);
    }

}


int maiorRec(int n, int v[]){

    int aux;

    if (n == 1)
        return v[0];

    else{

        aux = maiorRec(n-1 , v);

        if (aux > v[n-1])
            return aux;
        else
            return v[n-1];

    }

}

