#include <stdio.h>
/* Recebe um inteiro n, 1 6 n 6 100, e n medidas de tempo
hh:mm:ss, e mostra esses tempos em ordem crescente */
int main(void)
{
    int i, j, n;
    struct
    {
        int hh;
        int mm;
        int ss;
    } cron[100], aux;
    printf("Informe a quantidade de medidas de tempo: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Informe uma medida de tempo (hh:mm:ss): ");
        scanf("%d:%d:%d", &cron[i].hh, &cron[i].mm, &cron[i].ss);
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (cron[j].hh > cron[j + 1].hh)
            {
                aux = cron[j];
                cron[j] = cron[j + 1];
                cron[j + 1] = aux;
            }
            else
            {
                if (cron[j].hh == cron[j + 1].hh)
                {
                    if (cron[j].mm > cron[j + 1].mm)
                    {
                        aux = cron[j];
                        cron[j] = cron[j + 1];
                        cron[j + 1] = aux;
                    }
                }
                else
                {
                    if (cron[j].mm == cron[j + 1].mm)
                    {
                        if (cron[j].ss > cron[j + 1].ss)
                        {
                            aux = cron[j];
                            cron[j] = cron[j + 1];
                            cron[j + 1] = aux;
                        }
                    }
                }
            }
        }
    }
    printf("\nHorários em ordem crescente\n");
    for (i = 0; i < n; i++)
        printf("%d:%d:%d\n", cron[i].hh, cron[i].mm, cron[i].ss);
    return 0;
}