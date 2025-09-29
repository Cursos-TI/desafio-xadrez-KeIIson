#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   

        //variavel que define a quantidade de movimentos de cada peça
        const int movimentosTorre = 5;
        const int movimentosBispo = 5;
        const int movimentosRainha = 8;

        // variavel para controlar os loops
        int i;
        printf("Movimento da torre 5 casas direita):\n");
        // fazendo movimento da torre em (for)
        for (i = 1; i <= movimentosTorre; i++)
        {
            printf("Direita\n");
        } 
        printf("\n");


        //fazendo movimento do bispo em diagonal, imprimindo as duas direções de movimento (while)
        printf("Movimento do Bispo(5 casas na diagonal em cima esquerda):\n");
        i = 1;
        while (i <= movimentosBispo)
        {
            printf("Cima Esquerda\n");
            i++;
        }
        printf("\n");

        //fazendo movimento da rainha (do-while)
        printf("Morimento da Rainha(8 casas para a esquerda):\n");
        i = 1;
        do {
            printf("Esquerda\n");
            i++;
        } while (i <= movimentosRainha);
        // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
