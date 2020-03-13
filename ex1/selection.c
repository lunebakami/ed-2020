#include <stdio.h>

int retornaMenor(int v[], int inicio, int tamanho)
{
    int menor = inicio;

    for (int i = inicio; i < tamanho; i++)
    {
        if (v[i] < v[menor])
        {
            menor = i;
        }
    }
    return menor;
}

int main(int argc, char const *argv[])
{
    int n, menor, troca;

    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        menor = retornaMenor(v, i, n);
        troca = v[i];
        v[i] = v[menor];
        v[menor] = troca;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d - ", v[i]);
    }

    return 0;
}
