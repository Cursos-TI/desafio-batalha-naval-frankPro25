#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int area[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    char *orientacaoN[3] = {"v", "h", "h"};

    int navios = 3;

    int coordenadasx[10] = {1 - 1, 7 - 1, 7 - 1};
    int coordenadasy[10] = {3 - 1, 4 - 1, 8 - 1};


    for (int n = 0; n < navios; n++)//loop para numero de navios
    {
        for (int y = 0; y < 10; y++)//loop para linhas. navega por todas as linhas da "area" gravando navio por navio
        {
            for (int x = 0; x < 10; x++)//loop para colunas. navega por todas as colunas das linhas "y" 
            {
                if (orientacaoN[n] == "v")
                { /* se a orientacao for vertical Y recebe + e - 1
                     {+1},
                     { 1},
                     {-1}
                     isso garante que linha "y" superior e inferior em relaçao a coluna "x" receba "3"
                     */
                    if ((coordenadasy[n] == y || coordenadasy[n] - 1 == y || coordenadasy[n] + 1 == y) && (coordenadasx[n] == x))//gravando o navio de acordo com as coordenadas, numero do navio e orientacao.

                    {
                        area[y][x] = 3; // gravando no campo certo
                    }
                }
                else if (orientacaoN[n] == "h")// se a orientacao for horizontal X recebe + e - 1 {-1,1,+1} inverso do vertical
                {
                    if ((coordenadasx[n] == x || coordenadasx[n] - 1 == x || coordenadasx[n] + 1 == x) && (coordenadasy[n] == y)) 
                    {
                        area[y][x] = 3; 
                    }
                }
            }
        }
    }
    for (int x = 0, y = 0; (x < 10) && (y < 10); y = (x >= 9) ? y + 1 : y, x = (x < 9) ? x + 1 : 0)
    {
        if (x >= 9)
        {
            printf(" %i \n", area[y][x]);
        }
        else
        {
            printf(" %i ", area[y][x]);
        }
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
