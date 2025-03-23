# Matriz Escada

Joãozinho está aprendendo sobre matrizes. Hoje ele aprendeu como deixar matrizes na forma escada, e está exercitando. Para ajudá-lo, você deve escrever um programa que determine se o resultado dele realmente está no formato correto.

Uma matriz está na forma escada quando, para cada linha, as condições a seguir forem satisfeitas:

    Se a linha só possuir zeros, então todas as linhas abaixo desta também só possuem zeros.
    Caso contrário, seja X o elemento diferente de zero mais à esquerda da linha; então, para todas as linhas abaixo da linha de X, todos os elementos nas colunas à esquerda de X e na coluna de X são iguais a zero.

## Entrada

A primeira linha possui dois inteiros **N** e **M** (1 ≤ **N**, **M** ≤ 500), as dimensões da matriz. Cada uma das **N** linhas seguintes contém **M** (0 ≤ **Mij** ≤ 10⁵) inteiros não negativos, os elementos da matriz. 

## Saída

Seu programa deve produzir uma única linha, contendo o caractere ‘S’ caso a matriz esteja no formato escada, ou ‘N’, caso contrário.

Exemplos de Entrada 	

4 6

1 2 9 9 9 9
0 0 3 9 9 9
0 0 0 0 5 9
0 0 0 0 0 6
	
Exemplos de Saída
S

Exemplos de Entrada
5 8

0 5 1 0 3 2 2 0

0 0 0 0 4 0 1 2

0 0 0 0 0 0 0 0

0 0 0 0 0 0 0 0

0 0 0 0 0 0 0 0
	
Exemplos de Saída
S

Exemplos de Entrada
5 5

1 1 2 3 4

0 1 1 4 5

0 1 2 3 6

0 0 0 2 0

0 0 0 0 0
	
Exemplos de Saída
N