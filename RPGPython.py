import random   #importar biblioteca random para os ataques terem uma probabilidade de acerto 
def Historia(): #função de abertura do jogo
    print("Em tempos antigos, nas terras geladas do norte, havia um jovem guerreiro chamado Apollo. \nDesde criança, ele ouvira histórias sobre um dragão Hydra que vivia nas profundezas de uma floresta sombria, onde tinha um tesouro ancestral e poderoso.")
    print("Nome da floresta é Floresta das Sombras, um lugar sinistro onde pode está ensolarado mas sempre é escura. \nMuitos haviam tentado adentrá-la em busca do tesouro ou da Hydra, mas nenhum deles jamais retornara. \nApollo estava determinado a descobrir a verdade por trás da lenda e, se possível, reivindicar o tesouro para seu povo.")
    print("Apollo se preparou para a jornada, levando... espada, besta e alabarda. \nEle adentrou na Floresta das Sombras, onde as árvores pareciam torcer-se e murmurar segredos obscuros, sombras dançavam e gritava para assustá-lo.")
    print("Finalmente, Apollo chegou a uma clareira escura onde o tesouro deveria estar escondido. \nNo centro da clareira, viu uma enorme criatura - a Hydra. \nA besta tinha múltiplas cabeças, cada uma delas com olhos ardentes de fúria que causava medo, e seu corpo estava coberto por escamas negras.\n")
    print("\nCHEGOU A BATALHA!\n")

def Ganhou():   #aparece se a Vida da Hydra for menor ou igual a 0
    print("Apollo quebrou a Lenda... A Hydra teve seu fim...\nApollo retorna em casa com seu tesouro mais poderoso: UM FRANGO ASSADO!\n Fim do RPG")

def Perdeu():   #aparece se a Vida do Apollo for menor ou igaul a 0
    print("Hydra fala com uma voz fria e assustadora: \n     \"Fique parado, eu sou mais forte!\n     Mas pode evitar a morte... largue sua humanidade e se torne uma sombra\" \nHydra fez um ataque mortal que derrota o Apollo e o Apollo se torna uma sombra que vaga pela floresta...\nFim do RPG")

Historia()
#declarar as variáveis
VidaApollo = 50
DefesaApollo = 13
LimiteDefesa = 5
VidaHydra = 50
AtaqueHydra = 10
DefesaHydra = 10
while(True):
    AtaqueApollo = random.randint(1, 3) #é declarada dentro do while para gerar um número aleatório cada turno
    print("=" * 30)
    escolha = int(input("[1] - Espada\n[2] - Besta\n[3] - Alabarda\n[4] - Defesa\nEscolhe:"))
    if(escolha == 4 and LimiteDefesa > 0):
        VidaApollo += DefesaApollo
        LimiteDefesa -= 1
        print(f"Com a defesa, Apollo ganha mais 13 pontos de vida mais pode usar apenas {LimiteDefesa} vezes")
        continue
    if(escolha == 4 and LimiteDefesa == 0):
        print("Não tem mais defesa, ataca!")
        continue

    elif(escolha >= 1 and escolha <= 3):
        if(AtaqueApollo == 1):      
            AtaqueApollo = 5
        elif(AtaqueApollo == 2):    
            AtaqueApollo = 10
        elif(AtaqueApollo == 3):    
            AtaqueApollo = 15
        #Quando o Ataque for maior do que a Defesa a Hydra perde pontos de vida, se for igual nada há o ataque do Apollo mas nada muda, e se for menor a Hydra ataca e Apollo perde pontos de vida
        if(AtaqueApollo >= DefesaHydra):
            VidaHydra -= AtaqueApollo - DefesaHydra
            if(escolha == 1):   
                print("O Apollo atacou com a espada e feriu o corpo da Hydra!")
            elif(escolha == 2): 
                print("O Apollo atacou com a besta e feriu o olho da Hydra!")
            elif(escolha == 3): 
                print("O Apollo com a Alabarda e feriu a boca da Hydra!")
            if(AtaqueApollo == DefesaHydra):
                print("Mas a Hydra se regenerou deste ataque")
        else: 
            print("Sem sucesso no ataque...\nA Hydra ataca com rajada de fogo!")
            VidaApollo -= AtaqueHydra

    else:
        print("Opção inválida, tente novamente.")
        continue;
    #chama as funções de vitória ou de derrota
    if(VidaApollo <= 0):
        Perdeu()
        break
    if(VidaHydra <= 0):
        Ganhou()
        break
    #cada turno sempre exibe a vida do Apollo e da Hydra
    print(f"Vida do Apollo: {VidaApollo}")
    print(f"Vida da Hydra: {VidaHydra}")