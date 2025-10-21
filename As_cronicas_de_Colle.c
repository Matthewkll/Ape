#include <stdio.h>
#include <string.h>
#include <stdlib.h> // para função rand()



int main(){
    int pv = 20, pvGrupo = 70, pvGrupo2 = 40;
    int lugar, decAA, decEsc, decCri;
    int decB, decBA, decBB, decBD, decC;
    int pedra;
    int pvMonstro = 15, pvDragao = 44, pvNythal = 60;
    char jogador [30];
    

    printf("********************************************************************************\n");
    printf("****** Bem vindo As cronicas de um viajante: entre a espada e a desilusao ******\n");
    printf("********************************************************************************\n\n");    

    printf("Digite o nome do seu personagem: ");
    fgets(jogador, sizeof(jogador), stdin);

    jogador[strcspn(jogador, "\n")] = 0; // Remover o caractere de nova linha

    printf("\nINFOS\n");
    printf("Ola, %s! Voce comeca com %d pontos de vida.\n\n", jogador, pv);

    // Inicio da história

    printf("Sob o sol escaldante, %s estava treinando com seu graveto. Sempre o fazia depois de ajudar seus pais com as tarefas da fazenda. Eles eram camponeses, mas o seu sonho era ser aventureiro.\n", jogador);
    printf("Em uma fatidica noite, uma chuva forte assolou o campo. Em meio a floresta, um raio acertou uma arvore que estava perto de %s o arremessando para longe. Um enorme brilho e calor foi presenciado.\n", jogador);
    printf("Grande parte da arvore fora vaporizada, onde apenas um tronco com quatro joias reluzentes sobrara. %s se aproximou e pode ver de perto que tipo de pedras eram. Uma verde, preta, vermelha com pontos brancos. %s sentia grande magia vindo delas. E que apenas uma poderia pegar.\n", jogador, jogador);


	printf(" 1 - Pedra Verde\n");
    printf(" 2 - Pedra Preta\n");
    printf(" 3 - Pedra Vermelha\n");
    
    printf ("\nQual pedra %s escolhe?\n\n", jogador);
    scanf ("%d", &pedra);

    //escolha da pedra
    switch (pedra)
    {
    case 1:
        printf("Voce escolhou a Pedra Verde.\n");
        break;
    case 2:
        printf("Voce escolhou a Pedra Preta.\n");
        break;
    case 3: 
        printf("Voce escolhou a Pedra Vermelha.\n");
        break;
    }
    
    // ***********************************************
    // * ROTA A: PEDRA VERDE
    // ***********************************************

    if (pedra == 1){

        printf("Quando %s toca na pedra verde, uma enorme energia começa a emanar de dentro dela. Um raio de dentro da pedra atinge os céus, dissipando toda a tempestade. A pedra havia se transformado em uma espada de prata, com a joia verde no meio do cabo. %s podia sentir o poder emanando da espada. Sentiu que com essa espada poderia realizar seu sonho de ser tornar um grande aventureiro.\n", jogador, jogador);

        printf(" 1 - Para a Capital.\n");
        printf(" 2 - Para o Bosque Sombrio\n");
        printf(" 3 - Para a Caverna da Solidao\n");
        printf(" 4 - Para as Montanhas de algodao doce\n");

        printf("Para onde %s deveria ir?\n", jogador);
        scanf ("%d", &lugar);
        
	        switch (lugar)
	        {
	        case 1:
	            printf(" Voce escolhou ir para a capital.\n ");
	            break;
	        case 2:
	            printf(" Voce escolhou ir para o Bosque Sombrio.\n ");
	            break;
	        case 3: 
	            printf(" Voce escolhou ir para a Caverna da Solidao.\n ");
	            break;
	        default:
	            printf(" Voce escolhou ir para as Montanhas de algodao doce.\n ");
	            break;
	        }

	}
	
    // rota A.A
        if (lugar == 1)
        {
            printf(" %s decide ir para a capital. Onde podera mostrar seus talentos para os mestres de guildas e comecar sua historia. Ao entrar na taberna de guildas %s ve uma garota de cabelos loiros atendendo os aventureiros e anotando seus nomes, \n", jogador, jogador);

            printf(" 1 - Pede para a garota o colocar em uma guilda.\n");
            printf(" 2 - Flerta com a garota.\n");
            printf(" 3 - Pede uma cerveja\n");

            printf("\nO que %s faz? ", jogador);
            scanf ("%d", &decAA);

            switch (decAA)
            {
            case 1:
                printf(" Voce escolheu pedir para a garota o colocar em uma guilda.\n\n");
                break;
            case 2:
                printf(" Voce escolheu flertar com a garota.\n\n");
                break;
            default:
                printf(" Voce escolheu pedir uma cerveja.\n\n");
                break;
            }
    	}
            
            //rota A.A.A
            
            if (decAA == 1){

                printf(" Ao pedir para ela o inscrever em uma guilda. A garota observa por completo, desde o topo da cabeça ate a sola dos pes. \n");
                printf(" Claire: Me chamo Claire. Estarei te guiando para a aventura que mais se enquadra em seus requisitos.\n");
                
                printf(" 1 - UM DRAGAO!\n");
                printf(" 2 - Grandes criaturas, como trolls e Ogros.\n");
                printf(" 3 - Quero lutar com criatura medianas, como Orcs e Goblins.\n");
                printf(" 4 - Nao quero me arriscar, quero matar alguns slimes apenas.\n");
                
                printf(" Claire: Me diga o que gostaria de enfrentar?\n");
                scanf ("%d", &decCri);

                switch (decCri)
                {
                case 1:
                    printf(" Voce escolhou enfrentar um dragao.\n\n");
                    break;
                case 2:
                    printf(" Voce escolhou enfrentar grandes criaturas, como trolls e ogros.\n\n");
                    break;
                case 3:
                    printf(" Voce escolhou enfrentar criaturas medianas, como orcs e goblins.\n\n");
                    break; 
                default:
                    printf(" Voce escolhou enfrentar slimes.\n\n");
                    break;
                }
                
                //rota A.A.A.A
                    if (decCri == 1)
                    {
                        printf(" Claire: UM DRAGAO!? ESTA LOUCO?");

                        printf(" %s mostra que tem um olhar serio e que está disposto para  desafio. Claire o observa e aceita sua proposta.\n", jogador);

                        printf(" Claire: Sim, provavelmente esta louco. Mas se e o que deseja tudo bem.\n");

                        printf(" Claire mostra um mapa para %s.\n", jogador);

                        printf(" Claire: Estas sao as coordenas do ultimo dragao visto. O dragao de Magma que assola as montanhas do norte. Se conseguir reunir uma equipe de grandes guerreiros, talvez tenham uma chance.\n" );

                        printf(" 1 - Vai sozinho\n");
                        printf(" 2 - Se junta a uma guilda.\n");
                        printf(" 3 -  Pede para Claire ir com ele\n");
                        
                        printf(" O que %s faz?\n", jogador);
                        scanf ("%d", &decEsc);

                        switch (decEsc){
                        case 1:
                            printf(" Voce escolhou ir sozinho.\n ");
                            break;
                        case 2:
                            printf(" Voce escolhou se juntar a uma guilda.\n ");
                            break;
                        default:
                            printf(" Voce escolhou pedir para Claire ir com voce.\n ");
                            break;
                    	}
                	}
                
                    //rota A.A.A.A Esc 1
                        if (decEsc == 1)
                        {
                            printf(" Depois de uma viagem longa pelas montanhas nevoentas do norte. %s chega na toca do dragao. Sua espada toma um brilho forte e chama a atencao do dragao. O dragao no seu ninho de pedras negras acorda e vai na direcao de %s. \nA batalha entao se inicia.\n\n", jogador, jogador);
	                        // batalha contra o dragão
	                        for (int i = 0; i < 20; i++){
	                            printf(" %s ataca o dragao com sua espada. \n", jogador);
	                            pvDragao -= rand() % 12;
	                            printf(" O dragao ataca %s com seu bafo de fogo. \n", jogador);
	                            pv -= rand() % 5;
	                            if (pvDragao <= 0)
	                            {
	                                printf(" \n%s vence o dragao lendario! Se torna o heroi do reino e consegue alcancar seu tao almejado sonho.\n", jogador);
	
	                                printf("----------------------------GAME OVER--------------------------------\n");
	                                break;
	                            } else if (pv <= 0)
	                            {
	                                printf(" \nOs bracos e pernas de %s sucumbem. Ele aceita por fim sua derrota que sela seu destino. As chamas cercaram o corpo de %s tirando a sua vida.\n", jogador, jogador);
	                                
	                                printf("----------------------------GAME OVER--------------------------------\n");
	                                break;
	                            }
	                        }
						}

                        
                    
                    //rota A.A.A.A Esc 2
                        if (decEsc == 2)
                        {
                            printf(" Claire: Muito bem! Temos um grupo chamado Os Lobos Prateados que estao indo em direcao a toca do dragao. Vou te colocar junto deles. Va ate essas coordenadas com esse contrato. Tenho certeza de que qualquer ajuda sera bem-vinda.\n");
                            printf(" %s avanca ate a localizacao e alcança o grupo. O lider parece nao se importa com sua presenca. Voces correm a cavalo durante 2 dias e depois de uma viagem longa pelas montanhas nevoentas do norte. %s chega na toca do dragao. Sua espada toma um brilho forte e chama a atenção do dragao. O dragao no seu ninho de pedras negras acorda e vai na direcao de voces. A batalha entao se inicia.\n", jogador, jogador);

                            //batalha ccontra o dragão em grupo
                            for (int i = 0; i < 20; i++){
                                printf(" O grupo de %s ataca o dragao. \n", jogador);
                                pvDragao -= rand() % 7;
                                printf(" O dragao ataca o grupo de %s com seu bafo de fogo. \n", jogador);
                                pvGrupo -= rand() % 20;

                                if (pvDragao <= 0)
                                {
                                    printf(" Cansados, porem vitoriosos! Assim definimos nossos herois se encontram depois da longa e ardua batalha. %s ganha seu lugar na guilda e depois de um tempo se torna o braco direito do lider: Rastonpuff. Os nomes de %s e dos lobos prateados ecoaram por toda a eternidade. \n", jogador, jogador);

                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                } else if (pvGrupo <= 0)
                                {
                                    printf(" Jogados as cinzas. Os guerreiros sucumbem. Mais nenhum grito se ouve, apenas a chuva que apaga as brasas de suas peles queimadas. Ninguem lembrara os seus nomes.\n");

                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                }
                            }
                }

                    //rota A.A.A.A Esc 3
                        if (decEsc == 3){
                            
                            printf("Ela nega rapidamente. Porem, depois de %s insiste muito e prometer dividir a recompensa com ela, Claire começa a ceder e o acompanha. Ela pega seu machado azul brilhante e com um sonho de se tornar uma aventureira e nao deixar aquele pobre coitado morrer. Eles partem para as montanhas.\n ", jogador);

                            printf("Voces correm a cavalo durante 2 dias e depois de uma viagem longa pelas montanhas nevoentas do norte. %s chega na toca do dragao. Sua espada toma um brilho forte e chama a atencao do dragao. O dragao no seu ninho de pedras negras acorda e vai na direcao de voces. A batalha entao se inicia.\n", jogador);

                            for (int i = 0; i < 20; i++){
                                printf(" %s e Claire atacam o dragao. n", jogador);
                                pvDragao -= rand() % 12;
                                printf(" O dragao ataca %s e Claire com seu bafo de fogo. \n", jogador);
                                pvGrupo2 -= rand() % 15;

                                if (pvDragao <= 0)
                                {
                                    printf(" Quando o dragao cai, os dois se olham exaustos. Enfim, conseguiram. Eles se abraçam e em meio campo de batalha, se beijam. Se tornam os nomes mais aclamados das terras do norte. %s e Claire: Os Guerreiros de prata. \n", jogador);

                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                } else if (pvGrupo2 <= 0)
                                {
                                    printf(" Os dois caem de joelhos, enquanto se olham e percebem o fim iminente. Nao serão lembrados e muito menos honrados. Com um sopro da fera, evaporam na enorme inexistência.\n");

                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                }
                            }
                        }
                    
                // rota A.A.A.B
                    if (decCri == 2){
                        printf("Ao emegir na sua aventura com uma carta de recompensa em busca de Trolls e Ogros, ele os encontra lutando entre si. Indignado, %s tenta entrar no meio da luta para acertar um golpe e  com um balancar da maca do troll voa em direcao de %s. Os dois monstros se olham e continuam brigando, mas agora pra saber quem fica com o jantar \n", jogador, jogador);
                        printf("----------------------------GAME OVER--------------------------------\n");
                    }

                // rota A.A.A.C
                    if (decCri == 3){
                        printf("Isso nao e Senhor do Aneis, ok?! Pois bem... Ele ganha uma carta de recompensa para Orcs e Goblins. %s vai ate a floresta mais proxima. La, encontrou um labirinto, onde quanto mais andava mais se sentia leve. %s percebeu que seus pertences haviam sido levados, depois suas calcas, camisa, seroulas. Ja nao tinha mais nem dignidade. Morreu pelado.\n", jogador, jogador);
                        printf("----------------------------GAME OVER--------------------------------\n");
                    }
                // rota A.A.A.D
                    if (decCri == 4){
                        printf("Oh, slimes? Hm ok... %s vai la, corta uns slimes... mata os slimes, suja roupa de slime e sei la! Vende?! Come?! Brinca?! O que que da pra fazer com slimes em uma epoca medieval? Voce pode enfrentar dragoes e escolhe essa opcao mediocre. A culpa e sua, nao minha! Quer saber, toma aqui: \"os slimes liberam uma fragrancia toxica que entra nos seus pulmoes e te mata lentamente.\" Da proxima escolhe algo melhor.\n", jogador);
                        printf("----------------------------GAME OVER--------------------------------\n");
                    }

    }
    
		    //rota A.A.B
			            if (decAA == 2)
			            {
			                printf("%s diz coisas estravagantes para moca. Seu sorriso leve dava a entender que ela estava gostando. Ate ela o jogar para fora da taverna, chamar os guardas e prende-lo por assedio sexual. Que coisa feia...\n", jogador);
			                printf("----------------------------GAME OVER--------------------------------\n");
			            }
			
			//rota A.A.C
			            if (decAA == 3)
			            {
			                printf("%s descobre um fraco por alcool. Se vicia rapidamente e se torna um bebum. Agora, perambula pela cidade e diz pros outros que o que estragou sua carreira de aventureiro foi o joelho ruim.\n", jogador);
			                printf("----------------------------GAME OVER--------------------------------\n");
			            }

        
    	//rota A.B (bosque sombrio)
        if (lugar == 2)
        {
            printf (" %s vai ate o bosque sombrio. Quando chega, cheio de coragem. A tremenda magia assola sua espada e faz com que ele perca sua forca. Monstros vindos da escuridao o arrastam e o devoram. \n", jogador);
            printf ("----------------------------GAME OVER--------------------------------\n");
        }
        
        //rota A.C (caverna da solidão)
        if (lugar == 3)
        {
            printf("%s vai ate a caverna da solidao. E fica sozinho. Pra sempre. Que decisao mais estupida...\n", jogador);
            printf("----------------------------GAME OVER--------------------------------\n");
        }

        //rota A.D (montanhas de algodão doce)
        if (lugar == 4)
        {
            printf ("%s vai ate as montanhas e vive feliz pra sempre. Ou ate os 22. Ele morreu de diabete.\n", jogador);
            printf("----------------------------GAME OVER--------------------------------\n");
        }

        // fim da rota A


    // ***********************************************
    // * ROTA B: PEDRA PRETA
    // ***********************************************

        if (pedra == 2){

        printf("O raio cai. A terra treme. Quando %s abre os olhos, o ceu esta coberto por nuvens roxas.\n" 
            "Tudo ao redor parece morto. A pedra preta pulsa como um coracao vivo em sua mao.\n"
            "Do nucleo dela, surge uma fumaca escura que se solidifica num cajado negro, com runas prateadas e um olho pulsante na ponta.\n"
            "\"Eu vejo teu destino... e ele me ve tambem.\" sussurra uma voz dentro da mente dele.\n"
            "O chao sussurra nomes, O vento parece gritar, E uma nevoa o envolve.\n", jogador);

        printf("\nVoce pondera sobre seu proximo movimento:\n");
        printf(" 1 - Seguir a voz que vem do pantano morto.\n");
        printf(" 2 - Buscar abrigo no vilarejo amaldicoado.\n");
        printf(" 3 - Ignorar os sussurros e seguir o proprio caminho.\n");
        printf(" 4 - Invocar o poder do cajado para testar sua forca.\n");
        printf("\nSua escolha: ");

        scanf("%d", &decB);

        switch (decB)
                    {
                    case 1:
                        printf(" Seguir a voz que vem do pantano morto.\n\n");
                        break;
                    case 2:
                        printf(" Buscar abrigo no vilarejo amaldicoado.\n\n");
                        break;
                    case 3:
                        printf(" Ignorar os sussurros e seguir o proprio caminho.\n\n");
                        break; 
                    default:
                        printf(" Invocar o poder do cajado para testar sua força.\n\n");
                        break;
                    }
                }

        //ROTA B.A - Seguir a voz que vem do pantâno morto - DECB1
        if (decB == 1){

        printf("Ao seguir a voz, o ar comeca a feder a podridao. Arvores retorcidas parecem sussurrar.\n"
            "Uma mulher de capa escura observa %s a distancia, com olhos vermelhos.\n" 
            "Voce ousa andar com o cajado de Ny'thal?\" Ela se apresenta como Lilith, uma feiticeira das sombras.\n", jogador);
                
        printf("\nO que %s faz?\n", jogador);

        printf(" 1 - Pedir ajuda a Lilith para entender o cajado.\n");
        printf(" 2 - Ameaca-la para conseguir informcoes.\n");
        printf(" 3 - Tentar ler as runas sozinho.\n");

        scanf("%d", &decBA);

        switch (decBA)
           {
            case 1:
                printf(" Pedir ajuda a Lilith para entender o cajado\n\n");
                break;
            case 2:
                printf(" Ameaca-la para conseguir informacoes.\n\n");
                break;
            case 3:
                 printf(" Tentar ler as runas sozinho.\n\n");
                break;
                    }
        }
                   
                        //ROTA B.A.A - Pedir ajuda a Lilith para entender o cajado - DECBA1
                        if (decBA == 1){

                        printf("Lilith aceita ajuda-lo. Ensina que o cajado se alimenta de emocoes — dor, culpa e desejo.\n"
                        "Ela ve grande energia em voce entao te leva em uma missao pra derror o grande espirito ansiao: Babuh.\n");

                        printf("Ao atravessar o grande bosque esquecido, voces se demparam com um pedestal.\n"
                        "Nele, ha o nome de Babuh. Ela o invoca, e a batalha comeca.\n\n");

                        // batalha contra Babuh 
                        for (int i = 0; i < 20; i++){
                            printf(" %s ataca Babuh com o cajado. \n", jogador);
                            pvMonstro -= rand() % 5;
                            printf(" Babuh ataca %s com seus tentaculos sombrios. \n", jogador);
                            pv -= rand() % 3;

                            // condição de vitória ou derrota
                            if (pvMonstro <= 0) //vitoria
                            {
                            printf("Mesmo com pouco tempo pra dominar a magia do cajado, voce se saiu bem.\n"
                                    "Voces sao parceiros agora, e protegem o submundo junto.\n");  
                            printf("----------------------------GAME OVER--------------------------------\n");
                            break;
                            } if (pv <= 0) //derrota
                            {
                            printf("Babuh captura toda a energia vital voces. Nada sobra.\n"
                            "E suas almas sao capturadas pela entidade. Estao presos pela a eternidade.\n");
                            printf("----------------------------GAME OVER--------------------------------\n");
                            break;
                                        }
                                            }
                                                }
//Fim da ROTA B.A.A    

                        //ROTA B.A.B - Ameaçá-la para conseguir informações - DECBA2
                        if (decBA == 2){

                        printf("Ao ameacar Lilith, voce percebe que ela nao esta brincando.\n"
                        "Com um gesto rapido, ela lanca uma maldicao que te prende no pantano.\n"
                        "Voce se torna parte do lugar, um espirito perdido entre as arvores retorcidas.\n");                                                                   
                        printf("----------------------------GAME OVER--------------------------------\n");
                            }
// fim da ROTA B.A.B
                        
                        //ROTA B.A.C - Tentar ler as runas sozinho - DECBA3
                        if (decBA == 3){

                        printf("Ao ler as runas sua mente fica zonza. Mas voce nao consegue parar. Precisa compreender.\n"
                        "Sua vista fica cinza e seu corpo se transforma em pedra.\n"
                        "Fica imovel para sempre, mas a loucura corre solta na sua mente.\n");
                        printf("----------------------------GAME OVER--------------------------------\n");
                            }

// fim da ROTA B.A.C

        //Rota B.B - Buscar abrigo no vilarejo amaldiçoado - DECB2
        if (decB == 2){

        printf("Ao chegar no vilarejo amaldiçoado, %s percebe que as casas estao em ruinas e o silencio e perturbador.\n"
        "De repente, sombras surgem das paredes, revelando-se como espiritos inquietos.\n"
        "Quem ousa perturbar nosso descanso? — sussurram eles.\n", jogador);

        printf("\nEnquanto Lilith o guia pelas ruinas, o chao treme!\n"
        "Da lama, surge um colosso feito de ossos e raizes: o Guardiao do Pantano, protetor do selo sombrio.\n"
        "Lilith alerta: \"Ele sente o cajado... e nao quer que ele desperte!\"\n\n"
        "O monstro avanca, esmagando arvores. %s ergue o cajado, e o olho na ponta se abre, lancando um raio escarlate.\n"
        "Mas o poder consome seu braco; o cajado o quer tanto quanto voce o quer.\n"
        "A batalha ecoa entre relampagos e gritos. Lilith conjura correntes de energia negra, prendendo o monstro.\n\n"
        "E a sua chance, %s! Voce decide:\n", jogador, jogador);
                
        printf(" 1 - Canalizar toda a energia do cajado e destruir o guardiao (risco de corrupcao).\n");
        printf(" 2 - Lutar junto com Lilith usando magia controlada.\n");
        printf(" 3 - Tentar usar o cajado para fortalecer as correntes de Lilith (resultado imprevisivel).\n ");
                
        scanf("%d", &decBB);

        switch (decBB)
            {
            case 1:
                printf(" Canalizar toda a energia do cajado e destruir o guardiao (risco de corrupcao).\n\n");
                break;
            case 2:
                printf(" Lutar junto com Lilith usando magia controlada.\n\n");
                break;
            case 3:
                printf(" Tentar usar o cajado para fortalecer as correntes de Lilith (resultado imprevisivel).\n\n");
                break;
                }
                    }
// fim da ROTA B.B

                        //Rota B.B.A - Canalizar toda a energia do cajado e destruir o guardião - DECBB1
                        if (decBB == 1){

                        printf("Voce concentra toda a energia do cajado no guardiao. Um brilho intenso envolve o campo de batalha.\n"
                        "O monstro ruge, mas a energia e demais para voce controlar. A corrupcao comeca a tomar conta do seu corpo.\n"
                        "Voce sente sua mente se fragmentando, sendo corrompida pelo cajado. A sua alma acaba sendo aprisionada dentro dele.\n\n");
                                                
                        printf("----------------------------GAME OVER--------------------------------\n");
                            }
    
//fim da ROTA B.B.A

                        //Rota B.B.B - Lutar junto com Lilith usando magia controlada - DECBB2
                        if (decBB == 2){

                        printf("Voce e Lilith lutam juntos, combinando suas magias. O guardiao e enfraquecido pelas correntes e pelos ataques coordenados.\n"
                        "Finalmente, ele cai, liberando uma onda de energia sombria que se dissipa no ar.\n"
                        "Voces sobreviveram, mas o cajado agora esta mais poderoso e sedento por mais energia.\n\n");

                        for (int i = 0; i < 20; i++){
                            printf(" %s ataca o guardiao com o cajado e Lilith com suas magias. \n", jogador);
                            pvMonstro -= rand() % 5;
                            printf(" O guardiao ataca %s com seus tentaculos sombrios. \n", jogador);
                            pv -= rand() % 3;

                            // condição de vitória ou derrota
                                if(pvMonstro <= 0) //vitoria
                                    {
                                    printf(" Voces saem vitoriosos. Ela entao percebe sua grande capacidade. Voces se tornam parceiros e protegem o submundo\n\n");
                                                                    
                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                    }

                                if (pv <= 0) //derrota
                                    {
                                    printf("O guardiao em meio a sua derrota, captura o cajado e aprisiona a sua alma no submundo\n\n");
                                                                    
                                    printf("----------------------------GAME OVER--------------------------------\n");

                                    break;
                                    }
                                        }              
                                            }
//fim da ROTA B.B.B

                        //Rota B.B.C - Tentar usar o cajado para fortalecer as correntes de Lilith - DECBB3
                        if (decBB == 3){

                        printf("Nada acontece. E o guadiao te esmaga. E isso. Estupido.\n");
                                                                        
                        printf("----------------------------GAME OVER--------------------------------\n");
                                }
//fim da ROTA B.B.C

    //ROTA B.C - Ignorar os sussurros e seguir o próprio caminho - DECB3
    if (decB == 3){

    printf( "\nVoce se concentra, tentando invocar a imagem de uma serpente que vislumbrou em sua mente ao tocar o cajado.\n"
    "O cajado parece obedecer. Ao mentalizar a criatura, uma sombra gigantesca surge sob seus pes.\n"
    "Antes que %s possa reagir, a propria cobra irrompe do chao e o engole por inteiro.\n\n"
    "** VOCE ESTA MORTO **\n\n", jogador);
                            
    printf("----------------------------GAME OVER--------------------------------\n");
            }
                
//fim da ROTA B.C

    //ROTA B.D - Invocar o poder do cajado para testar sua força - DECB4
    if (decB == 4){
    
    printf( "No topo de uma montanha de ossos petrificados, o cajado o guia ate um circulo de runas.\n"
    "O vento sopra em sentido contrario. O tempo para. Lilith o encara:\n"
    "Debaixo destas runas dorme o coracao do deus Ny'thal.\n"
    "Se o libertar... o mundo acabara. Mas talvez... voce possa refaze-lo.\" O olho do cajado pulsa.\n\n");
                            
    printf(" Voce decide:\n\n");
    printf(" 1 - Ajudar Lilith a quebrar o selo.\n");
    printf(" 2 - Impedir o ritual.\n");
    printf(" 3 - Destruir o cajado.\n");
                            
    scanf("%d", &decBD);

    switch (decBD)
        {
            case 1:
                    printf(" Ajudar Lilith a quebrar o selo.\n ");
                    break;
            case 2:
                    printf(" Impedir o ritual.\n ");
                    break;
            case 3:
                    printf(" Destruir o cajado.\n ");
                    break;
            }  
                }

//fim da ROTA B.D

                    //Rota B.D.A - Ajudar Lilith a quebrar o selo - DECB4.1
                    if (decBD == 1){

                    printf("O selo se rompe. O chao sangra. Espiritos gritam. O ar cheira a ferro.\n");
                    printf("O chao se abre. Um corpo colossal emerge: Ny'thal, deus das sombras.\n"
                    "Suas asas de fumaca cobrem o ceu. Seus olhos sao so vazios brilhantes.\n");
                    printf("Ny'thal: \"A alma que tocou meu cajado sera minha.\" Lilith flutua, conjurando esferas de luz vermelha.\n"
                    "O cajado vibra com forca. O olho fala com %s.\n"
                    "A batalha comeca: \n", jogador);

                    // batalha contra Nythal
                    for (int i = 0; i < 20; i++){
                        printf(" %s ataca Ny'thal com o cajado. \n", jogador);
                        pvNythal -= rand() % 15;
                        printf(" Ny'thal ataca %s com suas sombras. \n", jogador);
                        pv -= rand() % 5;
                        // condição de vitória ou derrota
                        if (pvNythal <= 0) //vitoria            
                        {
                            printf("O amanhecer corta o ceu. As nuvens negras se desfazem lentamente. Lilith, ferida, cai de joelhos.\n"
                            "O cajado se desintegra, transformando-se em poeira brilhante. Os dois viram parceiros e protegem o plano terreno do submundo.\n\n");
                            printf("----------------------------GAME OVER--------------------------------\n");
                            break;

                        } if (pv <= 0) //derrota
                        {
                            printf("Suas almas sao capturas por Ny'thal, ele os aprisiona dentro do cajado e os fazem sofrer pela eternidade.\n\n");
                            printf("----------------------------GAME OVER--------------------------------\n");
                            break;
                            }
                                }
                                    }
                                                
//fim da ROTA B.D.A

                    //Rota B.D.B - Impedir o ritual - DECB4.2
                    if (decBD == 2){
                                            
                    printf("Lilith o ataca, mas hesita. O olhar de %s a faz parar.\n.", jogador);
                    printf("O chao se abre. Um corpo colossal emerge: Ny'thal, deus das sombras. Suas asas de fumaca cobrem o ceu. Seus olhos sao so vazios brilhantes.\n");
                    printf("Ny'thal: \"A alma que tocou meu cajado sera minha.\" Lilith flutua, conjurando esferas de luz vermelha.\n");
                    printf("O cajado vibra com forca. O olho fala com %s.\n", jogador);
                    printf("A batalha comeca: \n”");

                    for (int i = 0; i < 20; i++){
                        printf(" Lilith ataca Ny'thal com magia negra. \n");
                        pvNythal -= rand() % 15;
                        printf(" Ny'thal ataca %s com suas sombras. \n", jogador);
                        pv -= rand() % 4;
                            // condição de vitória ou derrota
                        if (pvNythal <= 0) //vitoria
                        {
                            printf("\nO amanhecer corta o ceu, As nuvens negras se desfazem lentamente, Lilith, ferida, cai de joelhos.\n"
                            "O cajado se desintegra, transformando-se em poeira brilhante.\n"
                            "Os dois viram parceiros e protegem o plano terreno do submundo.\n\n");

                            printf("----------------------------GAME OVER--------------------------------\n");
                            break;
                        } if (pv <= 0) //derrota
                        {
                            printf("“Suas almas sao capturas por Ny'thal, ele os aprisiona dentro do cajado e os fazem sofrer pela eternidade.”");
                                                    
                            printf("----------------------------GAME OVER--------------------------------\n");
                            break;
                            }
                                }
                                    }
                                
//fim da ROTA B.D.B

                    //Rota B.D.C - Destruir o cajado - DECB4.3
                    if (decBD == 3){

                    printf("\nO cajado se parte, e fragmentos penetram no corpo dele - dor e poder o atravessam.\n"
                    "O poder flui por todo o seu corpo, mas sem o controle, o poder cria aberturas no corpo de %s.\n"
                    "Varias luzes saem de dentro de seu corpo e por fim ele explode. %s morreu.\n\n", jogador, jogador);
                    printf("----------------------------GAME OVER--------------------------------\n");
                        }
    
//fim da ROTA B.D.C
                                                                
//FIM DA ROTA B


    // ***********************************************
    // * ROTA C: PEDRA VERMELHA
    // ***********************************************

    // Estrutura de decisão baseada na escolha
    if (pedra == 3) {
        
    printf("\n %s estende a mao e toca a joia vermelha.\n", jogador);
    printf(" A pedra nao queima, mas pulsa com um calor intenso, como um coracao batendo.\n");
    printf(" Assim que seus dedos a fecham, sua mente e invadida por uma visao...\n\n");
    
    printf(" Voce ve um vilarejo distante, coberto por uma nevoa sombria e fria.\n");
    printf(" Uma voz fraca sussurra em sua mente, pedindo socorro.\n\n");
    
    printf(" A visao desaparece tao rapido quanto veio. A pedra vermelha se apaga, agora fria ao toque.\n");
    printf(" Voce nao ganhou um poder destrutivo, mas sente uma urgencia que nao existia antes. Voce tem um proposito.\n\n");

    printf("O caminho de volta para a fazenda e seguro, mas na visao parecia vir do pantano amaldicoado a oeste.\n");
    
    printf("\n O que %s faz?\n", jogador);
    printf(" 1 - Investigar o pantano.\n");
    printf(" 2 - Voltar para casa.\n");
    printf(" 3 - Tentar entender a visao.\n");
    printf("\n Sua escolha: ");
    
    scanf("%d", &decC);

    switch (decC) {
        
        case 1:
            // Desfecho 1: Morte no Pântano
            printf("\n Com o coracao batendo forte, %s ignora o caminho de casa e segue para o pantano.\n", jogador);
            printf(" A nevoa e densa e fria, abafando todos os sons, exceto seus proprios passos na lama.\n");
            printf(" Voce ouve um barulho subito na agua turva ao seu lado.\n");
            printf(" Antes que possa sequer levantar sua arma improvisada, algo o agarra pela perna e o puxa para baixo.\n");
            printf(" A ultima coisa que voce ve sao olhos multiplos brilhando na escuridao. O vilarejo nunca sera salvo.\n\n");
            printf("----------------------------GAME OVER--------------------------------\n");
            break;

        case 2:
            // Desfecho 2: O Fazendeiro
            printf("\n %s decide que foi apenas uma ilusao. O calor da pedra desapareceu, e o medo tomou conta.\n", jogador);
            printf(" Voce volta para a seguranca da fazenda e para a vida de campones.\n");
            printf(" O sussurro do vilarejo se perdeu para sempre.\n\n");
            printf("----------------------------GAME OVER--------------------------------\n");
            break;

        case 3:
            // Desfecho 3: O estudante
            printf("\n %s tenta fazer um movimento, mas hesita...\n", jogador);
            printf(" Ao piscar os olhos, a floresta, a arvore queimada e as pedras reluzentes comecam a se distorcer.\n");
            printf(" A imagem de tudo vibra e se dissolve, como tinta na agua.\n");
            printf(" O som da floresta e substituido por um zumbido baixo e o cheiro de diesel.\n\n");
            printf(" ...%s abre os olhos.\n", jogador);
            printf(" Voce nao esta em uma floresta. Voce esta em um onibus chacoalhando.\n");
            printf(" Um fone de ouvido caiu da sua orelha e o sol bate pela janela suja.\n\n");
        
            // Esta é a parte que conecta com a realidade do jogador
            printf("Voce olha a mochila no seu colo. Nela, um caderno grosso.\n");
            printf("Seu destino: a faculdade, para a aula de Algoritmos e Programacao Estruturada.\n\n");
            
            printf("----------------------------GAME OVER--------------------------------\n");
    }
    }

printf("\nObrigado por jogar!\n");

return 0;


}