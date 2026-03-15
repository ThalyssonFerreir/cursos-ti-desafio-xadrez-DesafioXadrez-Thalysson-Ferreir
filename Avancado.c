#include <stdio.h>

void rainha(int direcao, int mover){

    if(mover == 0){
        return;
    }

    if(direcao == 1) printf("Cima\n");
    if(direcao == 2) printf("Cima Esquerda\n");
    if(direcao == 3) printf("Cima Direita\n");
    if(direcao == 4) printf("Esquerda\n");
    if(direcao == 5) printf("Direita\n");
    if(direcao == 6) printf("Baixo Esquerda\n");
    if(direcao == 7) printf("Baixo Direita\n");
    if(direcao == 8) printf("Baixo\n");

    rainha(direcao, mover - 1);
}

void moverTorreRec(int direcao, int mover){

    if(mover == 0){
        return;
    }

    if(direcao == 1) printf("Cima\n");
    if(direcao == 2) printf("Baixo\n");
    if(direcao == 3) printf("Esquerda\n");
    if(direcao == 4) printf("Direita\n");

    moverTorreRec(direcao, mover - 1);
}

void moverBispoRec(int direcao, int mover){

    if(mover == 0){
        return;
    }

    for(int v = 0; v < 1; v++){

        for(int h = 0; h < 1; h++){

            if(direcao == 1){
                printf("Cima\n");
                printf("Esquerda\n");
            }

            if(direcao == 2){
                printf("Cima\n");
                printf("Direita\n");
            }

            if(direcao == 3){
                printf("Baixo\n");
                printf("Esquerda\n");
            }

            if(direcao == 4){
                printf("Baixo\n");
                printf("Direita\n");
            }

        }

    }

    moverBispoRec(direcao, mover -1);
}

int main(){

    int escolhaOpcao;

    printf("\n\nOla usuario, bem vido ao jogo de xadrez, voce vai fazer a simulacao de alguns movimentos de algumas pecas de xadrez.");
    printf("\n1 - Participar\n2 - Meter o pe");

    printf("\n\nDigite: ");
    scanf("%d", &escolhaOpcao);

    if (escolhaOpcao == 2){
        printf("Beleeeeeeeeza, vou lembrar viu, quando eu ficar rico quero nem saber");
        return 0;
    }

    if (escolhaOpcao == 1){

        printf("\nAeeeee boa escolha, vamos la entao");

        printf("\n\nVoce podera usar apenas 3 pecas: Torre, bispo ou a rainha.");
        printf("\nVoce podera escolher qualquer uma dessas pecas pra poder testar.");
        printf("\nNao se preocupe, voce ira poder testar todas as pecas.");
        printf("\nO tabuleiro e 8x8, entao nenhuma peca pode andar mais que 8 casas.");

        int mover;
        int direcao;
        int escolhaPeca;

        while (1){

            printf("\n\nEscolha a sua peca");
            printf("\n\n1 - Rainha\n2 - Bispo\n3 - Torre\n4 - Cavalo\n5 - Sair");

            printf("\n\nDigite: ");
            scanf("%d", &escolhaPeca);

            if (escolhaPeca == 5){
                printf("\nSaindo do simulador de xadrez...");
                break;
            }

            if (escolhaPeca == 1){

                printf("\nA rainha consegue se mover em todas as direcoes.");

                printf("\n\n1 - Cima");
                printf("\n2 - Cima Esquerda");
                printf("\n3 - Cima Direita");
                printf("\n4 - Esquerda");
                printf("\n5 - Direita");
                printf("\n6 - Baixo Esquerda");
                printf("\n7 - Baixo Direita");
                printf("\n8 - Baixo");

                printf("\n\nEscolha a direcao: ");
                scanf("%d", &direcao);

                while (direcao < 1 || direcao > 8){
                    printf("\nERRO: Direcao invalida. Digite novamente: ");
                    printf("\nEscolha um numero entre 1 e 8: ");
                    scanf("%d", &direcao);
                }

                printf("\nDigite o numero de casas: ");
                scanf("%d", &mover);

                while (mover > 8){
                    printf("\nERRO: Maximo 8 casas!");
                    scanf("%d", &mover);
                }

                rainha(direcao, mover);
            }

            if (escolhaPeca == 2){

                printf("\nO bispo so se move em diagonais.");

                printf("\n\n1 - Cima Esquerda");
                printf("\n2 - Cima Direita");
                printf("\n3 - Baixo Esquerda");
                printf("\n4 - Baixo Direita");

                printf("\n\nEscolha a direcao: ");
                scanf("%d", &direcao);

                while (direcao < 1 || direcao > 4){
                    printf("\nERRO: Direcao invalida. Digite novamente: ");
                    scanf("%d", &direcao);
                }

                printf("\nDigite o numero de casas: ");
                scanf("%d", &mover);

                while (mover > 8){
                    printf("\nERRO: Maximo 8 casas!");
                    scanf("%d", &mover);
                }

                moverBispoRec(direcao, mover);
            }

            if (escolhaPeca == 3){

                printf("\nA torre se move apenas em linhas retas.");

                printf("\n\n1 - Cima");
                printf("\n2 - Baixo");
                printf("\n3 - Esquerda");
                printf("\n4 - Direita");

                printf("\n\nEscolha a direcao: ");
                scanf("%d", &direcao);

                while (direcao < 1 || direcao > 4){
                    printf("\nERRO: Direcao invalida. Digite novamente: ");
                    scanf("%d", &direcao);
                }

                printf("\nDigite o numero de casas: ");
                scanf("%d", &mover);

                while (mover > 8){
                    printf("\nERRO: Maximo 8 casas!");
                    scanf("%d", &mover);
                }

                moverTorreRec(direcao, mover);
            }

            if (escolhaPeca == 4){

                printf("\nO cavalo se move em L (2 para cima e 1 para direita).\n\n");

                for(int i = 0; i < 2; i++){
                    printf("Cima\n");

                    for(int j = 0; j < 1; j++){

                        if(i == 0){
                            continue;
                        }

                        printf("Direita\n");
                    }
                }

            }

        }

    }

    return 0;
}