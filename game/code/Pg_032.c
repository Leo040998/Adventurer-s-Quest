/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_032(){
        
        clear();
        box(stdscr,58,92);
        move(2,1);
        hline(0,15);
        mvprintw(1,2,"Batalha Kraken");
        mvprintw(8,5, "        A batalha se inicia, Tharkun foca seus esforços contra a criatura");
        mvprintw(9,5, "gigante juntamente com  Legolas.");
        mvprintw(10,5,"        Edward, Thorya e Kyra engarregam-se das criaturas marinhas.");
        getch();
        clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha1A(movimento_opcao,resultado_player,resultado_inimigo);
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
               print_batalha1A(movimento_opcao,resultado_player,resultado_inimigo);
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
        mvprintw(1,2,"Batalha Kraken");
        mvprintw(12,5, "        Quando a batalha se aproxima do fim, o Kraken acerta um golpe");
        mvprintw(13,5, "extremamente forte contra Tharkun, derrubando-a.");
        mvprintw(14,5, "        Kraken nesse momento recebe um golpe distante, ainda que");
        mvprintw(15,5, "imperceptível, mas capaz de atordoar a fera.");
        mvprintw(16,5, "        Kyra presta ajuda a feiticeira, enquanto Edward e Thorya fazem");
        mvprintw(17,5, "frente de batalha contra o Monstro.");
        getch();
        clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha1B(movimento_opcao,resultado_player,resultado_inimigo);
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
               print_batalha1B(movimento_opcao,resultado_player,resultado_inimigo);
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
        mvprintw(1,2,"Batalha Kraken");
        mvprintw(8,5, "     A batalha chega ao fim e apesar de árdua, todos saem vitoriosos.");
        mvprintw(9,5, "     Quando o derrotaram, percebem que uma aura negra sai do Kraken e após isso");
        mvprintw(10,5,"ele se dissipa como se nunca estivera ali.");
        getch();
    pag_atual++;
}
