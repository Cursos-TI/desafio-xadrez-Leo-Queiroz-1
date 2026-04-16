#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


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
    //loops recursivos que movimenta as peças
    void movimentoTorre(int movimento){
        if(movimento > 0){
            printf("torre\n");
            printf("direita\n");
            movimentoTorre(movimento - 1);
        }
    }
        void movimentoBispo(int movimento){
            if(movimento > 0){
                printf("Bispo\n");
            
            for (int i = 0 ; i < 1; i++){
                for(int j = 0 ; j < 1; j++ ){
                    printf("direita\n");
                    printf("cima\n");
                }
                movimentoBispo(movimento - 1);
            }
           }
        }
    
    void movimentoRainha(int movimento){
        if(movimento > 0){
            printf("Rainha\n");
            printf("Esquerda\n");
            movimentoRainha(movimento - 1);
        }
    }


int main(){
    //Váriaveis
    int torre = 5;
    int bispo = 5;
    int rainha= 8;
    //movimentando a torre
    movimentoTorre(torre);

    printf("\n");
    //movimentando o bispo
    movimentoBispo(bispo);
        printf("\n");
    //movimentando a Rainha
    movimentoRainha(rainha);
       //movimentando o cavalo
       printf("\n");//identando uma linha vazia
       int movimentacaoCavalo = 1;//valor inicial do cavalo

       while(movimentacaoCavalo--){
            for(int i = 0; i < 2;i++){
            printf("cima\n");//imprime "Cima 2 vezes"
            }
            printf("direita\n");
       }

    return 0;
}