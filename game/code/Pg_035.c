/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_035(){
        clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha2A(movimento_opcao,resultado_player,resultado_inimigo);
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
               print_batalha2A(movimento_opcao,resultado_player,resultado_inimigo);
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
    mvprintw(1,2,"Batalha Apollyon");
    mvprintw(3,5, "     Apollyon acaba ferindo seriamente Edward após perceber como");
    mvprintw(4,5, "realmente era o estilo de luta do cavaleiro.");
    mvprintw(5,5, "     Só que ainda assim, aquele ataque teria sido fatal ao cavaleiro");
    mvprintw(6,5, "se não possuísse o amuleto dado por Tharkun.");
    mvprintw(7,5, "     Apollyon fica confuso por não ter conseguido matar o cavaleiro com");
    mvprintw(8,5, "seu golpe e lança um ataque ainda mais poderoso contra o cavaleiro.");
    mvprintw(9,5, "     Thorya com seu escudo consegue bloquear o ataque, todavia faz com que");
    mvprintw(10,5,"escudo se despedaçasse quase que por completo.");
    mvprintw(11,5,"     Ainda sim, Thorya continua batalhando contra Apollyon sozinha.");
    getch();
    clear();
        vida_inimigo_atual = vida_inimigo;
        vida_player_atual = vida_player;
        resultado_inimigo = 0;
        resultado_player = 0;
        
        while( vida_inimigo_atual > 0){
        print_batalha2B(movimento_opcao,resultado_player,resultado_inimigo);
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
               print_batalha2B(movimento_opcao,resultado_player,resultado_inimigo);
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
    mvprintw(1,2,"Batalha Apollyon");
    mvprintw(9,5, "     O Líder do Apocalipse então acerta um ataque contra Thorya e");
    mvprintw(10,5, "faz com que ela perca o machado.");
    mvprintw(11,5, "     Agora com Edward extremente ferido, Thorya caída e Legolas ");
    mvprintw(12,5, "não conseguindo alcançar seus amigos..");
    getch();
    pag_atual++;
}
