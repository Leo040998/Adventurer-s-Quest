/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */

#include "../header/game.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int v = 0, pag_atual = 0, movimento_opcao = 0, vida_player = 100, vida_inimigo = 100, vida_inimigo_atual, vida_player_atual, acao_inimigo, resultado_inimigo, resultado_player;
bool player_dead = false;
int main(void){
        srand(time(0));
        initscr();
        noecho();
        cbreak();
        curs_set(0);
        nodelay(stdscr,false);
        keypad(stdscr,true);
        wresize(stdscr,23,92);
        int c = 0, menu_opcao = 0;
        while(1){
            print_menu(menu_opcao);
            while (( c = getch()) != (int)'\n'){
               if(c == KEY_DOWN){
                   if(menu_opcao == 2){
                       menu_opcao = 0;
                   } else{
                   menu_opcao++;}
                   }
               if(c == KEY_UP){
                   if(menu_opcao == 0){
                       menu_opcao = 2;
                   } else{
                       menu_opcao--;}
               }
               print_menu(menu_opcao);
        }
        if(menu_opcao == 0){
            
            while(1){
                while(pag_atual >= 0 && pag_atual < 31){
                    ler_pag();
                    c = getch();
                        if(c == KEY_RIGHT){
                            pag_atual++;
                        }
                        if(c == KEY_LEFT){
                            if(pag_atual > 0){
                                pag_atual--;
                            }
                        }
                    }
                Pg_032();
                if (player_dead == true){
                    audio(2);
                    break;
                }
                while(pag_atual >=32 && pag_atual < 34){
                    ler_pag();
                    c = getch();
                        if(c == KEY_RIGHT){
                            pag_atual++;
                        }
                        if(c == KEY_LEFT){
                            if(pag_atual > 32){
                                pag_atual--;
                            }
                        }
                    }
                Pg_035();
                if (player_dead == true){
                    audio(2);
                    break;
                }
                while(pag_atual >= 35 && pag_atual < 53){
                    ler_pag();
                   c = getch();
                        if(c == KEY_RIGHT){
                            pag_atual++;
                        }
                        if(c == KEY_LEFT){
                            if(pag_atual > 35){
                                pag_atual--;
                            }
                        }
                    }
                Pg_054();
                if (player_dead = true){
                    break;
                }
                while(pag_atual >= 54 && pag_atual < 59){
                   ler_pag();
                    c = getch();
                        if(c == KEY_RIGHT){
                            pag_atual++;
                        }
                        if(c == KEY_LEFT){
                            if(pag_atual > 54){
                                pag_atual--;
                            }
                        }
                    }
                Pg_060();
                if (player_dead = true){
                    audio(2);
                    break;
                    
                }
                while(pag_atual >= 60 && pag_atual < 64){
                   ler_pag();
                    c = getch();
                        if(c == KEY_RIGHT){
                            pag_atual++;
                        }
                        if(c == KEY_LEFT){
                            if(pag_atual > 60){
                                pag_atual--;
                            }
                        }
                    }
                }
                Pg_Fim_de_Jogo();
        }
        if(menu_opcao == 1){
             box(stdscr,58,92);
               move(2,1);
               hline(0,10);
               mvprintw(1,2,"Instruções");
               mvprintw(4,8, "      O jogo se baseia em explorar a história e com o decorrer da aventura,");
               mvprintw(5,8, "interagir em batalhas épicas, utilizando janelas de ataque e defesa.");
               mvprintw(7,8, "      Para interagir entre as páginas, basta utilizar as setas direcionais,");
               mvprintw(8,8, "esquerda para retroceder e direita para avançar.");
               mvprintw(10,8, "     Para sair abruptamente do jogo, basta pressionar (Ctrl + C).");
               mvprintw(11,8,"Resolução de tela recomendada, 92 x 23, para enquadrar as janelas.");
               mvprintw(13,8,"      Apesar de não possuir um sitema robusto, os movimentos de ataque e");
               mvprintw(14,8,"são feitos a partir de probabilidades, construindo uma batalha diferente a");
               mvprintw(15,8,"a cada vez jogada.");
               mvprintw(17,8,"   Boa Sorte!!");
               getch();
               
        }
        if(menu_opcao == 2){
            break;}
        }
        
        endwin();
        return(0);
}
