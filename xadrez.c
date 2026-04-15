#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

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
   
    int torre = 0;
    int bispo = 0;
    int rainha= 0;
    //movimentando a torre
    for(torre ; torre < 5 ; torre++){
        printf("torre\n");
        printf("direita\n");
    }
    printf("\n");
    //movimentando o bispo

    while(bispo < 5){
        bispo++;
        printf("bispo\n");
        printf("cima,direita\n");

    }
        printf("\n");
    //movimentando a Rainha
    do{
        rainha++;
        printf("rainha\n");
        printf("esquerda\n");
    }while(rainha < 8);
    

    //movimentando o cavalo
    printf("\n");//identando uma linha vazia
       int movimentacaoCavalo = 1;//valor inicial do cavalo

       while(movimentacaoCavalo--){
            for(int i = 0; i<2;i++){
            printf("baixo\n");//imprime "Baixo 2 vezes"
            }
            printf("esquerda\n");
       }
       return 0;
}
