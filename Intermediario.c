#include <stdio.h>

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

                int i = 0;

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
                    printf("\nERRO: Direcao invalida!");
                    printf("\nEscolha um numero entre 1 e 8: ");
                    scanf("%d", &direcao);
                }

                printf("\nLembre-se: o maximo de casas e 8.");
                printf("\nAgora Digite o numero de casas para se mover: ");
                scanf("%d", &mover);

                while (mover > 8){
                    printf("\nERRO: A rainha so pode se mover no maximo 8 casas!");
                    printf("\nDigite novamente: ");
                    scanf("%d", &mover);
                }

                do{

                    if(direcao == 1) printf("Cima\n");
                    if(direcao == 2) printf("Cima Esquerda\n");
                    if(direcao == 3) printf("Cima Direita\n");
                    if(direcao == 4) printf("Esquerda\n");
                    if(direcao == 5) printf("Direita\n");
                    if(direcao == 6) printf("Baixo Esquerda\n");
                    if(direcao == 7) printf("Baixo Direita\n");
                    if(direcao == 8) printf("Baixo\n");

                    i++;

                }while(i < mover);

            }

            if (escolhaPeca == 2){

                int i = 0;

                printf("\nO bispo so se move em diagonais.");

                printf("\n\n1 - Cima Esquerda");
                printf("\n2 - Cima Direita");
                printf("\n3 - Baixo Esquerda");
                printf("\n4 - Baixo Direita");

                printf("\n\nEscolha a direcao: ");
                scanf("%d", &direcao);

                while (direcao < 1 || direcao > 4){
                    printf("\nERRO: Direcao invalida!");
                    printf("\nEscolha um numero entre 1 e 4: ");
                    scanf("%d", &direcao);
                }

                printf("\nLembre-se: o maximo de casas e 8.");
                printf("\nDigite o numero de casas: ");
                scanf("%d", &mover);

                while (mover > 8){
                    printf("\nERRO: O bispo so pode se mover no maximo 8 casas!");
                    printf("\nDigite novamente: ");
                    scanf("%d", &mover);
                }

                while(i < mover){

                    if(direcao == 1) printf("Cima Esquerda\n");
                    if(direcao == 2) printf("Cima Direita\n");
                    if(direcao == 3) printf("Baixo Esquerda\n");
                    if(direcao == 4) printf("Baixo Direita\n");

                    i++;
                }

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
                    printf("\nERRO: Direcao invalida!");
                    printf("\nEscolha um numero entre 1 e 4: ");
                    scanf("%d", &direcao);
                }

                printf("\nLembre-se: o maximo de casas e 8.");
                printf("\nDigite o numero de casas: ");
                scanf("%d", &mover);

                while (mover > 8){
                    printf("\nERRO: A torre so pode se mover no maximo 8 casas!");
                    printf("\nDigite novamente: ");
                    scanf("%d", &mover);
                }

                for(int i = 0; i < mover; i++){

                    if(direcao == 1) printf("Cima\n");
                    if(direcao == 2) printf("Baixo\n");
                    if(direcao == 3) printf("Esquerda\n");
                    if(direcao == 4) printf("Direita\n");

                }

            }

            if (escolhaPeca == 4){

                int i = 0;

                printf("\nO cavalo se move apenas em L e infelizmente ele apenas poderá ter 1 movimentação por alguns erros tecnicos(seria muitooo codigo ter um pronpt para todos os movimentos)\n\n");

                for(int i = 0; i < 2; i++){
                    printf("Baixo\n");

                    int j = 0;
                    while(j < 1 && i == 1){
                        printf("Esquerda");
                        j++;
                    }
                }
                        
            }

        }

    }

    return 0;
}