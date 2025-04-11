#include <stdio.h>

int main()
{
    int linha;//variável usada para acesso das linhas da matriz tabuleiro e array de numeração das linhas
    int coluna;
    
    int navio1[3]={3,3,3};//Array navio 1
    int navio2[3]={3,3,3};//Array navio 2
    
    int tabuleiro [10][10]; //cria a matriz do tabuleiro
    
    
    for(int L1 = 0;L1<=9;L1++){ // O loop alinhado com for preenche a matriz com 0.Variáveis L1 e C1 somente em for.
        for(int C1 = 0;C1<=9;C1++){
            tabuleiro[L1][C1]=0;
        }
    }
    
       printf("BATALHA NAVAL\n\n");//enunciado do Jogo
    
    char *cabecalho[10]={"A","B","C","D","E","F","G","H","I","J"};//Array do cabeçalho 
       printf("   ");
    for(int indice=0;indice<=9;indice++){//loop para imprimir cabeçalho
       printf("%s",cabecalho[indice]);
    }
    
    char *vertical[10]={" 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"};//Array da numeração das linhas
    
    for(linha=0;linha<=9;linha++){//loop para imprimir linha da matriz tabuleiro
       printf("\n");
       printf("%s ",vertical[linha]);//imprime a numeração das linhas da matriz tabuleiro
   
    for(coluna=0;coluna<=9;coluna++){//loop para imprimir todas as colunas de uma linha
           printf("%d",tabuleiro[linha][coluna]);//imprime linha e colunas da mesma linha da matriz tabuleiro
      
        /*posicionamento do navio 1*/
        tabuleiro[4][3]=navio1[0];
        tabuleiro[4][4]=navio1[1];
        tabuleiro[4][5]=navio1[2];
        
        /*posicionamento do navio 2*/
        tabuleiro[3][9]=navio2[0];
        tabuleiro[4][9]=navio2[1];
        tabuleiro[5][9]=navio2[2];
        
        //posicionamento do navio 3 diagonal principal
        for(int N3L=6;N3L<=8;N3L++){
            for(int N3C=0;N3C<=9;N3C++){
            if(N3L==N3C){tabuleiro[N3L][N3C]=3;}   
        }}
        
        //posicionamento do navio 4 diagonal secundária
        for(int N4L=0;N4L<=2;N4L++){
            for(int N4C=0;N4C<=9;N4C++){
            if(N4L+N4C==9){tabuleiro[N4L][N4C]=3;}   
        }}
        
        //tabuleiro[9][9]=3; //para teste
    }}
    return 0;
