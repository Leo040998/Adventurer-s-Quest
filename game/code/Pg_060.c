/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_060(){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,15);
    mvprintw(1,2,"Batalha Final");
    mvprintw(3,5, "     Inicia-se a batalha, de um lado 4 Perdições controladas pelos magos,");
    mvprintw(4,5, "Fenix e Kraken faziam duas frentes de batalha, uma aérea e outra terrestre.");
    mvprintw(5,5, "Enquanto Apollyon e Tlaloc garantiam a segurança dos Magos.");
    mvprintw(6,5, "     Do outro, Tharkun e Karthus se encarregavam de batalhar Fenix.");
    mvprintw(7,5, "Enquanto Kyra e Legolas, juntamente com Edward abria caminho para os dois,");
    mvprintw(8,5, "buscam um meio de chegar até Apollyon e Tlaloc, e finalmente chegar");
    mvprintw(9,5,"até os magos.");
    mvprintw(10,5, "     Thorya e Fenrir fazem frente de batalha contra o Kraken.");
    mvprintw(11,5,"     Thorya, ainda com seu escudo em mãos, logo entende como funciona o novo");
    mvprintw(12,5,"poder embuído de seu machado e começa a lançar raiose golpes extremos contra");
    mvprintw(13,5,"o Polvo Gigante, Fenrir por sua vez demonstra um poder incrivelmente forte,");
    mvprintw(14,5,"com patadas e mordidas devastadores.");
    getch();
    clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha4A(movimento_opcao,resultado_player,resultado_inimigo);
        while (( v = getch()) != (int)'\n'){
               if(v == KEY_DOWN){
                   if(movimento_opcao == 1){
                       movimento_opcao = 0;
                   } else{
                   movimento_opcao++;}
                   }
               if(v == KEY_UP){
                   if(movimento_opcao == 0){
                       movimento_opcao = 1;
                   } else{
                       movimento_opcao--;}
               }
               print_batalha4A(movimento_opcao,resultado_player,resultado_inimigo);
        }
        audio(0);
        
        acao_inimigo = rand()%100; // porcentgem do monstro de atacar
        if(movimento_opcao == 0){
            
            if( acao_inimigo < 60 ){        // ambos tentam atacou
                if ( rand()%100 > 30){      //player ataca
                    vida_inimigo_atual = (vida_inimigo_atual - 10);
                    resultado_player = 10;
                    
                }
                else
                    resultado_player = 1;
                
                if ( rand()%100 > 49){      //inimigo ataca
                    vida_player_atual = (vida_player_atual - 5);
                    resultado_inimigo = 10;
                }
                else
                    resultado_inimigo = 1;
            }
            else{
                if( rand()%100 > 30){       // player ataca
                    resultado_player = 10;
                    if( rand()%100 > 49){       // monstro nao defende
                         vida_inimigo_atual = (vida_inimigo_atual - 10);
                         resultado_inimigo = 2;
                    }
                    else
                        resultado_inimigo = 20;
                }
                else{
                    resultado_player = 1;
                    resultado_inimigo = 20;
                }
            }
        }
        if(movimento_opcao == 1){
                if( acao_inimigo < 60 ){ // monstro tenta ataca
                    if ( rand()%100 > 49){      //monstro ataca
                        resultado_inimigo = 10;
                        if ( rand()%100 > 49){
                            vida_player_atual = (vida_player_atual - 10);
                            resultado_player = 2;
                        }
                        else
                            resultado_player = 20;
                    }
                    else 
                        resultado_inimigo = 1;
                }
                else{
                    resultado_inimigo = 20;
                    resultado_player = 20;
                }
        }
        if (vida_player_atual <= 0){
            player_dead = true;
            break;
        }
        
        }
        
        if(player_dead == true) return;
        audio(1);
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,15);
    mvprintw(1,2,"Batalha Final");
    mvprintw(3,5, "     Tharkun começa a lançar feitiço após feitiço sem ao menos");
    mvprintw(4,5, "perder a compostura, não se privava mais de de seu verdadeiro poder,");
    mvprintw(5,5, "sabia que necessitaria de todo o poder que possuía, Karthos não ficava");
    mvprintw(6,5, "para trás e agora mais confiante do que nunca sabia que tudo que havia");
    mvprintw(7,5, "feito não tinha sido em vão.");
    mvprintw(8,5, "     Sendo que até então havia lutado com feitiços e com seu arco");
    mvprintw(9,5, "encantado. O antigo cavaleiro retira sua espada da bainha, e");
    mvprintw(10,5,"com sua espada Excalibur, defere vários ataques contra");
    mvprintw(11,5,"a Ave Flamejante.");
    getch();
    clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha4B(movimento_opcao,resultado_player,resultado_inimigo);
        while (( v = getch()) != (int)'\n'){
               if(v == KEY_DOWN){
                   if(movimento_opcao == 1){
                       movimento_opcao = 0;
                   } else{
                   movimento_opcao++;}
                   }
               if(v == KEY_UP){
                   if(movimento_opcao == 0){
                       movimento_opcao = 1;
                   } else{
                       movimento_opcao--;}
               }
               print_batalha4B(movimento_opcao,resultado_player,resultado_inimigo);
        }
        audio(0);
        
        acao_inimigo = rand()%100; // porcentgem do monstro de atacar
        if(movimento_opcao == 0){
            
            if( acao_inimigo < 60 ){        // ambos tentam atacou
                if ( rand()%100 > 30){      //player ataca
                    vida_inimigo_atual = (vida_inimigo_atual - 10);
                    resultado_player = 10;
                    
                }
                else
                    resultado_player = 1;
                
                if ( rand()%100 > 49){      //inimigo ataca
                    vida_player_atual = (vida_player_atual - 5);
                    resultado_inimigo = 10;
                }
                else
                    resultado_inimigo = 1;
            }
            else{
                if( rand()%100 > 30){       // player ataca
                    resultado_player = 10;
                    if( rand()%100 > 49){       // monstro nao defende
                         vida_inimigo_atual = (vida_inimigo_atual - 10);
                         resultado_inimigo = 2;
                    }
                    else
                        resultado_inimigo = 20;
                }
                else{
                    resultado_player = 1;
                    resultado_inimigo = 20;
                }
            }
        }
        if(movimento_opcao == 1){
                if( acao_inimigo < 60 ){ // monstro tenta ataca
                    if ( rand()%100 > 49){      //monstro ataca
                        resultado_inimigo = 10;
                        if ( rand()%100 > 49){
                            vida_player_atual = (vida_player_atual - 10);
                            resultado_player = 2;
                        }
                        else
                            resultado_player = 20;
                    }
                    else 
                        resultado_inimigo = 1;
                }
                else{
                    resultado_inimigo = 20;
                    resultado_player = 20;
                }
        }
        if (vida_player_atual <= 0){
            player_dead = true;
            break;
        }
        
        }
        
        if(player_dead == true) return;
        audio(1);
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,15);
    mvprintw(1,2,"Batalha Final");
    mvprintw(3,5, "     Edward, agora determinado e pronto para batalhar contra");
    mvprintw(4,5, "Apollyon, tinha lembranças de seu irmão e todos seus ensinamentos,");
    mvprintw(5,5, "fazendo com que apenas fortalecesse sua determinação.");
    mvprintw(6,5, "     Kyra e Legolas iam logo atrás garantindo tiros e golpes precisos");
    mvprintw(7,5, "contra as criaturas.");
    mvprintw(8,5, "     Edward então chega até Apollyon, pede para que seus companheiros");
    mvprintw(9,5, "cuidem de Tlaloc e deixem Apollyon para ele apenas. Kyra e Legolas partem");
    mvprintw(10,5,"em direção do Gigante de Pedra.");
    getch();
    clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha4C(movimento_opcao,resultado_player,resultado_inimigo);
        while (( v = getch()) != (int)'\n'){
               if(v == KEY_DOWN){
                   if(movimento_opcao == 1){
                       movimento_opcao = 0;
                   } else{
                   movimento_opcao++;}
                   }
               if(v == KEY_UP){
                   if(movimento_opcao == 0){
                       movimento_opcao = 1;
                   } else{
                       movimento_opcao--;}
               }
               print_batalha4C(movimento_opcao,resultado_player,resultado_inimigo);
        }
        audio(0);
        
        acao_inimigo = rand()%100; // porcentgem do monstro de atacar
        if(movimento_opcao == 0){
            
            if( acao_inimigo < 60 ){        // ambos tentam atacou
                if ( rand()%100 > 30){      //player ataca
                    vida_inimigo_atual = (vida_inimigo_atual - 10);
                    resultado_player = 10;
                    
                }
                else
                    resultado_player = 1;
                
                if ( rand()%100 > 49){      //inimigo ataca
                    vida_player_atual = (vida_player_atual - 5);
                    resultado_inimigo = 10;
                }
                else
                    resultado_inimigo = 1;
            }
            else{
                if( rand()%100 > 30){       // player ataca
                    resultado_player = 10;
                    if( rand()%100 > 49){       // monstro nao defende
                         vida_inimigo_atual = (vida_inimigo_atual - 10);
                         resultado_inimigo = 2;
                    }
                    else
                        resultado_inimigo = 20;
                }
                else{
                    resultado_player = 1;
                    resultado_inimigo = 20;
                }
            }
        }
        if(movimento_opcao == 1){
                if( acao_inimigo < 60 ){ // monstro tenta ataca
                    if ( rand()%100 > 49){      //monstro ataca
                        resultado_inimigo = 10;
                        if ( rand()%100 > 49){
                            vida_player_atual = (vida_player_atual - 10);
                            resultado_player = 2;
                        }
                        else
                            resultado_player = 20;
                    }
                    else 
                        resultado_inimigo = 1;
                }
                else{
                    resultado_inimigo = 20;
                    resultado_player = 20;
                }
        }
        if (vida_player_atual <= 0){
            player_dead = true;
            break;
        }
        
        }
        
        if(player_dead == true) return;
        audio(1);
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,15);
    mvprintw(1,2,"Batalha Final");
    mvprintw(3,5, "     Apollyon, agora na sua forma mais poderosa, zomba do cavaleiro");
    mvprintw(4,5, "e por provocações tenta o distrair. Edward por sua vez, responde:");
    mvprintw(5,5, "     'Nada do que você falar, impedirá sua destruição. Como um");
    mvprintw(6,5, "velho sábio me disse, a morte é um dia que vale a pena a ser vivido");
    mvprintw(7,5, "e eu irei garantir que a sua seja hoje.'");
    getch();
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,15);
    mvprintw(1,2,"Batalha Final");
    mvprintw(3,5, "     Thorya e Fenrir praticamente já estão acabando com a fera");
    mvprintw(4,5, "dos mares, Thorya pede que Fenrir vá ajudar Kyra e Legolas que");
    mvprintw(5,5, "ela finalizaria Kraken.");
    mvprintw(6,5, "     Nesse ponto, percebe que a fera praticamente não a atacava");
    mvprintw(7,5, "mais e que a aura negra pouco se demonstrava. Parte então para ");
    mvprintw(8,5, "ajudar Tharkun e Karthos a fim de explicar seu novo plano.");
    mvprintw(9,5, "     Kyra e Legolas apesar de extramanete hábeis, estão sofrendo");
    mvprintw(10,5,"contra o Gigante, agora que este se encontrava na sua forma mais");
    mvprintw(12,5,"forte foi então que Fenrir chega e o derruba num só golpe.");
    mvprintw(13,5,"     Agora com a ajuda do Lobo, conseguem incapacitar o Deus Asteca.");
    mvprintw(14,5,"     Karthus e Tharkun, com a ajuda de Thorya, também conseguem ");
    mvprintw(15,5,"incapacitar a Fera de Fogo e então partem para batalhar contra Apolyon");
    mvprintw(16,5,"e os magos");
    mvprintw(17,5,"     Edward por sua vez, se encontra tão determinado que não sofre");
    mvprintw(18,5,"nenhum um golpe sequer, ainda que não tivesse mais a ajuda do amuleto");
    mvprintw(19,5,"dado pela feiticeira que se quebrou durante a batalha em Domnus,");
    mvprintw(20,5," o cavaleiro demonstrava perfeição contra o Rei do Abismo.");
    getch();
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,15);
    mvprintw(1,2,"Batalha Final");
    mvprintw(3,5, "     Eis que em alguns golpes, Edward fere o demônio com maestria,");
    mvprintw(4,5, "incapacitando-o. Agora, sob provocações do demônio, Edward");
    mvprintw(5,5, "é tentado a finalizá-lo.");
    mvprintw(6,5,"     Mas é impedido por Thorya que explica que para todos saíssem de lá,");
    mvprintw(7,5,"necessitava do demônio vivo. Edward, ainda relutante e tentado, permite");
    mvprintw(8,5,"que Thorya finalize seu plano, mas depois não hesitaria em finalizar");
    mvprintw(9,5,"o Líder do Apocalipse.");
    mvprintw(10,5,"     Thorya (com o escudo semi-partido, o machado Kripto e ainda com");
    mvprintw(11,5,"a companhia de Fenrir), Edward (com a espada Pérola e o chapéu de");
    mvprintw(12,5,"seu irmão),  Karthos (com Excalibur), Tharkun, Kyra (com sua Foice) e");
    mvprintw(13,5,"Legolas (com arco modificado), agora se deparam com o Antigo Conselho");
    mvprintw(14,5,"derrotado e sem mais energia após toda batalha.");   
    getch();
    pag_atual++;
}
