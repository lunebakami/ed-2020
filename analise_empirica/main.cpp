#include <iostream>
#include <ctime>

using std::cin;

bool verificar_ordenacao(int vetor[], unsigned int tamanho_vetor)
{
    for (unsigned int i = 1; i < tamanho_vetor; ++i)
    {
        if (vetor[i - 1] > vetor[i])
        {
            return false;
        }
    }

    return true;
}

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

int *selection(int v[], int tamanho)
{
    int tamanho, menor, troca;

    for (int i = 0; i < tamanho; i++)
    {
        menor = retornaMenor(v, i, tamanho);
        troca = v[i];
        v[i] = v[menor];
        v[menor] = troca;
    }

    return v;
}

int *insertion(int v[], int tamanho)
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

    return 0;
}

int *bubble(int v[], int tamanho)
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

    return v;
}

int main()
{
    unsigned int tamanho_vetor;
    int *vetor_selection, *vetor_insertion, *vetor_bubble;

    clock_t inicio, fim;
    double tempo_selection, tempo_insertion, tempo_bubble;

    cin >> tamanho_vetor;

    // São necessarios três vetores para podermos alterá-los nas funções de
    // ordenação sem prejudicar as próximas chamadas.
    vetor_selection = new int[tamanho_vetor];
    vetor_insertion = new int[tamanho_vetor];
    vetor_bubble = new int[tamanho_vetor];

    for (unsigned int i = 0; i < tamanho_vetor; ++i)
    {
        cin >> vetor_selection[i];

        // Os três vetores devem ter os mesmos elementos
        vetor_bubble[i] = vetor_insertion[i] = vetor_selection[i];
    }

    //Selection
    inicio = clock();

    vetor_selection = selection(vetor_selection, tamanho_vetor);

    fim = clock();

    tempo_selection = 1000.0 * double(fim - inicio) / CLOCKS_PER_SEC;

    //Insertion
    inicio = clock();

    vetor_insertion = selection(vetor_insertion, tamanho_vetor);

    fim = clock();

    tempo_insertion = 1000.0 * double(fim - inicio) / CLOCKS_PER_SEC;

    //Bubble
    inicio = clock();

    vetor_bubble = selection(vetor_bubble, tamanho_vetor);

    fim = clock();
    tempo_bubble = 1000.0 * double(fim - inicio) / CLOCKS_PER_SEC;

    delete[] vetor_selection;
    delete[] vetor_insertion;
    delete[] vetor_bubble;

    return 0;
}