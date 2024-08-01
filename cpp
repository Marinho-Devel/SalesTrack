#include <stdio.h>

int main()
{
    char alfabet[26];                                                   //DECLARAÇÃO DE VARIÁVEIS
    int entrada;
    
    printf("digite um número de 1 a 26\n");                               //APRESENTAÇÃO
    scanf("%d", &entrada);                                              //ENTRADA DE DADOS (DO VALOR DA LETRA EM NÚMERO INTEIRO)
    
    
    for (int i = 0; i < entrada; i++)                                 //ITERAÇÃO (loop externo) REPETE A ITERAÇÃO DO ÍNDICE
    {
        alfabet[0] = 'A' + i;
        printf("%c, ", alfabet[0]++);
    }
    
}