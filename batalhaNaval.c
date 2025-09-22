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


    /*
    [Curso Ciência da Computação]

    Aluno: Daniel Rocha Júnior
    Turma: 9001
    Matrícula: 202508049686
    
    */
   int linha = 1;
    int tabuleiro[10][10];    
    
    // Imprime a matriz na formatação desejada

    printf("   A B C D E F G H I J\n");// imprime a identificação das colunas no tabuleiro
       
    for (int l=0;l<10;l++){//linhas   
         
        if (l<9){//imprime o índice das linhas do tabuleiro
           printf(" %d ",linha);}//formatação
           else{printf("%d ",linha);}//formatação

        for (int c=0;c<10;c++){//preenche as colunas para cada linha definida no for anterior   
          tabuleiro[l][c] = 0;// preenchimento inicial da matriz com zero para cada índice [linha,coluna]  
        

         // Posição horizontal do navio 1
        for (int h=7;h<10;h++){
          tabuleiro[0][h]=1;}      

         //Posição vertical do navio 2
        for (int v=7;v<10;v++){
          tabuleiro[v][9]=2;}        

        //Posição diagonal do navio 3 - descendo
        for (int dl=6,dc=6;dl<9;dl++,dc++){
          tabuleiro[dl][dc]=3;} 

        //Posição diagonal do navio 4 - subindo
        for (int dl=9,dc=0;dc<3;dl--,dc++){
          tabuleiro[dl][dc]=4;}


        // ===========================================================================================
        //Ataque das habilidades

        int ctrl = 3;
        while (ctrl>=0){// abre o while do controle

        if (ctrl==3){
          for (int l=2, c=4;c>=0;c--){//base do cone
             tabuleiro[l][c]=5;}    
              
          for (int l=5, c=1;c==1;c--){//base do octaedro
             tabuleiro[l][c]=6;} 
             
          for (int l=4, c=7;c==7;c--){// base da cruz
             tabuleiro[l][c]=7;}         
            }ctrl--;

        if (ctrl==2){//intermediária
          for (int l=1, c=3;c>=1;c--){//intermediária do cone
             tabuleiro[l][c]=5;}

          for (int l=4, c=2;c>=0;c--){//intermediária do octaedro
             tabuleiro[l][c]=6;}
             
          for (int l=3, c=9;c>=5;c--){//intermediária da cruz
             tabuleiro[l][c]=7;}
          }ctrl--;

         if (ctrl==1){
          for (int l=0, c=2;c==2;c--){//topo do cone
             tabuleiro[l][c]=5;}

          for (int l=3, c=1;c==1;c--){//topo do octaedro
             tabuleiro[l][c]=6;}

          for (int l=2, c=7;c==7;c--){// topo da cruz
             tabuleiro[l][c]=7;}

            }ctrl--;   

        }// fecha while para o controle        
                  
       

        printf("%d ",tabuleiro[l][c]);// imprime a matriz 
             
        } printf("\n");// linha seguinte
        linha++; // atualiza a identificação da linha

      }//fecha o primeiro for

      




    return 0;
}
