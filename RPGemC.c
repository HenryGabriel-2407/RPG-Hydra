#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void historia(){    //função que exibe a abertura do jogo
    printf("\nEm tempos antigos, nas terras geladas do norte, havia um jovem guerreiro chamado Apollo. \nDesde crianca, ele ouvira historias sobre um dragao Hydra que vivia nas profundezas de uma floresta sombria, onde tinha um tesouro ancestral e poderoso.");
    printf("Nome da floresta: Floresta das Sombras, um lugar sinistro onde pode está ensolarado mas sempre é escura. \nMuitos haviam tentado adentra-la em busca do tesouro ou da Hydra, mas nenhum deles jamais retornara. \nApollo estava determinado a descobrir a verdade por tras da lenda e, se possivel, reivindicar o tesouro para seu povo.");
    printf("Apollo se preparou para a jornada, levando... espada, besta e alabarda. \nEle adentrou na Floresta das Sombras, onde as arvores pareciam torcer-se e murmurar segredos obscuros, sombras dancavam e gritava para assusta-lo.");
    printf("Finalmente, Apollo chegou a uma clareira escura onde o tesouro deveria estar escondido. \nNo centro da clareira, viu uma enorme criatura - a Hydra. \nA besta tinha multiplas cabecas, cada uma delas com olhos ardentes de furia que causava medo, e seu corpo estava coberto por escamas negras.\n");
    printf("\nCHEGOU A BATALHA!\n");
}
void ganhou(){  //exibe quando a vida da Hydra for menor ou igual a 0
    printf("Apollo quebrou a Lenda... A Hydra teve seu fim...\nApollo retorna em casa com seu tesouro mais poderoso: UM FRANGO ASSADO!\n Fim do RPG\n");
}
void perdeu(){  //exibe quando a vida do Apollo for menor ou igual a 0
    printf("Hydra fala com uma voz fria e assustadora: \n     \"Fique parado, eu sou mais forte!\n     Mas pode evitar a morte... largue sua humanidade e se torne uma sombra\" \nHydra fez um ataque mortal que derrota o Apollo e o Apollo se torna uma sombra que vaga pela floresta...\nFim do RPG\n");
}
int main (){
    historia(); //função de abertura, e declaração de variáveis
    int vidaApollo = 50;
    int defesaApollo = 13;
    int ataqueApollo;
    int vidaHydra = 50;
    int defesaHydra = 10;
    int ataqueHydra = 10;
    int limiteDefesa = 5;
    int escolha;
    while (vidaApollo > 0 && vidaHydra > 0){
        //gerar números aleatório da eficiência do ataque
        srand(time(NULL));
        ataqueApollo= rand() % 3;
        switch (ataqueApollo){
            case 0:
                ataqueApollo = 5;
                break;
            case 1:
                ataqueApollo = 10;
                break;
            case 2:
                ataqueApollo = 15;
                break;
        }
        //opções de combate
        printf("=======================\n");
        printf("[1] - Espada\n[2] - Besta\n[3] - Alabarda \n[4] - Defesa\nEscolhe:");
        scanf("%d", &escolha);
        // verifica se a defesa ainda possui limite para poder aumentar pontos de vida
        if (escolha == 4 && limiteDefesa > 0){
            printf("Com a defesa, o Apollo ganha 13 pontos de vida. Mas pode usar %d vezes.\n", limiteDefesa);
            vidaApollo += defesaApollo;
            limiteDefesa--;
        }
        else if (escolha == 4 && limiteDefesa == 0){
            printf("Sem defesa, usa ataque!\n");
            continue;
        }
        //selecionada a arma, é verificado se o ataque é eficente e seu dano para a vida da Hydra
        else if (escolha >= 1 && escolha <= 3){
            if (ataqueApollo >= defesaHydra){
                vidaHydra -= ataqueApollo - defesaHydra;
                switch (escolha){
                    case 1:
                        printf("O Apollo atacou com a espada e feriu o corpo da Hydra!\n");
                        break;
                    case 2:
                        printf("O Apollo atacou com a besta e feriu o olho da Hydra!\n");
                        break;
                    case 3:
                        printf("O Apollo com a Alabarda e feriu a boca da Hydra!\n");
                        break;
                }
                if (ataqueApollo == defesaHydra) {
                    printf("Mas a Hydra se regenerou deste ataque.\n");
                }
            }
            else{
                printf("Sem sucesso no ataque...\n");
                printf("A Hydra ataca com rajada de fogo!\n");
                vidaApollo -= ataqueHydra;
            }   
        }
        else{
            printf("Opcao invalida.\n");
            continue;
        }
        if (vidaHydra <= 0) {
            ganhou();
            break;
        }
        if (vidaApollo <= 0) {
            perdeu();
            break;
        }
        //cada turno exibe a vida do Apollo e da Hydra
        printf("Vida do Apollo %d\n", vidaApollo);
        printf("Vida do Hydra %d\n",vidaHydra);
    }
    system("pause");
    return 0;
}