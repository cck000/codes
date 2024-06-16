//diferença de horas
#include <stdio.h>
#include <stdlib.h>

struct Tempo
{
    int h = 0, m = 0, s = 0;
};

int main()
{

    Tempo tempo[2], aux;
    scanf("%d:%d:%d", &tempo[0].h, &tempo[0].m, &tempo[0].s);
    scanf("%d:%d:%d", &tempo[1].h, &tempo[1].m, &tempo[1].s);

    int segA = tempo[0].h * 3600 + tempo[0].m * 60 + tempo[0].s;

    int segB = tempo[1].h * 3600 + tempo[1].m * 60 + tempo[1].s;

    int sRes = abs(segB - segA);

    aux.h = sRes / 3600;
    sRes %= 3600;
    aux.m = sRes / 60;
    aux.s = sRes % 60;

    printf("%.2d:%.2d:%.2d", aux.h, aux.m, aux.s);
}
