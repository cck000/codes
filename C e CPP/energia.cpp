//calculo consumo energetico
#include <stdio.h>

struct tEletro
{
    char nome[16];
    float pot, tad;
};

int main(){

    tEletro eletro[5];
    float td = 0;

    for (int i = 0; i < 5; i++){

        scanf("%s", eletro[i].nome);
        fflush(stdin);
        scanf("%f", &eletro[i].pot);
        fflush(stdin);
        scanf("%f", &eletro[i].tad);
        fflush(stdin);
    }

    scanf("%f", &td);

    float ct = 0.0;

    for (int i = 0; i < 5; i++){
        ct += eletro[i].pot * eletro[i].tad * td;
        }
    printf("%.2f\n", ct);
    float cr = 0.0;
    for (int i = 0; i < 5; i++){
        cr = eletro[i].pot * eletro[i].tad * td / ct * 100;
        printf("%.2f\n", cr);
    }


}
