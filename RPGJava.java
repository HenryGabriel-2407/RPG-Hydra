import java.util.*; 
//importar usar funcões com Random e Scanner 
public  class RPGJava{
    public static void main(String[] args) {
        //Declaracão de Variáveis 
        int vidaApollo = 50;
        int defesaApollo = 13;
        int ataqueApollo;
        int vidaHydra = 50;
        int defesaHydra = 10;
        int ataqueHydra = 10;
        int limiteDefesa = 0;
        //Criar uma funcao Random e Scanner e exibir a funcao historia 
        Random pato = new Random();
        Scanner ler = new Scanner(System.in);
        historia();
        while (vidaApollo > 0 && vidaHydra > 0) {
            System.out.println("-------------------------");
            System.out.print("[1] - Espada\n[2] - Besta\n[3] - Alabarda \n[4] - Defesa\nEscolhe:");
            int escolha = ler.nextInt();
            ataqueApollo = pato.nextInt(3);
            System.out.println(ataqueApollo);
            if (escolha == 4 && limiteDefesa <= 5) {
                vidaApollo += defesaApollo;
                System.out.println("Com a defesa, o Apollo ganha 13 pontos de vida. Mas pode usar 5 vezes.");
                limiteDefesa++;
                continue;
            }
            if (escolha == 4 && limiteDefesa > 5) {
                System.out.println("Está sem defesa, usa ataque!");
                continue;
            }
            if(escolha >= 1 && escolha <= 3){
                switch (ataqueApollo) {
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
                if (ataqueApollo >= defesaHydra) {
                vidaHydra -= (ataqueApollo - defesaHydra);
                switch (escolha){
                    case 1:
                        System.out.println("O Apollo atacou com a espada e feriu o corpo da Hydra!");
                        break;
                    case 2:
                        System.out.println("O Apollo atacou com a besta e feriu o olho da Hydra!");
                        break;
                    case 3:
                        System.out.println("O Apollo com a Alabarda e feriu a boca da Hydra!");
                    }
                    if (ataqueApollo == defesaHydra) {
                        System.out.println("Mas a Hydra se regenerou deste ataque.");
                    }
                }
                else{
                    System.out.println("Sem sucesso no ataque...");
                    System.out.println("A Hydra ataca com rajada de fogo!");
                    vidaApollo -= ataqueHydra;
                }
            }
            else{
                System.out.println("Opção inválida! Tente novamente.");
            }
            if (vidaHydra <= 0) {
                System.out.println("Apollo quebrou a Lenda... A Hydra teve seu fim...\nApollo retorna em casa com seu tesouro mais poderoso: UM FRANGO ASSADO!\n Fim do RPG");
                break;
            }
            if (vidaApollo <= 0) {
                System.out.println("Hydra fala com uma voz fria e assustadora: \n     \"Fique parado, eu sou mais forte!\n     Mas pode evitar a morte... largue sua humanidade e se torne uma sombra\" \nHydra fez um ataque mortal que derrota o Apollo e o Apollo se torna uma sombra que vaga pela floresta...\nFim do RPG");
                break;
            }
            System.out.println("Vida do Apollo: " + vidaApollo);
            System.out.println("Vida da Hydra:" + vidaHydra);
        }
    }
    public static void historia(){  //exibe a abertura do jogo
        System.out.println("Em tempos antigos, nas terras geladas do norte, havia um jovem guerreiro chamado Apollo. \nDesde criança, ele ouvira histórias sobre um dragão Hydra que vivia nas profundezas de uma floresta sombria, onde tinha um tesouro ancestral e poderoso.");
        System.out.println("\nNome da floresta é Floresta das Sombras, um lugar sinistro onde pode está ensolarado mas sempre é escura. \nMuitos haviam tentado adentrá-la em busca do tesouro ou da Hydra, mas nenhum deles jamais retornara. \nApollo estava determinado a descobrir a verdade por trás da lenda e, se possível, reivindicar o tesouro para seu povo.");
        System.out.println("\nApollo se preparou para a jornada, levando... espada, besta e alabarda. \nEle adentrou na Floresta das Sombras, onde as árvores pareciam torcer-se e murmurar segredos obscuros, sombras dançavam e gritava para assustá-lo.");
        System.out.println("\nFinalmente, Apollo chegou a uma clareira escura onde o tesouro deveria estar escondido. \nNo centro da clareira, viu uma enorme criatura - a Hydra. \nA besta tinha múltiplas cabeças, cada uma delas com olhos ardentes de fúria que causava medo, e seu corpo estava coberto por escamas negras.\n");
        System.out.println("\nCHEGOU A BATALHA!\n");
    }
}
