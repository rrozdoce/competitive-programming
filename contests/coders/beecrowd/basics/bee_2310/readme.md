# Voleibol

Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez, bem como quantos desses saques, bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

## Entrada

A entrada é dada pelo número de jogadores **N** (1 ≤ **N** ≤ 100), seguido pelo nome de cada um dos jogadores. Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha **S**, **B** e **A** (0 ≤ **S**,**B**,**A** ≤ 10000) representam a quantidade de tentativas de saques, bloqueios e ataques e na segunda linha, **S1**, **B1** e **A1** (0 ≤ **S1** ≤ **S**; 0 ≤ **B1** ≤ **B**; 0 ≤ **A1** ≤ **A**) com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

## Saida

A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado no exemplo.

Exemplo de Entrada

3
Renan
10 20 12
1 10 9
Jonas
8 7 1
2 7 0
Edson
3 3 3
1 2 3 

Exemplo de saida

Pontos de Saque: 19.05 %.
Pontos de Bloqueio: 63.33 %.
Pontos de Ataque: 75.00 %.