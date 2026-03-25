#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char p1='1', p2='2', p3='3', p4='4', p5='5', p6='6', p7='7', p8='8', p9='9';

    char jogador = 'X';
    int jogadas = 0;
    int ganhou = 0;
    int escolha;

    while (jogadas < 9 && ganhou == 0) {
        system("cls"); 

        
        printf("\n JOGO DA VELHA \n\n");
        printf(" %c | %c | %c \n", p1, p2, p3);
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", p4, p5, p6);
        printf("---|---|---\n");
        printf(" %c | %c | %c \n\n", p7, p8, p9);

        printf("Jogador %c, escolha uma posicao: ", jogador);
        scanf("%d", &escolha);

        
        int valida = 0;

        if (escolha == 1 && p1 == '1') { p1 = jogador; valida = 1; }
        else if (escolha == 2 && p2 == '2') { p2 = jogador; valida = 1; }
        else if (escolha == 3 && p3 == '3') { p3 = jogador; valida = 1; }
        else if (escolha == 4 && p4 == '4') { p4 = jogador; valida = 1; }
        else if (escolha == 5 && p5 == '5') { p5 = jogador; valida = 1; }
        else if (escolha == 6 && p6 == '6') { p6 = jogador; valida = 1; }
        else if (escolha == 7 && p7 == '7') { p7 = jogador; valida = 1; }
        else if (escolha == 8 && p8 == '8') { p8 = jogador; valida = 1; }
        else if (escolha == 9 && p9 == '9') { p9 = jogador; valida = 1; }
        else {
            printf("\nPosicao invalida ou ocupada! Aperte Enter...");
            getchar(); getchar();
            continue;
        }

        jogadas++;

        
        if (
            (p1==jogador && p2==jogador && p3==jogador) ||
            (p4==jogador && p5==jogador && p6==jogador) ||
            (p7==jogador && p8==jogador && p9==jogador) ||
            (p1==jogador && p4==jogador && p7==jogador) ||
            (p2==jogador && p5==jogador && p8==jogador) ||
            (p3==jogador && p6==jogador && p9==jogador) ||
            (p1==jogador && p5==jogador && p9==jogador) ||
            (p3==jogador && p5==jogador && p7==jogador)
        ) {
            ganhou = 1;
        } else {
            // troca jogador
            jogador = (jogador == 'X') ? 'O' : 'X';
        }
    }

    system("cls");

    
    printf("\n JOGO DA VELHA \n\n");
    printf(" %c | %c | %c \n", p1, p2, p3);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", p4, p5, p6);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n\n", p7, p8, p9);

    if (ganhou)
        printf("Jogador %c venceu!\n", jogador);
    else
        printf("Empate!\n");

    return 0;
}