# Competitive Programming

![Competitive Programming](https://img.shields.io/badge/Competitive-Programming-blue) ![C++](https://img.shields.io/badge/Language-C%2B%2B-red)

Este repositório contém minhas soluções para diversos problemas de programação competitiva de várias plataformas como Codeforces, LeetCode, CSES, URI/Beecrowd e outras.

## Estrutura do Repositório

O repositório está organizado principalmente por plataformas:

- constes/coders/leetcode/ - Soluções para problemas do LeetCode
- constes/coders/beecrowd/ - Soluções para problemas do Beecrowd (antigo URI)
  - cada problema é separado por ex: bee_<numero_do_problema>
- `constes/algorithms/` - Implementações de algoritmos e estruturas de dados comuns
- slides/  - slides da aula de introdução a programação competitiva

## Linguagem

As soluções estão implementadas em C++, mas pode ser usadas outras linguagens.

## Contribuições

Contribuições são bem-vindas! Se você encontrar uma solução mais eficiente ou quiser adicionar a solução para um novo problema, sinta-se à vontade para abrir um Pull Request.

## Propósito

Este repositório tem como objetivo:

- Documentar meu progresso em programação competitiva
- Servir como referência para implementações de algoritmos e técnicas comuns
- Compartilhar conhecimento com outros entusiastas de programação competitiva

## Recursos Úteis

Aqui estão alguns recursos úteis para programação competitiva:

- [Competitive Programmer's Handbook](https://cses.fi/book/book.pdf)
- [CP-Algorithms](https://cp-algorithms.com/)
- [Visualgo](https://visualgo.net/) - Visualização de algoritmos e estruturas de dados

## Como Usar

Cada arquivo contém a solução para um problema específico. O nome do arquivo geralmente corresponde ao ID ou nome do problema na plataforma correspondente, poderá ser usado Makefile ou compilar diretamente no terminal se preferir.

```bash
# Exemplo de como compilar e executar um arquivo C++
g++ -std=c++17 problem.cpp -o problem
./problem


```

```makefile
# Nome do compilador
CXX = g++

# Flags do compilador
CXXFLAGS = -Wall -std=c++20 -O2

# Regra padrão (compilar um arquivo .cpp para o executável com nome especificado)
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ -lm

# Limpar executáveis gerados
clean:
	rm -f $(basename $(wildcard *.cpp))
```

## Contato

Se você tiver alguma dúvida ou sugestão, sinta-se à vontade para abrir uma issue ou entrar em contato comigo.



Email: felipefelipevilhalva@gmail.com

------

**Nota**: Este repositório é apenas para fins educacionais e de referência.