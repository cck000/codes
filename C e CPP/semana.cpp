//encontra o dia da semana de uma data
#include <stdio.h>
#include <string.h>

struct data
{
	int d;
	int m;
	int a;
};

int dias(data &d);

void testeData(data &d);

int main(void)
{
	data d;
	int totald = 0;
	
	scanf("%d/%d/%d", &d.d, &d.m, &d.a);
	
	
	totald = dias(d);
	

    if (totald == 0){
        printf("Domingo");

    } else if (totald == 1){
        printf("Segunda-feira");

    } else if (totald == 2){
        printf("Terca-feira");

    }else if (totald == 3){
        printf("Quarta-feira");

    }else if (totald == 4){
        printf("Quinta-feira");

    }else if (totald == 5){
        printf("Sexta-feira");

    }else if (totald == 6){
        printf("Sabado");
    }
	return 0;
}	

int dias(data &d)
{
    testeData(d);

    int dataaa = ((1461 * d.a) / 4) + ((153 * d.m) / 5) + d.d;
	
    return (dataaa - 621049) % 7;
}

void testeData(data &d)
{

    if (d.m <= 2)
    {
        d.a -= 1;
    }

    if (d.m <= 2)
    {
        d.m += 13;
    }
    else
    {
        d.m += 1;
    }
}

