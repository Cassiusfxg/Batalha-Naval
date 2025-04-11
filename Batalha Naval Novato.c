#include <stdio.h>

int main()
{
    int linha;//variável usada para acesso das linhas da matriz tabuleiro e array de numeração das linhas
    int coluna;
    
    int navio1[3]={3,3,3};//Array navio 1
    int navio2[3]={3,3,3};//Array navio 2
    
    int tabuleiro [10][10] ={ //matriz do tabuleiro
    
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}, 
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
    
    };
    
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
        
    }}

    return 0;
}
