# RPG Hydra
 Criar um RPG de turnos utilizando Python, C e Java.

 ## Idealizando o RPG
 Olá pessoal, tudo bem? Realizei esse projeto incialmente como uma atividade em Java da disciplina de Programação I. Então aproveitei que estou estudando as linguagens Python e C e fiz também.
 O objetivo do projeto é criar um jogo RPG que o personagem luta contra um dragão que seu ataque é rajada de vento com seguintes requisitos:
 - Você tem 50 pontos de vida;
- Você está lutando contra um dragão que tem 50 pontos de vida;
- Você deve ter três ataques disponíveis, cada um com uma força de 5, 10 e 15 pontos de vida;
- O dragão só tem um ataque, rajada de fogo, que tem uma força de 7 pontos de vida (Nos projetos eu mudei para o RPG ser mais equilibrado de jogar);
- Você tem uma defesa de 13 pontos, o dragão tem uma defesa de 10 pontos;
- A cada turno só é possível atacar se você passar a defesa do adversário (Mudei esse requisito pelo mesmo motivo apresentado anteriormente).

## Desenvolvento
Usarei Python para explicar o desenvolvimento pois não mudar muita coisa para Java ou C já que fazem o mesmo funcionamento, o que muda entre eles é a sua escrita como public void para Java e os include para C por exemplo. 
Etapas:
1. Importar biblioteca random para gerar números aleatório para a eficiência do ataque.
2. Declarar funções para exibir a história de abertura do RPG, para exibir um final que o personagem ganha, e para exibir quando o personagem perde.
3. Começa a execução do código, chamando a função "Historia" para exibir a abertura. Em seguida declaração de variáveis (todos do tipo int) de vida, de defesa (para recuperar pontos de vida), de limite de defesa do personagem; de vida, de ataque e de defesa do dragão.
4. Agora tudo ocorrerá dentro da estrutura while até a vida do personagem ou do dragão forem menor ou igual a zero. Em seguida eu declaro a variável de ataque do personagem que terá um número aleatório de 1 a 3, e declaro uma variável para o usuário escolher a arma de ataque do personagem, ou a defesa do turno de combate.
5. Temos 4 condições após a escolha das armas; a primeira é o usuário escolher a defesa e ele tiver limites de defesa, o personagem recupera a vida e começa outro turno; a segunda quando escolher a defesa mas não pode usar pois o limite já esgotou, exibe a mensagem para atacar e pula de turno; a terceira é quando o usuário escolhe uma arma de combate (essa parte será explicada); e a quarta quando o usuário digita um número diferente das armas ou da defesa, exibindo "opção inválida" e pula de turno.
6.  Explicando a terceira condição do tópico 5: terá mais estruturas de condição para a variável de ataque do personagem (aquela variável com número aleatório), quando o ataque for 1 esse ataque receberá um valor 5, quando for 2 receberá 10, e quando for 3 receberá 15.
7.  Ainda na terceira condição... após a variável de ataque receberá novo valor, há mais uma estrutura de condição, em que se o ataque for maior ou igual a 10, o dragão receberá dano (e tem mais uma estrutura de condição da arma escolhida) e de qual arma. Porém se o ataque for igual a 10 exibe a mensagem que o dragão levou o dano mas regenerou-se. E por fim, se o ataque for 5 o dragão que ataca, e termina a terceira condição. 
8.  Após disso, o programa verifica se a vida do personagem ou do dragão é menor ou igual a zero para exibir função de vitória ou de derrota, finalizando o programa. Se ambos estiverem com vida, vai ser exibido a vida de ambos, terminando o a estrutura while e o código.

## Conclusão
Termina a explicação do funcionamento do projeto de RPG do dragão. E daqui alguns dias postarei no Youtube a execução do programa.
Por favor, se estiver algo errado, ou faltando informações importante, ou uma dica para melhorar neste projeto eu peço que comenta para ser mais completo e de melhor qualidade possível. Obrigado pela leitura.
