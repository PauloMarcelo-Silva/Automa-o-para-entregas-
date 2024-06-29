
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Função para ler os dados do arquivo de entrada
vector<vector<int>> lerDados(const string& arquivoEntrada) {
    // Implemente a lógica para ler os dados do arquivo de entrada
    // Retorne uma matriz bidimensional contendo os custos
}

// Função para o algoritmo guloso
vector<vector<int>> algoritmoGuloso(const vector<vector<int>>& custos) {
    // Implemente a lógica do algoritmo guloso
    // Retorne uma matriz bidimensional contendo as rotas
}

// Função para escrever a solução no arquivo de saída
void escreverSolucao(const string& arquivoSaida, 
                     const vector<vector<int>>& rotas, 
                     const int custoTotal, 
                     const int custoRoteamento, 
                     const int custoEntrega) {
    // Implemente a lógica para escrever a solução no arquivo de saída
    // Utilize o formato especificado
}

int main() {
    // Nome dos arquivos de entrada e saída
    const string arquivoEntrada = "dados.txt";
    const string arquivoSaida = "solucao.txt";

    // Leia os dados do arquivo de entrada
    vector<vector<int>> custos = lerDados(arquivoEntrada);

    // Execute o algoritmo guloso
    vector<vector<int>> rotas = algoritmoGuloso(custos);

    // Calcule o custo total da solução
    int custoTotal = 0;
    for (const vector<int>& rota : rotas) {
        for (int i = 1; i < rota.size(); ++i) {
            custoTotal += custos[rota[i - 1]][rota[i]];
        }
    }

    // Calcule o custo de roteamento
    int custoRoteamento = custoTotal / 5.55;

    // Calcule o custo de entrega
    int custoEntrega = custoRoteamento * 5.55;

    // Escreva a solução no arquivo de saída
    escreverSolucao(arquivoSaida, rotas, custoTotal, custoRoteamento, custoEntrega);

    return 0;
}


