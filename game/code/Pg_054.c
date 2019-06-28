/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_054(){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,15);
    mvprintw(1,2,"Batalha Portais");
    mvprintw(10,5, "     Karthos pede para que Legolas e Kyra cuidem do perímetro,");
    mvprintw(11,5, "já que nenhuma criatura deveria se afastar demais da Torre.");
    mvprintw(12,5, "        Ele e Edward se encarregam de derrotar as criaturas vindas");
    mvprintw(13,5, "da Torre e irem abrindo caminho.");
    mvprintw(14,5, "        E quanto a Tharkun pede para que ela descubra um meio");
    mvprintw(15,5, "de fechar os portais.");
    getch();
    clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha3A(movimento_opcao,resultado_player,resultado_inimigo);
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
               print_batalha3A(movimento_opcao,resultado_player,resultado_inimigo);
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
    mvprintw(1,2,"Batalha Portais");
    mvprintw(3,5, "     Enquanto Edward e Krathos vão abrindo caminho até a torre,");
    mvprintw(4,5, "Karthos comenta que lamenta muito por Jack e diz que quando lutou");
    mvprintw(5,5, "com ele percebeu muitas Karthos comenta que lamenta muito por Jack e");
    mvprintw(6,5, "diz que quando lutou com ele percebeu muitas similaridades nos golpes");
    mvprintw(7,5, "que ele mesmo um dia havia ensinado ao Capitão.");
    mvprintw(8,5, "     Edward surpreso com tudo aquilo, pergunta, como ele nunca havia");
    mvprintw(9,5, "falar de Karthos.");
    mvprintw(10,5,"     O antigo cavaleiro então explica que foi um modo de proteger Jack,");
    mvprintw(11,5,"se caso alguém soubesse que ele de algum modo estava vinculado a ele,");
    mvprintw(12,5,"fariam dele um alvo, então concordaram que nunca um deveria comentar");
    mvprintw(13,5,"do outro, desse modo, ambos estariam seguros.");
    mvprintw(14,5,"     Tharkun então percebe que conseguiria fechar os portais se");
    mvprintw(15,5,"consiguisse reproduzir um tipo de onda similar ao dos portais, todavia");
    mvprintw(16,5,"não sabia como fazer isso.");
    mvprintw(17,5,"     Quando Kyra e Legolas estavam quase terminando de delimitar o");
    mvprintw(18,5,"perímetro, Kyra percebeu que algo na bolsa de Legolas estava piscando, nisso");
    mvprintw(19,5,"ele percebe que o artefato, era um tipo de dispositivo.");
    getch();
    clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha3B(movimento_opcao,resultado_player,resultado_inimigo);
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
               print_batalha3B(movimento_opcao,resultado_player,resultado_inimigo);
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
    mvprintw(1,2,"Batalha Portais");
    mvprintw(3,5,"      O arqueiro pede a mercenária emprestasse seu punhal para adaptá-lo");
    mvprintw(4,5,"ao Arco, fazendo com que agora pudesse disparar flechas explosivas,");
    mvprintw(5,5,"com isso pede para que a mercenária levasse o dispositivo.");
    mvprintw(6,5,"      Kyra, agora com apenas sua Foice e o dispositivo, parte rumo a Tharkun.");
    mvprintw(7,5,"      Nesse ponto, ambos cavaleiros chegam até a entrada da Torre e as");
    mvprintw(8,5,"explosões do alto continuavam.");
    mvprintw(9,5,"      Eis que mercenária chega até Tharkun e mostra o dispositivo de Legolas,");
    mvprintw(10,5,"a feiticeira, espantada com isso, pois era exatamente do que precisava,");
    mvprintw(11,5,"elabora um feitiço que gera uma onda que sela todos os portais.");
    getch();
    pag_atual++;
}
