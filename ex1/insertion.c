#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, j, valor;

    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 1; i < n; i++)
    {
        valor = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > valor)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = valor;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d - ", v[i]);
    }

    return 0;
}
