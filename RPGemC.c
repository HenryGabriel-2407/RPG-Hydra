#include <stdio.h>
#include <stdlib.h>
void historia(){
    printf("\nEm tempos antigos, nas terras geladas do norte, havia um jovem guerreiro chamado Apollo. \nDesde criança, ele ouvira histórias sobre um dragão Hydra que vivia nas profundezas de uma floresta sombria, onde tinha um tesouro ancestral e poderoso.");
    printf("Nome da floresta é Floresta das Sombras, um lugar sinistro onde pode está ensolarado mas sempre é escura. \nMuitos haviam tentado adentrá-la em busca do tesouro ou da Hydra, mas nenhum deles jamais retornara. \nApollo estava determinado a descobrir a verdade por trás da lenda e, se possível, reivindicar o tesouro para seu povo.");
    printf("Apollo se preparou para a jornada, levando... espada, besta e alabarda. \nEle adentrou na Floresta das Sombras, onde as árvores pareciam torcer-se e murmurar segredos obscuros, sombras dançavam e gritava para assustá-lo.");
    printf("Finalmente, Apollo chegou a uma clareira escura onde o tesouro deveria estar escondido. \nNo centro da clareira, viu uma enorme criatura - a Hydra. \nA besta tinha múltiplas cabeças, cada uma delas com olhos ardentes de fúria que causava medo, e seu corpo estava coberto por escamas negras.\n");
    printf("\nCHEGOU A BATALHA!\n");
}

void main(){
    historia();
    int vidaApollo = 50;
    int defesaApollo = 13;
    int ataqueApollo;
    int vidaHydra = 50;
    int defesaHydra = 10;
    int ataqueHydra = 10;
    int limiteDefesa = 0;
    while (vidaApollo > 0 && vidaHydra > 0)
    {
        
        printf("Vida do Apollo %d\n", vidaApollo);
        printf("Defesa do Hydra %d\n",defesaHydra);
    }
    
    system("pause");
}