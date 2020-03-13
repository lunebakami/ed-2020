// Incluir o cabeçalho abaixo
#include <ctime>

void exemplo_funcao_onde_executaremos_os_testes() {
    // Declarar as variaveis abaixo
    clock_t inicio, fim;
    double tempo_decorrido;


    // Imediatamente antes da execução
    inicio = clock();

    // !!! Chamar função que queremos medir o tempo !!! //

    // Imediatamente depois da execução
    fim = clock();

    tempo_decorrido = 1000.0 * double(fim - inicio) / CLOCKS_PER_SEC;

    // O valor em `tempo_decorrido` estará em milissegundos
}