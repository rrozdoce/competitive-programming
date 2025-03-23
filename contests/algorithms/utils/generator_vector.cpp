#include <iostream>
#include <vector>
#include <random>    // Para gerar números aleatórios
#include <algorithm> // Para std::generate
#include <fstream>   // Para manipulação de arquivos

int main()
{
    // Configuração do gerador de números aleatórios
    std::random_device rd;                           // Dispositivo de entropia para semente
    std::mt19937 gen(rd());                          // Gerador Mersenne Twister
    std::uniform_int_distribution<> distrib(1, 100); // Distribuição uniforme entre 1 e 100

    // Cria um vetor de 100 elementos
    std::vector<int> vetor(100);

    // Preenche o vetor com números aleatórios
    std::generate(vetor.begin(), vetor.end(), [&]()
                  { return distrib(gen); });

    // Abre o arquivo cin.txt para escrita
    std::ofstream arquivo("cin.txt");
    if (!arquivo.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo cin.txt!\n";
        return 1;
    }

    // Escreve os números no arquivo
    for (const auto &elemento : vetor)
    {
        arquivo << elemento << " ";
    }
    arquivo << "\n"; // Adiciona uma nova linha no final

    // Fecha o arquivo
    arquivo.close();

    std::cout << "Arquivo cin.txt gerado com sucesso!\n";

    return 0;
}