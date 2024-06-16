//algumas funcoes de sorting
#include <stdio.h>
#define MAX 100

void selectionsort(int n, int v[])
{

    int i, j, min, aux;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (v[j] < v[min])
                min = j;

        troca(&v[j], &v[min]);
    }
}

void troca(int *a, int *b)
{

    int aux;

    aux = *b;

    *b = *a;

    *a = aux;
}
void isort(int n, int v[])
{

    int i, j, x;

    for (i = 0; i < n; i++)
    {
        x = v[i];
        for (j = i - 1; j >= 0 && v[j] > x; j--)
        {
            v[j + 1] = v[j];
        }
        v[j + 1] = x;
    }
}

void intercala(int p, int q, int r, int v[MAX])
{
    int i, j, k, w[MAX];
    i = p;
    j = q;
    k = 0;
    while (i < q && j < r)
    {
        if (v[i] < v[j])
        {
            w[k] = v[i];
            i++;
        }
        else
        {
            w[k] = v[j];
            j++;
        }
        k++;
    }
    while (i < q)
    {
        w[k] = v[i];
        i++;
        k++;
    }
    while (j < r)
    {
        w[k] = v[j];
        j++;
        k++;
    }
    for (i = p; i < r; i++)
        v[i] = w[i - p];
}

void mergesort(int p, int r, int v[MAX])
{
    int q;
    if (p < r - 1)
    {
        q = (p + r) / 2;
        mergesort(p, q, v);
        mergesort(q, r, v);
        intercala(p, q, r, v);
    }
}

int separa(int p, int r, int v[MAX])
{
    int x, i, j;
    x = v[p];
    i = p - 1;
    j = r + 1;
    while (1)
    {
        do
        {
            j--;
        } while (v[j] > x);
        do
        {
            i++;
        } while (v[i] < x);
        if (i < j)
            troca(&v[i], &v[j]);
        else
            return j;
    }
}

void quicksort(int p, int r, int v[MAX])
{
    int q;
    if (p < r)
    {
        q = separa(p, r, v);
        quicksort(p, q, v);
        quicksort(q + 1, r, v);
    }
}

int main()
{

    int vet[MAX], n, aux = 0;

    printf("declare o tamanho do vetor: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        printf("\ninsira o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    
    printf("\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", vet[i]);
    }

    return 0;
}