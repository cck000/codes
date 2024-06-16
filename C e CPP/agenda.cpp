//mini agenda usando struct
#include <stdio.h>

#define MAX 100

struct ag
{
    char comp[61];
    struct
    {
        int mes, dia, ano;
    } data;
};

int main()
{

    ag agenda[MAX], aux;

    int i = 0;

    for (i = 0; i < 5; i++)
    {

        scanf("%s", aux.comp);
        scanf("%d/%d/%d", &aux.data.dia, &aux.data.mes, &aux.data.ano);

        agenda[i] = aux;
    }

    ag cos[MAX], aix;
    int l = 0;
    while (true)
    {
        scanf("%d/%d", &aix.data.mes, &aix.data.ano);

        if (!aix.data.mes && !aix.data.ano)
        {
            break;
        }
        else
        {

            cos[l] = aix;
        }
        l++;
    }
    for (l = 0; l < 5; l++)
    {

        for (int h = 0; h < 5; h++)
            if ((agenda[h].data.mes == cos[l].data.mes) && (agenda[h].data.ano == cos[l].data.ano))
            {
                printf("%s\n", agenda[h].comp);
            }
    }
}