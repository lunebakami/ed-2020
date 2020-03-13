#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, j, troca;

    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            if (v[k + 1] < v[k])
            {
                troca = v[k];
                v[k] = v[k + 1];
                v[k + 1] = troca;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d - ", v[i]);
    }

    return 0;
}
