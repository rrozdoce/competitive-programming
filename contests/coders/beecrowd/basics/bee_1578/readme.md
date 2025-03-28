# Matriz de Quadrados

Atrapalhilton é um estudante muito dedicado, embora muito, muito atrapalhado. Na semana passada, seu professor de Matemática, o Sr. Sabetudilton, recomendou à classe uma lista de exercícios sobre matrizes. Atrapalhilton, aplicado como é, dediciu fazer os exercícios no mesmo dia, tão logo chegou em casa, embora apenas após assistir o episódio vespertino de A Galinha Listradinha, seu programa de TV favorito. O enunciado de um dos exercícios dizia:

- Calcule o quadrado de cada uma das matrizes abaixo…

No entanto, Atrapalhilton fez uma baita duma confusão. Para ele, o quadrado de uma matriz quadrada A é a matriz dos quadrados dos valores da matriz A. Por exemplo, o quadrado da matriz

## Entrada

| 1 | 3 |
| 5 | 7 |

para ele não é

| 1 | 3 |
| 5 | 7 |

mas

| 1 | 9 |
| 25 | 49 |

Atrapalhilton conseguiu calcular o “quadrado” da primeira matriz, da segunda, da terceira e percebeu que já estava muito tarde, que não ia conseguir terminar de calcular os “quadrados” de todas as N matrizes da lista. Então, decidiu escrever um programa que fizesse o serviço para ele.

## Saida

Imprima o “quadrado” de cada matriz da entrada, conforme o que Atrapalhilton entende pelo “quadrado” de uma matriz. Antes de imprimir cada “quadrado”, imprima a linha “Quadrado da matriz #**x**:” (sem as aspas), para ajudar Atrapalhilton a não se perder na hora de passar a limpo os resultados para o caderno. Comece a contagem em **x** = 4, afinal, Atrapalhilton já calculou os “quadrados” das 3 primeiras matrizes. Adicione tantos espaços em branco à esquerda de cada valor quanto necessários para que os valores de uma mesma coluna fiquem todos alinhados à direita, de modo que haja ao menos um valor em cada coluna não precedido por espaços em branco além do espaço em branco obrigatório que separa colunas consecutivas. Imprima também uma linha em branco entre “quadrados” de matrizes consecutivas.

Exemplo de Entrada

1
2
7 12
1024 1

Exemplo de saida

Quadrado da matriz #4:
49 144
1048576 1

