#!/bin/bash

# Nome dos arquivos de código
SOLUTION="solucao.cpp"  # Sua solução otimizada
BRUTE_FORCE="brute.cpp" # Solução de força bruta (geralmente lenta, mas correta)
GENERATOR="gerador.cpp" # Gerador de casos de teste

# Compilar os códigos
g++ -std=c++17 -o solucao $SOLUTION
g++ -std=c++17 -o brute $BRUTE_FORCE
g++ -std=c++17 -o gerador $GENERATOR

# Contador de testes
test_count=1

# Loop para gerar e testar casos
while true; do
    echo "Teste $test_count"

    # Gerar um caso de teste
    ./gerador > input.txt

    # Executar as soluções
    ./solucao < input.txt > output_solucao.txt
    ./brute < input.txt > output_brute.txt

    # Comparar as saídas
    if diff -w output_solucao.txt output_brute.txt > /dev/null; then
        echo "OK"
    else
        echo "Erro encontrado!"
        echo "Input:"
        cat input.txt
        echo "Sua solução:"
        cat output_solucao.txt
        echo "Solução de força bruta:"
        cat output_brute.txt
        break
    fi

    # Incrementar o contador de testes
    test_count=$((test_count + 1))
done