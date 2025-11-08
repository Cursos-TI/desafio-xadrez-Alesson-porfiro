#include <stdio.h>
// ======================== IMPLEMENTAÇÃO DAS FUNÇÕES ========================

// ---------------------------- TORRE ----------------------------
    void moverTorre(int casas, int atual){
       if(atual > casas){
            return;
       } 
       printf("Casa %d: Direita\n", atual);
       moverTorre(casas, atual +1);
    }

// ---------------------------- BISPO ----------------------------
    void moverBispo(int casas, int vertical, int horizontal){
        if(vertical > casas){
            return;
        }

        for(int v = vertical; v <= vertical; v++){
            for(int h = horizontal; h <= horizontal; h++){
                printf("Casa %d: Cima, Direita\n", v);
            }
        }

        moverBispo(casas, vertical +1, horizontal +1);
    }

// ---------------------------- RAINHA ----------------------------
    void moverRainha(int casas, int atual){
        if(atual > casas){
            return;
        }

        printf("Casa %d Esquerda\n", atual);

        moverRainha(casas, atual + 1);
    }

// ---------------------------- CAVALO ----------------------------
void moverCavalo(void) {
    const int movimentoVertical = 2;
    const int movimentoHorizontal = 1;

    int casa = 1;

    for (int i = 1; i <= movimentoVertical; i++) {
        // Movimento vertical
        printf("Casa %d: Cima\n", casa);
        casa++;

        // Condição especial: quando atingir o topo do "L"
        if (i == movimentoVertical) {
            for (int j = 1; j <= movimentoHorizontal; j++) {
                // Caso queira pular alguma condição (exemplo didático)
                if (j == 0) {
                    continue; // nunca ocorre, apenas exemplo
                }

                printf("Casa %d: Direita\n", casa);
                casa++;

                // Caso queira parar o loop antecipadamente (exemplo didático)
                if (casa > movimentoVertical + movimentoHorizontal) {
                    break;
                }
            }
        }
    }
}

int main(){

    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("=== Movimento da Torre (Recursividade) ===\n");
    moverTorre(casasTorre, 1);

    printf("\n=== Movimento do Bispo (Recursividade + Loops Aninhados) ===\n");
    moverBispo(casasBispo, 1, 1);

    printf("\n=== Movimento da Rainha (Recursividade) ===\n");
    moverRainha(casasRainha, 1);

    printf("\n=== Movimento do Cavalo (Loops Complexos) ===\n");
    moverCavalo();

    return 0;

}