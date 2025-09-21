#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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

 int linha = 1;
    int tabuleiro[10][10];    
    
    //Preenchimento inicial com 0

    for (int l=0;l<10;l++){//linhas
      for (int c=0;c<10;c++){//colunas               
          tabuleiro[l][c] = 0;// preenche a matriz com zero para cada [linha,coluna]
      }
    }
   
    // Posição horizontal do navio

    tabuleiro[0][0]=3;
    tabuleiro[0][1]=3;
    tabuleiro[0][2]=3;

    tabuleiro[1][3]=3;
    tabuleiro[1][4]=3;
    tabuleiro[1][5]=3;

    //Posição vertical do navio

    tabuleiro[5][8]=3;
    tabuleiro[6][8]=3;
    tabuleiro[7][8]=3;

    tabuleiro[2][7]=3;
    tabuleiro[3][7]=3;
    tabuleiro[4][7]=3;


    // Imprime a matriz na formatação desejada

    printf("   A B C D E F G H I J\n");// imprime as colunas
       
    for (int l=0;l<10;l++){//linhas   
         
        if (l<9){//imprime o índice das linhas do tabuleiro
           printf(" %d ",linha);}//formatação
           else{printf("%d ",linha);}//formatação

        for (int c=0;c<10;c++){//colunas               
          printf("%d ",tabuleiro[l][c]);// imprime a matriz 
             
        } 
        printf("\n");  
        linha++; // atualiza a identificação da linha
        
      }  



    return 0;
}
