//diferença de datas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct difdata
{
    int d = 0, m = 0, a = 0;
};

void testeData(difdata &data)
{

    if (data.m <= 2)
    {
        data.a -= 1;
    }

    if (data.m <= 2)
    {
        data.m += 13;
    }
    else
    {
        data.m += 1;
    }
}

int main()
{

    difdata d1, d2;
    float data1 = 0, data2 = 0, datatotal = 0;

    scanf("%d/%d/%d", &d1.d, &d1.m, &d1.a);

    scanf("%d/%d/%d", &d2.d, &d2.m, &d2.a);

    testeData(d1);
    testeData(d2);

    data1 = ((1461 * d1.a) / 4) + ((153 * d1.m) / 5) + d1.d;

    data2 = ((1461 * d2.a) / 4) + ((153 * d2.m) / 5) + d2.d;

    datatotal = fabs(data1 - data2);

    printf("%.0f", datatotal);
}
