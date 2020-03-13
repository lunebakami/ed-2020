/// Determina se o `vetor` informado, com `tamanho_vetor` elementos,
/// está ordenado em ordem não-decrescente.
bool verificar_ordenacao(int vetor[], unsigned int tamanho_vetor) {
    for(unsigned int i = 1; i < tamanho_vetor; ++i) {
        if(vetor[i-1] > vetor[i]) {
            return false;
        }
    }

    return true;
}