/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */

#include "../header/game.h"
#include <signal.h>
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
                break;
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

void ler_pag(){
    if (pag_atual == 0){
        Pg_001();
    }
    if (pag_atual == 1){
        Pg_002();
    }
    if (pag_atual == 2){
        Pg_003();
    }
    if (pag_atual == 3){
        Pg_004();
    }
    if (pag_atual == 4){
        Pg_005();
    }
    if (pag_atual == 5){
        Pg_006();
    }
    if (pag_atual == 6){
        Pg_007();
    }
    if (pag_atual == 7){
        Pg_008();
    }
    if (pag_atual == 8){
        Pg_009();
    }
    if (pag_atual == 9){
        Pg_010();
    }
    if (pag_atual == 10){
        Pg_011();
    }
    if (pag_atual == 11){
        Pg_012();
    }
    if (pag_atual == 12){
        Pg_013();
    }
    if (pag_atual == 13){
        Pg_014();
    }
    if (pag_atual == 14){
        Pg_015();
    }
    if (pag_atual == 15){
        Pg_016();
    }
    if (pag_atual == 16){
        Pg_017();
    }
    if (pag_atual == 17){
        Pg_018();
    }
    if (pag_atual == 18){
        Pg_019();
    }
    if (pag_atual == 19){
        Pg_020();
    }
    if (pag_atual == 20){
        Pg_021();
    }
    if (pag_atual == 21){
        Pg_022();
    }
    if (pag_atual == 22){
        Pg_023();
    }
    if (pag_atual == 23){
        Pg_024();
    }
    if (pag_atual == 24){
        Pg_025();
    }
    if (pag_atual == 25){
        Pg_026();
    }
    if (pag_atual == 26){
        Pg_027();
    }
    if (pag_atual == 27){
        Pg_028();
    }
    if (pag_atual == 28){
        Pg_029();
    }
    if (pag_atual == 29){
        Pg_030();
    }
    if (pag_atual == 30){
        Pg_031();
    }
    if (pag_atual == 32){
        Pg_033();
    }
    if (pag_atual == 33){
        Pg_034();
    }
    if (pag_atual == 35){
        Pg_036();
    }
    if (pag_atual == 36){
        Pg_037();
    }
    if (pag_atual == 37){
        Pg_038();
    }
    if (pag_atual == 38){
        Pg_039();
    }
    if (pag_atual == 39){
        Pg_040();
    }
    if (pag_atual == 40){
        Pg_041();
    }
    if (pag_atual == 41){
        Pg_042();
    }
    if (pag_atual == 42){
        Pg_043();
    }
    if (pag_atual == 43){
        Pg_044();
    }
    if (pag_atual == 44){
        Pg_045();
    }
    if (pag_atual == 45){
        Pg_046();
    }
    if (pag_atual == 46){
        Pg_047();
    }
    if (pag_atual == 47){
        Pg_048();
    }
    if (pag_atual == 48){
        Pg_049();
    }
    if (pag_atual == 49){
        Pg_050();
    }
    if (pag_atual == 50){
        Pg_051();
    }
    if (pag_atual == 51){
        Pg_052();
    }
    if (pag_atual == 52){
        Pg_053();
    }
    if (pag_atual == 54){
        Pg_055();
    }
    if (pag_atual == 55){
        Pg_056();
    }
    if (pag_atual == 56){
        Pg_057();
    }
    if (pag_atual == 57){
        Pg_058();
    }
    if (pag_atual == 58){
        Pg_059();
    }
    if (pag_atual == 60){
        Pg_061();
    }
    if (pag_atual == 61){
        Pg_062();
    }
    if (pag_atual == 62){
        Pg_063();
    }
    if (pag_atual == 63){
        Pg_064();
    }
}

void print_menu(int menu_opcao){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Menu");
    mvprintw(4,30, "Adventurer's Quest");
    mvprintw(8,27, "1 - Começo da Aventura");
    mvprintw(11,27,"2 - Instruções");
    mvprintw(14,27,"3 - Sair");
    if(menu_opcao == 0){
        mvprintw(8,23, "-->");
        refresh();
    }
    if(menu_opcao == 1){
        mvprintw(11,23,"-->");
        refresh();
    }
    if(menu_opcao == 2){
        mvprintw(14,23,"-->");
        refresh();
        }
}

void print_batalha1A(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(3,65,"Kraken = %d",vida_inimigo_atual);
    mvprintw(4,25, "       /|             /|___/|___/|__/|                 ");
    mvprintw(5,25, "      | |             |              |      /|         ");
    mvprintw(6,25, "      |_|    /|  /|   |   [:]  [:]   |     |_|    /|   ");
    mvprintw(7,25, "       ||_  |_| |_|   |_ [:]    [:] _|      ||   |_|   ");
    mvprintw(8,25, "       |_ |  ||  || /|  |_^^^___^^^_|   /|  ||  __||   ");
    mvprintw(9,25, "         ||_ ||  |||_|    | |VVV| |    |_|  || | __|   ");
    mvprintw(10,25,"         | |_||__||_||____|_|^_^|_|_____||__||_| |___  ");
    mvprintw(11,25,"         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    mvprintw(12,4," _______       ____     ");
    mvprintw(13,4," |_* *_|      / __ |    ");
    mvprintw(14,4," |_ * _|      |/  ||  /|");
    mvprintw(15,4,"  |___|       |   || /_|");
    mvprintw(16,4,"   |_|        |   ||  ||");
    mvprintw(17,4,"   |_|       /|___//  ||");
    mvprintw(18,4,"   |_|       |____/  /_|");
    mvprintw(20,4," Tharkun = %d Legolas = %d",vida_player_atual,vida_player_atual);
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void print_batalha1B(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(3,65,"Kraken = %d",vida_inimigo_atual);
    mvprintw(4,35, " /|            /|___/|___/|__/|               ");
    mvprintw(5,35, "| |            |              |      /|       ");
    mvprintw(6,35, "|_|   /|  /|   |   [:]  [:]   |     |_|    /| ");
    mvprintw(7,35, "||_  |_| |_|   |_ [:]    [:] _|      ||   |_| ");
    mvprintw(8,35, "|_|  ||  || /|  |_^^^___^^^_|   /|  ||  __||  ");
    mvprintw(9,35, " ||_ ||  |||_|    | |VVV| |    |_|  || | __|  ");
    mvprintw(10,35," | |_||__||_||____|_|^_^|_|_____||__||_| |___ ");
    mvprintw(11,35,"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    mvprintw(12,4,"     /|        ____________   ");
    mvprintw(13,4,"    / |        | _____  _//   ");
    mvprintw(14,4,"    | |        |_/|_| |_//    ");
    mvprintw(15,4,"    | |           |_| |//     ");
    mvprintw(16,4,"  |_|_|_|         |_| |/      ");
    mvprintw(17,4,"  '|_ _|'         |_|         ");
    mvprintw(18,4,"    |_|           |/          ");
    mvprintw(20,4,"  Edward = %d   Thorya = %d   ",vida_player_atual,vida_player_atual);
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void print_batalha2A(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(4,65,"Apollyon = %d",vida_inimigo_atual);
    mvprintw(5,25, "                              /|     /|            *    ");
    mvprintw(6,25, "                ~~ ~~ ~~     /_|____/_|        *  * *   ");
    mvprintw(7,25, "             ~~ ~~~ ~~ ~~~~~|_ ^ _ = _|     *        *  ");
    mvprintw(8,25, "               ~~~ ~~ ~~~~~~|_[0]_[0]_|            *    ");
    mvprintw(9,25, "             ~~~~~ ~~~~ ~~~~|_ _ | _ _|        *    *   ");
    mvprintw(10,25,"               ~~~~ ~~~~      |_|_|_|              *   *");
    mvprintw(11,4,"     /|        ____________   ");
    mvprintw(12,4,"    / |        | _____  _//   ");
    mvprintw(13,4,"    | |        |_/|_| |_//    ");
    mvprintw(14,4,"    | |           |_| |//     ");
    mvprintw(15,4,"    | |           |_| |/      ");
    mvprintw(16,4,"  |_|_|_|         |_|         ");
    mvprintw(17,4,"  '|_ _|'         |_|         ");
    mvprintw(18,4,"    |_|           |/          ");
    mvprintw(20,4,"  Edward  = %d   Thorya = %d  ",vida_player_atual,vida_player_atual);
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void print_batalha2B(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(4,65,"Apollyon = %d",vida_inimigo_atual);
    mvprintw(5,25, "                              /|     /|            *    ");
    mvprintw(6,25, "                ~~ ~~ ~~     /_|____/_|        *  * *   ");
    mvprintw(7,25, "             ~~ ~~~ ~~ ~~~~~|_ ^ _ = _|     *        *  ");
    mvprintw(8,25, "               ~~~ ~~ ~~~~~~|_[0]_[0]_|            *    ");
    mvprintw(9,25, "             ~~~~~ ~~~~ ~~~~|_ _ | _ _|        *    *   ");
    mvprintw(10,25,"               ~~~~ ~~~~      |_|_|_|              *   *");
    mvprintw(11,25,"                         <<<<==========>>>>>            ");
    mvprintw(12,4,"    ____________  ");
    mvprintw(13,4,"    | _____  _//  ");
    mvprintw(14,4,"    |_/|_| |_//   ");
    mvprintw(15,4,"       |_| |//    ");
    mvprintw(16,4,"       |_| |/     ");
    mvprintw(17,4,"       |_|        ");
    mvprintw(18,4,"       |_|        ");
    mvprintw(19,4,"       |/         ");
    mvprintw(20,4,"     Thorya = %d  ",vida_player_atual);
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void print_batalha3A(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(4,65,"Criaturas = %d",vida_inimigo_atual);
    mvprintw(5,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(6,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(7,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(8,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(9,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(10,25,"             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(11,4,"                 ____      ");
    mvprintw(12,4,"     /|         /*__ |     ");
    mvprintw(13,4,"    / |        *|/  ||   * ");
    mvprintw(14,4,"    | |         |*  ||  */|");
    mvprintw(15,4,"    | |        *|   || */_|");
    mvprintw(16,4,"  |_|_|_|       |*  ||  *||");
    mvprintw(17,4,"  '|_ _|'     */|___//  *||");
    mvprintw(18,4,"    |_|        |*___/  */_|");
    mvprintw(20,4,"  Edward = %d  Karthos = %d",vida_player_atual,vida_player_atual);
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(movimento_opcao == 2){
        mvprintw(19,66,"-->");
        refresh();
        }
        if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void print_batalha3B(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(4,65,"Apollyon = %d",vida_inimigo_atual);
    mvprintw(5,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(6,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(7,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(8,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(9,25, "             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(10,25,"             *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    mvprintw(11,4,"  *   ____  *   ");
    mvprintw(12,4," *   / __ |   *  ");
    mvprintw(13,4," *   |/  ||    * ");
    mvprintw(14,4," *   |   ||  /| *");
    mvprintw(15,4," *   |   || /_| *");
    mvprintw(16,4," *   |   ||  || *");
    mvprintw(17,4," *  /|___//  || *");
    mvprintw(18,4,"  * |____/  /_| *");
    mvprintw(20,4,"    Legolas = %d  ",vida_player_atual);
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void print_batalha4A(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(4,65,"Kraken = %d",vida_inimigo_atual);
    mvprintw(4,25, "       /|             /|___/|___/|__/|                 ");
    mvprintw(5,25, "      | |             |              |      /|         ");
    mvprintw(6,25, "      |_|    /|  /|   |   [:]  [:]   |     |_|    /|   ");
    mvprintw(7,25, "       ||_  |_| |_|   |_ [:]    [:] _|      ||   |_|   ");
    mvprintw(8,25, "       |_ |  ||  || /|  |_^^^___^^^_|   /|  ||  __||   ");
    mvprintw(9,25, "         ||_ ||  |||_|    | |VVV| |    |_|  || | __|   ");
    mvprintw(10,25,"         | |_||__||_||____|_|^_^|_|_____||__||_| |___  ");
    mvprintw(11,25,"         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    mvprintw(11,4,"                 ____________   ");
    mvprintw(12,4,"                *| _____  _//*  ");
    mvprintw(13,4,"  /|     /|_/|  *|_/|_|*|_//*   ");
    mvprintw(14,4,"  || ____| oo|_  * *|_|*|//*    ");
    mvprintw(15,4,"   |_   __ |vvv    *|_|*|/*     ");
    mvprintw(16,4,"   |_|__|__|       *|_| *       ");
    mvprintw(17,4,"   |/|/|/|/        *|_|*        ");
    mvprintw(18,4,"                   *|/ *        ");
    mvprintw(20,4,"   FENRIR  = %d    Thorya = %d  ",vida_player_atual,vida_player_atual);
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void print_batalha4B(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(4,65,"Fenix = %d",vida_inimigo_atual);
    mvprintw(4,25, "         /|                           /| /|          ");
    mvprintw(5,25, "        | |/|    /|      _A_   /|    / |/ |/|        ");
    mvprintw(6,25, "    *   |   |/| / | /|  {0'0} / |/| /  |  | |      * ");
    mvprintw(7,25, "     *  |     |/  |/ |___| |_/    |/        |     *  ");
    mvprintw(8,25, "   *    |/|                                 /    *   ");
    mvprintw(9,25, "    *     |/|    |                    |    /      *  ");
    mvprintw(10,25,"    *       |/| /|     /|     /|     /|   /   *      ");
    mvprintw(11,25,"              |/ |/|/|/ |/|/|/ |/|/|/ |/|/           ");
    mvprintw(11,4,"    * * *        ___    ");
    mvprintw(12,4,"   * /| *     * |*_*| * ");
    mvprintw(13,4,"  * / | *    * *|_*_|* *");
    mvprintw(14,4,"  * | | *     * |*_*| * ");
    mvprintw(15,4,"  * | | *        |_|    ");
    mvprintw(16,4,"  |_|_|_|        |_|    ");
    mvprintw(17,4,"  '|_ _|'        |_|    ");
    mvprintw(18,4,"    |_|          |_|    ");
    mvprintw(20,4,"  Karthos = %d Tharkun = %d  ",vida_player_atual,vida_player_atual);
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void print_batalha4C(int movimento_opcao, int resultado_player, int resultado_inimigo){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Batalha");
    mvprintw(4,65,"Tlaloc = %d",vida_inimigo_atual);
    mvprintw(4,25, "           ____     _____   .............      _____    ____  ");
    mvprintw(5,25, "           |--|_____|---|  /|/|/|/|/|/|/|      |---|____|--|  ");
    mvprintw(6,25, "           |>>/|__>>|__/|  @=@=@=@=@=@=@=@     |<</|__<<|_/|  ");
    mvprintw(7,25, "           |>/_|__>>|_/>|  @  ~~     ~~  @     |</_|__<<|/<|  ");
    mvprintw(8,25, "           |/__|____|/__|  @  (*)   (*)  @     |/__|____|__|  ");
    mvprintw(9,25, "               ||||/       @     + +     @          |||/      ");
    mvprintw(10,25,"               |||/=@=@------@  ''''''  @-------@=@=||/       ");
    mvprintw(11,25,"               |||=@=@=@---@=@=@=@=@=@=@=@---@=@=@=|/         ");
    mvprintw(11,4," ___________  *   ____  *   ");
    mvprintw(12,4," |   _____|/ *   / __ |   *  ");
    mvprintw(13,4," |_ /|/|/|/  *   |/  ||    * ");
    mvprintw(14,4,"  |_|        *   |   ||  /| *");
    mvprintw(15,4,"  |_|        *   |   || /_| *");
    mvprintw(16,4,"  |_|        *   |   ||  || *");
    mvprintw(17,4,"  |_|        *  /|___//  || *");
    mvprintw(18,4,"  |/          * |____/  /_| *");
    mvprintw(20,4,"  Kyra  = %d    Legolas = %d  ",vida_player_atual,vida_player_atual); 
    mvprintw(17,70,"1 - Ataque");
    mvprintw(18,70,"2 - Defesa");
    if(movimento_opcao == 0){
        mvprintw(17,66, "-->");
        refresh();
    }
    if(movimento_opcao == 1){
        mvprintw(18,66,"-->");
        refresh();
    }
    if(resultado_player == 1){
        mvprintw(14,55,"Party errou o ataque");
    }
    else if(resultado_player == 10){
        mvprintw(14,55,"Party atacou com sucesso");
    }
    else if(resultado_player == 2){
        mvprintw(14,55,"Party errou a defesa");
    }
    else if(resultado_player == 20){
        mvprintw(14,55,"Party defendeu com sucesso");
    }
    if(resultado_inimigo == 1){
        mvprintw(15,55,"Inimigo errou o ataque");
    }
    else if(resultado_inimigo == 10){
        mvprintw(15,55,"Inimigo atacou com sucesso");
    }
    else if(resultado_inimigo == 2){
        mvprintw(15,55,"Inimigo errou a defesa");
    }
    else if(resultado_inimigo == 20){
        mvprintw(15,55,"Inimigo defendeu com sucesso");
    }
}

void Pg_001(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "   Nossa aventura começa no fim de uma noite chuvosa, mal sabiam eles que");
       mvprintw(5,8, "uma catástrofe estava prestes a acontecer. Um ritual antigo iria acontecer");
       mvprintw(6,8, "não muito distante da Província de Ark.");
       mvprintw(8,8, "   Nas Montanhas da Perdição, o Titã Louco continua sua insaciável busca");
       mvprintw(9,8, "por vingança, mas ainda necessitando das Armas Lendárias para realizar");
       mvprintw(10,8,"seus planos, capazes até mesmo controlar antigas feras mistícas.");
       mvprintw(12,8,"   Armas extremamente poderosas e antigas, espalhadas por todas as Cinco");
       mvprintw(13,8,"Províncias de Lundavik.");
       mvprintw(16,8,"   Sendo elas:");
}

void Pg_002(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,25,  "Lumnus    -Terra dos Antigos Elfos");
       mvprintw(7,25,  "Domnus    - Província dos Reis");
       mvprintw(10,25, "Ark       - Terra dos Desolados");
       mvprintw(13,25, "Vitkan    - Terra dos Guardiões");
       mvprintw(16,25, "Krakia    - Ilha dos Navegadores");
}

void Pg_003(){
    
    clear();
        
    box(stdscr,58,92);
    mvprintw(6,8,  "                 _____                   ");         
    mvprintw(7,8,  "                /     |                  ");
    mvprintw(8,8,  "         /|    /      /                  ");
    mvprintw(9,8,  "        / |___/  1   /                   ");
    mvprintw(10,8, "        |     |     /   ___              ");
    mvprintw(11,8, "   ___  | 2  _|    /   /   |             ");
    mvprintw(12,8, "  /  /  |   _|____/____| 4 |             ");
    mvprintw(13,8, "  |5/   |  / |      |______|             ");
    mvprintw(14,8, "  |/    | /  |   3         /             ");
    mvprintw(15,8, "        |/   |  ________  /              ");
    mvprintw(16,8, "             | /       | /               ");
    mvprintw(17,8, "             |/        |/                ");
    mvprintw(4,40, "1) Lumnus    -Terra dos Antigos Elfos");
    mvprintw(5,40, "2) Domnus    - Província dos Reis");
    mvprintw(6,40, "3) Ark       - Terra dos Desolados");
    mvprintw(7,40, "4) Vitkan    - Terra dos Guardiões");
    mvprintw(8,40, "5) Krakia    - Ilha dos Navegadores");
}

void Pg_004(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8,  "     Essas províncias, com o decorrer de eras sofreram diversas mudanças,");
       mvprintw(5,8,  "já que algumas prosperamam imensamente. Enquanto outras se encontram");
       mvprintw(6,8,  "em extrema miséria e decadência. Mas o evento que estava prestes a");
       mvprintw(7,8,  "ocorrer se tratava do Colapso,um evento que seria responsável por reunir");
       mvprintw(8,8,  "Líderes de todos os Antigos Reinos.");
       mvprintw(10,8, "     Mas para entender melhor o que estava acontecendo, é necessário");
       mvprintw(11,8, "entender o que foi o Sacrifício de Merlin e o que era Mythicos.");
       mvprintw(13,8, "     Mythicos foi o lar das Antigas Criaturas que antes habitavam Lundavik");
       mvprintw(14,8, "e estariam habitando até hoje se não fosse pelo Sacríficio de Merlin,");
       mvprintw(15,8, "trabalho mais importante de Merlin que foi banir todas as criaturas ");
       mvprintw(16,8, "consideradas por ele prejudiciais a Lundavik e selá-las em outra dimensão,");
       mvprintw(17,8, "Mythicos.");
}

void Pg_005(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8,  "     Foi então que o Colapso se iniciava, o Titã quebra o selo fazendo com ");
       mvprintw(5,8,  "que criaturas como Fênix e Kraken fossem libertas.");
       mvprintw(8,8,  "     Mesmo com o feitiço de Merlin tendo sido quebrado, ele ainda foi capaz");
       mvprintw(9,8,  "de evitar a saída de mais feras.");
       mvprintw(12,8, "     Mas ainda assim, Cinco delas escaparam e formaram um grupo chamado");
       mvprintw(13,8, "Perdições do Infinito, sendo elas:");
}

void Pg_006(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "         /|                           /| /|                   ");
       mvprintw(5,8, "        | |/|    /|      _A_   /|    / |/ |/|                 ");
       mvprintw(6,8, "    *   |   |/| / | /|  {0'0} / |/| /  |  | |      *          ");
       mvprintw(7,8, "     *  |     |/  |/ |___| |_/    |/        |     *           ");
       mvprintw(8,8, "   *    |/|                                 /    *            ");
       mvprintw(9,8, "    *     |/|    |                    |    /      *           ");
       mvprintw(10,8,"    *       |/| /|     /|     /|     /|   /   *               ");
       mvprintw(11,8,"              |/ |/|/|/ |/|/|/ |/|/|/ |/|/                    ");
       mvprintw(12,10, "Fênix");
       mvprintw(14,10,  "    - Pássaro de Fogo que quando morria, entrava em auto-combustão");
       mvprintw(15,10, "e com o passar de algum tempo, renascia de suas próprias cinzas.");
       mvprintw(16,10,  "    Além de possuir imensa força e capacidade de transportar cargas muito");
       mvprintw(17,10, "pesadas em voo, tinha a habilidade de se transformar em uma Ave de Fogo.");
       mvprintw(18,10,  "    Apesar de raras aparições, a Ave já foi sinal de Alegria e");
       mvprintw(19,10, "Prosperidade, ainda que possa ser comparada a uma Força da Natureza,");
       mvprintw(20,10, "Merlin optou por baní-la, devido a seu potencial destrutivo.");
}

void Pg_007(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "           ____     _____   .............      _____    ____                    ");
       mvprintw(5,8, "           |--|_____|---|  /|/|/|/|/|/|/|      |---|____|--|                    ");
       mvprintw(6,8, "           |>>/|__>>|__/|  @=@=@=@=@=@=@=@     |<</|__<<|_/|                    ");
       mvprintw(7,8, "           |>/_|__>>|_/>|  @  ~~     ~~  @     |</_|__<<|/<|                    ");
       mvprintw(8,8, "           |/__|____|/__|  @  (*)   (*)  @     |/__|____|__|                    ");
       mvprintw(9,8, "               ||||/       @     + +     @          |||/                        ");
       mvprintw(10,8,"               |||/=@=@------@  ''''''  @-------@=@=||/                         ");
       mvprintw(11,8,"               |||=@=@=@---@=@=@=@=@=@=@=@---@=@=@=|/                           ");
       mvprintw(12,10, "Tlaloc");
       mvprintw(14,10, "    - Deus da Chuva ou Aquele que descansa sobre a Terra, Senhor do Raio");
       mvprintw(15,10, "e do Trovão, Antigo Deus Asteca que apesar de ter sido o provedor de");
       mvprintw(16,10, "chuvas e símbolo de fertilidade por muitas eras.");
       mvprintw(18,10, "    Acabou se rebelando contra as Províncias depois do extermínio das");
       mvprintw(19,10, "antigas tribos Astecas. Após ser detido por Merlin, optou pelo Exílio");
       mvprintw(20,10, "em Mythicos.");
}
    
void Pg_008(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "                                                              ");
       mvprintw(5,8, "                              /|     /|            *          ");
       mvprintw(6,8, "                ~~ ~~ ~~     /_|____/_|        *  * *  *      ");
       mvprintw(7,8, "             ~~ ~~~ ~~ ~~~~~|_ ^ _ = _|     *        *     *  ");
       mvprintw(8,8, "               ~~~ ~~ ~~~~~~|_[0]_[0]_|            *   *  *   ");
       mvprintw(9,8, "             ~~~~~ ~~~~ ~~~~|_ _ | _ _|        *    *         ");
       mvprintw(10,8,"               ~~~~ ~~~~      |_|_|_|              *    *     ");
       mvprintw(11,8,"                         <<<<==========>>>>>                  ");
       mvprintw(12,9, "Apollyon");
       mvprintw(14,8, "     - Um Demônio, mais conhecido como Abaddon ou Rei do Abismo, ");
       mvprintw(15,8, "comandante de um enorme exército de gafanhotos.");
       mvprintw(16,8, "     Apesar de não aparentar ser tão destrutivoquanto os anteriores,");
       mvprintw(17,8, "essa entidade foi uma das mais complexas para Merlin, visto que não se");
       mvprintw(18,8, "tratava de um demônio qualquer, mas sim de um Anjo que se rebelou e"); 
       mvprintw(19,8, "trouxe devastação após a Abertura do Poço do Abismo. Porém como");
       mvprintw(20,8, "um dos seus últimos feitos, Merlin foi capaz de banir o demônio, também");
       mvprintw(21,8, "conhecido como Líder do Apocalipse.");
}

void Pg_009(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "       /|             /|___/|___/|__/|                        ");
       mvprintw(5,8, "      | |             |              |      /|                ");
       mvprintw(6,8, "      |_|    /|  /|   |   [:]  [:]   |     |_|    /|          ");
       mvprintw(7,8, "       ||_  |_| |_|   |_ [:]    [:] _|      ||   |_|          ");
       mvprintw(8,8, "       |_ |  ||  || /|  |_^^^___^^^_|   /|  ||  __||          ");
       mvprintw(9,8, "         ||_ ||  |||_|    | |VVV| |    |_|  || | __|          ");
       mvprintw(10,8,"         | |_||__||_||____|_|^_^|_|_____||__||_| |___         ");
       mvprintw(11,8,"         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^       ");
       mvprintw(12,9, "Kraken");
       mvprintw(14,8, "     - Espécie de Lula ou Polvo Gigante que ameaçava navios,");
       mvprintw(15,8, "     Tinha a fama de destruidor de navios, todavia só atacava àqueles");
       mvprintw(16,8, "que poluíam os mares e navios piratas. Após uma de suas expedições,");
       mvprintw(17,8, "     Merlin acaba se deparando com o Kraken. Após uma intensa batalha,");
       mvprintw(18,8, "Merlin chega a conclusão que deveria baní-lo, apesar de perceber o real"); 
       mvprintw(19,8, "motivo de seus ataques.");
}

void Pg_010(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(3,9, "Fenrir");
       mvprintw(4,8, "      - Lobo monstruoso, filho de Loki, que possui a Serpente de Midgard e");
       mvprintw(5,8, "Hel (a própria Morte) como irmãs. Após Odin perceber que as crianças de");
       mvprintw(6,8, "Loki iriam trazer problemas para os deuses, o Pai de Todos lança a Serpente");
       mvprintw(7,8, "nas profundezas do mar, envia Hel para profundezas de Nilfheim, que posteriormente");
       mvprintw(8,8, "viria a se chamar Helheim, além de pedir que o Lobo fosse levado.");
       mvprintw(9,8, "      Após duas vezes, Fenrir concordar em ser acorrentado e pelas duas");
       mvprintw(10,8,"vezes libertar-se facilmente. Odin pede ajuda aos anões, então, e eles");
       mvprintw(11,8,"fazem um grilhão macio e especial capaz de segurar a fera.");
       mvprintw(12,8,"      Nisso, em uma ilha deserta, desafiam-no a quebrar o grilhão.");
       mvprintw(13,8,"Percebendo a armadilha, o lobo concorda, mas com a condição de que um dos");
       mvprintw(14,8,"deuses pusesse a mão em sua boca, como sinal de confiança. Assim, Tyr");
       mvprintw(15,8,"enfiou a mão direita entre as mandíbulas do terrível monstro.");
       mvprintw(16,8,"      Amarraram-no, mas dessa vez quanto mais puxava, mais se apertava em"); 
       mvprintw(17,8,"seu pescoço. Furioso, ele fechou vigorosamente suas enormes mandíbulas e");
       mvprintw(18,8,"arrancou a mão do deus. Acorrentado até o Ragnarok, Fenrir irá se soltar");
       mvprintw(19,8,"e causar uma enorme devastação, antes de devorar o próprio Odin.");
       mvprintw(20,8,"      Todavia quando Merlin teve conhecimento da situação, ofereceu");
       mvprintw(21,8,"liberdade à Fenrir contanto que ele não voltasse mais para Lundavik.");
}

void Pg_011(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "                                                                 ");
       mvprintw(5,8, "                                                                 ");
       mvprintw(6,8, "                                                     FENRIR      ");
       mvprintw(7,8, "                                                    ^^^^^^^^     ");
       mvprintw(8,8, "        __/|                /|                         ");
       mvprintw(9,8, "      _/ _/                / |_/|/|                    ");
       mvprintw(10,8,"     /  /    /|    /|   /| |  __  |                    ");
       mvprintw(11,8,"     |_ |_/|/ |/|_/ |/|/ |_| |()| |_____               ");
       mvprintw(12,8,"      |      _ _ _      _    ^^^__|__.._|              ");
       mvprintw(13,8,"      |_    /|      /|       |^^^^^|/^^|/              ");
       mvprintw(14,8,"      |_   ^|/^    ^|/^      |/|_/|                    ");
       mvprintw(15,8,"      |     ^ ______^      _______/                    ");
       mvprintw(16,8,"      |_   /  /      |_   /  /                         ");
       mvprintw(17,8,"      |_  /  /       |_  /  /                          ");
       mvprintw(18,8,"      |_>>|_>>       |_>>|_>>                          ");
       mvprintw(19,8,"    ======================================             ");
       mvprintw(20,8,"                                                       ");
}

void Pg_012(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(8,8,  "     Só que como foi mencionado antes, uma Equipe de bravos guerreiros");
       mvprintw(9,8,  "que uniram suas forças para impedir o Titã.");
       mvprintw(13,8,  "     Sendo eles:");
}

void Pg_013(){
    
    clear();
    
    box(stdscr,58,92);
    mvprintw(2,8,  "  _________   _     ______________________"); 
    mvprintw(3,8,  "  |_ *    /__/_|___/    *     *  *     _|/");
    mvprintw(4,8,  "    |_* * *  _____        *     * *   _|/  "); 
    mvprintw(5,8,  "      |_ * _/|__| |_       *    *    _|/   "); 
    mvprintw(6,8,  "        |_/  |__|  |_       * *  *  _|/    ");         
    mvprintw(7,8,  "             |__|    |_     *    * _|/     ");
    mvprintw(8,8,  "             |__|     |_     *    _|/      ");
    mvprintw(9,8,  "             |__|      |_     *  _|/       ");
    mvprintw(10,8, "             |__|       |_    * _|/        Machado");
    mvprintw(11,8, "             |__|        |_  * _|/         ");
    mvprintw(12,8, "             |__|         |_ _|/           Viking");
    mvprintw(13,8, "             |__|          |_|/            ");
    mvprintw(14,8, "             |__|           |/             ");
    mvprintw(15,8, "             |__|                          ");
    mvprintw(16,8, "             |__|                          ");
    mvprintw(17,8, "             |__|                          ");
    mvprintw(18,8, "             |__|                          ");
    mvprintw(19,8, "              |/                           ");
}

void Pg_014(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(7,8,  "Thorya");
       mvprintw(9,8, "     - Guerreira Viking e Líder da Equipe, portava o Machado Kripto e");
       mvprintw(10,8, "o Escudo de Vitae.");
       mvprintw(12,8, "     O Machado foi dado como herança de família, entregado à ela após");
       mvprintw(13,8, "o falecimento de seu pai, Thron.");
       mvprintw(15,8, "     Enquanto o Escudo foi dado por sua mãe, no dia em que todo o");
       mvprintw(16,8, "caos se iniciava, sendo que este havia sido forjado por antigos elfos,");
       mvprintw(17,8, "dado no dia de seu casamento.");
       mvprintw(19,8, "     A guerreira apesar de cabeça-dura, sempre demonstrou liderança");
       mvprintw(20,8, "e esperteza em suas ações.");
}

void Pg_015(){

    clear();
    
    box(stdscr,58,92);
    mvprintw(2,8,  "                      ___                    "); 
    mvprintw(3,8,  "           *        __| |__        *         ");
    mvprintw(4,8,  "                  _|  _|_  |_     *          "); 
    mvprintw(5,8,  "           *     _|  _| |_  |_      *        "); 
    mvprintw(6,8,  "          *      |  _|   |_  |      *        ");         
    mvprintw(7,8,  "          *      |_ |_ _ _| _|               ");
    mvprintw(8,8,  "         *       |  _|   |_  |     *         ");
    mvprintw(9,8,  "          *      |_ |_ _ _| _|    *          ");
    mvprintw(10,8, "          *      |  _|   |_  |    *        Espada");
    mvprintw(11,8, "         *       |_ |_ _ _| _|      *        ");
    mvprintw(12,8, "                 |  _|   |_  |    *        Cavaleiro");
    mvprintw(13,8, "          __     |_ |_ _ _| _|    __         ");
    mvprintw(14,8, "          ||_____|___| _ |___|____||         ");
    mvprintw(15,8, "           '||||||  |_____|   |||||'         ");
    mvprintw(16,8, "            '''''|___________|''''           ");
    mvprintw(17,8, "                 '''|_ _ _|'''               ");
    mvprintw(18,8, "                    |_ _ _|                  ");
    mvprintw(19,8, "                    |_____|                  ");
}

void Pg_016(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(3,8,  "Edward");
       mvprintw(4,8,  "     - Cavaleiro Espadachim e Tanque da Equipe, portava uma espada incrivelmente");
       mvprintw(5,8,  "forte além de um amuleto brilhante e poderoso também.");
       mvprintw(6,8,  "     Sempre foi muito bem reconhecido no campo de batalha por sempre se destacar");
       mvprintw(7,8,  "pela sua espada, Pérola Negra, se não fosse por isso,seu chapéu brilhante");
       mvprintw(8,8,  "confirmava sua presença, onde pendurava um amuleto, responsável pela luz");
       mvprintw(9,8,  "branca emanada, que era conhecido como Vingança da Rainha, que lhe garantia");
       mvprintw(10,8, "benefícios como perceber armadilhas e possíveis situações de risco.");
       mvprintw(11,8, "     Porém, sua história não teve um começo tão brilhante, quando ainda");
       mvprintw(12,8, "criança foi um dos poucos sobreviventes do Incêndio de Lukaria, uma das");
       mvprintw(13,8, "cidades mais renomadas de Domnus antigamente. Porém, após o desastre,");
       mvprintw(14,8, "apenas cinzas podem ser encontradas na localidade.");
       mvprintw(15,8, "     Com isso, ainda pequeno se tornou orfão e acabou optando por roubos e");
       mvprintw(16,8, "furtos a fim de ter o que comer, já que ninguém o ajudou quando ele mais");
       mvprintw(17,8, "precisava. Mas essa realidade mudou quando ele acabou preso em um de seus");
       mvprintw(18,8, "golpes, fazendo com que ele conhecesse Jack.");
       mvprintw(19,8, "     Isso mesmo, o famoso pirata Jack, responsável por inúmeros saques");
       mvprintw(20,8, "e que nunca havia sido pego, mas essa realidade teve que ser mudada.");
}

void Pg_017(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(3,8,  "Edward");
       mvprintw(5,8, "      Para evitar com que dois de seus companheiros fossem enforcados");
       mvprintw(6,8, "na praça de Domnus, famoso capitão acabou se entregando a fim de");
       mvprintw(7,8,"resgatar sua tripulação.");
       mvprintw(8,8, "      Após a fuga de Domnus, Jack acabou acolhendo Edward. Com o tempo a");
       mvprintw(9,8, "amizade e a parceria deles foi apenas aumentando, chegando a tal ponto,");
       mvprintw(10,8, "onde a irmandade dos dois parecia existir há muito tempo.");
       mvprintw(11,8,"      Jack, então, ensinou-o tudo o que sabia, desde golpes a truques, mas");
       mvprintw(12,8,"principalmente sobre honra, apesar de ser um pirata, poucos puderam equiparar-se");
       mvprintw(13,8,"à honra do famoso Capitão Jack.");
       mvprintw(14,8,"      Com o tempo, Jack percebeu que Edward seria seu Legado e acima de tudo");
       mvprintw(15,8,"desejava que seu irmão tivesse melhores condições de vida que ele poderia");
       mvprintw(16,8,"oferecer, foi então que decidiu enviar Edward para Acadêmia de Cavaleiros.");
       mvprintw(17,8,"      Apesar dele não ter concordado, Edward acabou indo para Domnus com");
       mvprintw(18,8,"o propósito de se tornar um cavaleiro.");
       mvprintw(19,8,"      Com o tempo, aprendeu a lidar melhor com seu temperamento, apesar de sempre");
       mvprintw(20,8, "se exaltar facilmente com injustiças que ocorriam na sua província natal.");
}

void Pg_018(){
    
    clear();
        
    box(stdscr,58,92);
    mvprintw(3,8,  "             ____                            ");
    mvprintw(4,8,  "            / __ |__                         "); 
    mvprintw(5,8,  "            |/  |__ |_       *      /|       "); 
    mvprintw(6,8,  "            |      |_ |_           /_|       ");         
    mvprintw(7,8,  "            |        |_ |         /  |       ");
    mvprintw(8,8,  "            |          ||_       /_ _|       ");
    mvprintw(9,8,  "            |          |_|      / _  |       ");
    mvprintw(10,8, "            |    *     ||      /_| |_|  *    Arco e Flecha");
    mvprintw(11,8, "            |          ||        | |         ");
    mvprintw(12,8, "            |          ||        | |         Arqueiro");
    mvprintw(13,8, "       *    |          ||__      | |         ");
    mvprintw(14,8, "            |          | |       | |     *   ");
    mvprintw(15,8, "            |          | /       | |         ");
    mvprintw(16,8, "            |   *  ___/ /        | |         ");
    mvprintw(17,8, "            |   __/ ___/     *   | |         ");
    mvprintw(18,8, "  *        /|__/ __/            _|_|__       ");
    mvprintw(19,8, "           |_____/              |/|/|/       ");
}

void Pg_019(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(6,8, "Legolas");
       mvprintw(9,8,"      - Arqueiro Elfo e Estrategista da Equipe, portava um Arco mágico");
       mvprintw(10,8,"e um pergaminho encantado que revela locazições até então desconhecidas.");
       mvprintw(12,8,"     Seu Arco não necessitava de flechas, já que possuía a habilidade de");
       mvprintw(13,8,"disparar projéteis sem gasto de munição, uma de suas invenções mais");
       mvprintw(14,8,"incríveis, sem contar também o pergaminho de Durin, que sempre mostrava");
       mvprintw(15,8,"todas as localizações possíveis, além de mostrar passagens secretas.");
       mvprintw(17,8,"      Apesar de ser o futuro rei de Lumnus, Legolas ainda deseja explorar");
       mvprintw(18,8,"e viajar por toda Lundavik. Ainda que tenha necessidade mais cedo ou mais");
       mvprintw(19,8,"tarde, Legolas aproveita os raros momentos em que pode sair e explorar");
       mvprintw(20,8,"por toda Lumnus.");
}

void Pg_020(){
    
    clear();
        
    box(stdscr,58,92);
    mvprintw(2,8,  "                _____        "); 
    mvprintw(3,8,  "            ___|+++++|___    ");
    mvprintw(4,8,  "           |_|_|_-_-_|_|_|   "); 
    mvprintw(5,8,  "            |_|_*+-+*_|_|    "); 
    mvprintw(6,8,  "             |_|_-+-_|_|     ");         
    mvprintw(7,8,  "              |_| - |_|      ");
    mvprintw(8,8,  "               |_|_|_|       ");
    mvprintw(9,8,  "                |_|_|        ");
    mvprintw(10,8, "                 |_|         Cetro");
    mvprintw(11,8, "                 | |         ");
    mvprintw(12,8, "                 | |         Fetiticeira");
    mvprintw(13,8, "                 | |         ");
    mvprintw(14,8, "                 | |         ");
    mvprintw(15,8, "                 | |         ");
    mvprintw(16,8, "                 | |         ");
    mvprintw(17,8, "                _| |_        ");
    mvprintw(18,8, "               / |_| |       ");
    mvprintw(19,8, "              /|/|/|/|       ");
}

void Pg_021(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(6,8, "Tharkun");
       mvprintw(9,8,"      - Feiticeira e Suporte da Equipe, portava o Cetro de Istaria e Anel");
       mvprintw(10,8,"de Sindara. Enquanto o Cetro concede não só extrema magia àquele que");
       mvprintw(11,8,"o possui, como também a imortalidade do usuário, todavia, se este for");
       mvprintw(12,8,"destruído, o usuário é destruído com ele. O Anel, por sua vez,");
       mvprintw(13,8,"proporciona a capacidade de curar tanto o usuário quanto indivíduos ao");
       mvprintw(15,8,"      Tharkun é a atual Líder Guardiã de Vitkan, seu mentor foi o próprio");
       mvprintw(16,8,"redor. Merlin, contudo só recebeu essa posição após desaparecimento de");
       mvprintw(17,8,"seu antigo professor.");
       mvprintw(18,8,"      Com o decorrer dos anos seguiu a risca todos ensinamentos e leis");
       mvprintw(19,8,"além de se envolver o mínimo possível nos assuntos das outras províncias,");
       mvprintw(20,8,"aprendidas, como o Antigo Conselho dos Magos havia pedido.");
}

void Pg_022(){
    
    clear();
        
    box(stdscr,58,92);
    mvprintw(2,8,  "             _________________________  "); 
    mvprintw(3,8,  "             |_                    _|/  ");
    mvprintw(4,8,  "              |_       ____________|/   "); 
    mvprintw(5,8,  "               |_    _|/|/|/|/|/|/|/    "); 
    mvprintw(6,8,  "                |_  _|/                 ");         
    mvprintw(7,8,  "                |_ _|/                  ");
    mvprintw(8,8,  "                 |_|                    ");
    mvprintw(9,8,  "                 | |                    ");
    mvprintw(10,8, "                 |_|                    Foice e Punhal");
    mvprintw(11,8, "                 | |         /|         ");
    mvprintw(12,8, "                 |_|        /=|         Mercenária");
    mvprintw(13,8, "                 | |       /==|         ");
    mvprintw(14,8, "                 |_|      /===|         ");
    mvprintw(15,8, "                 | |     /====|         ");
    mvprintw(16,8, "                 |_|    /_____|         ");
    mvprintw(17,8, "                 | |      |_|           ");
    mvprintw(18,8, "                 |_|      |_|           ");
    mvprintw(19,8, "                 |/       |_|           ");
       
}

void Pg_023(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(3,8, "Kyra");
       mvprintw(4,8, "      - Mercenária e Dano da Equipe, pportava um Punhal mágico e uma");
       mvprintw(5,8, "Foice presa a uma corrente. Seu Punhal Mágico consiste em não só");
       mvprintw(6,8,"realizar golpes extremamente efetivos como também consegue gerar");
       mvprintw(7,8,"esferas de energia e provocar até mesmo explosões em área. Além disso,");
       mvprintw(8,8,"sua Foice serve para aprisionar inimigos com a corrente e construir");
       mvprintw(9,8,"muitos golpes poderosos com esta arma e ainda é banhada em veneno,");
       mvprintw(10,8,"aumentando ainda mais o dano dos golpes.");
       mvprintw(12,8,"      Kyra é uma mercenária muito habilidosa, porém já não aceitava");
       mvprintw(13,8,"mais contratos após ter falhado em sua última missão e como consequência,");
       mvprintw(14,8,"ter sua filha morta durante um atentado à sua antiga morada, enquanto");
       mvprintw(15,8,"tentavam fugir. Por muito tempo, ela ainda se culpava por não ter");
       mvprintw(16,8,"conseguido salvar sua própria filha e se questiona se realmente foi a");
       mvprintw(17,8,"decisão mais sábia deixar com que sua última vítima vivesse.");
       mvprintw(19,8,"      Por muito tempo, vagou por toda Lundavik e em busca de vingança.");
       mvprintw(20,8,"Mas quanto mais buscava, mais desejava que tivesse morrido junto");
       mvprintw(21,8,"daquela que já amou m dia.");
}

void Pg_024(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,40);
       mvprintw(1,2,"Fase 1     - Colapso, o começo do Fim");
       mvprintw(7,8,  "             _____                                      ____________ ");
       mvprintw(8,8,  "            /     |      ___                            |_  |   |  _| ");
       mvprintw(9,8,  "           /_ /| _|      |_ |                           |____   ____| ");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________           |_ _|      ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |          |   |      ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|          |_ _|      ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |          |   |      ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|          |_ _|      ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |       ___|   |___  ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|      |_         _|  ");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|      |___|___|___| ");
}

void Pg_025(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 1");
       mvprintw(3,5, "      Tharkun é a primeira a chegar em Ark e testemunhar sua visão se");
       mvprintw(4,5, "concretizar, névoas cobrem todas regiões de Ark, que até hoje não passavam");
       mvprintw(5,5, "de um cenário de desolação e morte. Ao fundo, percebe uma movimentação");
       mvprintw(6,5, "imensa de insetos, principalmente gafanhotos saindo de todos os lugares.");
       mvprintw(7,5, "      Então no meio das névoas, Tharkun avista Apollyon, o Líder do");
       mvprintw(8,5, "Apocalipse, liberto novamente e agora sem Merlin para aprisioná-lo novamente.");
       mvprintw(9,5, "Todavia, quando Apollyon percebe a presença da feiticeira, ele desaparece");
       mvprintw(10,5,"imediatamente, talvez porque havia confudido ela com o próprio Merlin,");
       mvprintw(11,5,"ou quem sabe estava fraco demais para batalhar.");
       mvprintw(12,5,"      Mas uma coisa, Tharkun tem certeza, cedo ou tarde teria que batalhar");
       mvprintw(13,5,"com o antigo Rei do Abismo. Após a fuga do demônio, toda a névoa se dissipa");
       mvprintw(14,5,"e o cenário desolado volta a normalidade. Ainda sim, Tharkun vasculha todas");
       mvprintw(15,5,"moradas e não encontrou nenhum vestígio, então decide voltar para Vitkan");
       mvprintw(16,5,"      No caminho de volta percebe algumas explosões nas proximidades de Vitkan");
       mvprintw(17,5,"e depara-se com Kyra. A mercenária que por sua vez combatia Tlaloc. O deus cego");
       mvprintw(18,5,"de ira ataca Kyra assim que a avista, apesar de golpes extremamente precisos e");
       mvprintw(19,5,"explosivos vindos de Kyra, Tlaloc demonstra-se muito mais poderoso.");
       mvprintw(20,5,"      Foi então que Tharkun chega ao local e no momento que é percebida por");
       mvprintw(21,5,"Tlaloc, o Gigante de Pedra desaparece.");
       
}

void Pg_026(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 1");
       mvprintw(3,5, "Kyra ainda se recuperando da batalha, busca compreender o que havia aconteceu.");
       mvprintw(4,5, "      Nesse momento, Tharkun, apesar de desconfiada de Kyra, opta por curá-la");
       mvprintw(5,5, "por meio do Anel.  A partir disso, ambas seguem rumo para Vitkan, enquanto");
       mvprintw(6,5, "Tharkun explica o que imagina estar acontecendo. Em Lumnus, a explosão causada");
       mvprintw(7,5, "foi rapidamente identificada, a Fenix está atacando a Província dos Elfos.");
       mvprintw(8,5, "      O Rei ordena que todos evacuem a cidade já que seu esforços estavam");
       mvprintw(9,5, "sendo ineficazes contra a fera de fogo.");
       mvprintw(10,5,"      Após a destruir quase toda vila,a Fenix acaba se dissipando no meio das");
       mvprintw(11,5,"chamas.  Com a devastação de Vilkar, vila principal de Lumnus, os elfos optam");
       mvprintw(12,5,"por buscar refúgio  em Domnus. Enquanto isso, ocorre uma enorme confusão");
       mvprintw(13,5,"em Domnus, com a Ordenação de Cavaleiro  sendo interrompida pela presença de");
       mvprintw(14,5,"um enorme Lobo parado bem no meio da praça de Domnus, apenas passando a");
       mvprintw(15,5,"sensação de um preságio do que iria acontecer.");
       mvprintw(16,5,"Logo percebem ao longe uma enorme quantidade de fumaça vinda da floresta de"); 
       mvprintw(17,5,"Lumnus e que  aos poucos, elfos acabam buscando refúgio na Província.");
       mvprintw(18,5,"      Legolas apesar de ter lutado bravamente, acaba por servir de guia e ajudar");
       mvprintw(19,5,"os mais necessitados a chegarem em Domnus. Porém a recepção não é tão boa");
       mvprintw(20,5,"como esperava, já que poucos se oferecem ajuda, sendo apenas Edward o único");
       mvprintw(21,5,"cavaleiro presta socorro aos elfos, todos outros estão vidrados no grande Lobo.");
}

void Pg_027(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 1");
       mvprintw(3,5, "      Não só por estarem com dúvidas e questionamentos, mas também pelo");
       mvprintw(4,5, "descaso que a Província de Domnus teve para com os elfos.");
       mvprintw(5,5, "      Eis que o Lobo desaparece.");
       mvprintw(6,5, "Após oferecer abrigo e assistência aos elfos, Jack pede para que Edward vá");
       mvprintw(7,5, "descobrir o que está acontecendo enquanto ele fica em Domnus ajudando os");
       mvprintw(8,5, "elfos refugiados. Legolas logo se oferece para acompanhá-lo, ainda que não");
       mvprintw(9,5, "os conhecesse, sabia que poderia confiar neles já que foram os únicos a");
       mvprintw(10,5,"prestar ajuda quando mais precisou.");
       mvprintw(11,5,"      Com isso, os dois partem para Vitkan, já que Jack sabia que");
       mvprintw(12,5,"Edward pode encontrar respostas com Tharkun.");
       mvprintw(13,5,"      Finalmente, em Krakia, muitos ficam preocupados com os possíveis");
       mvprintw(14,5,"presságios e após a decisão dos líderes da tribo, é concedido a missão de");
       mvprintw(15,5,"ir até a Torre de Vitkan e descobrir o que realmente está ocorrendo,");
       mvprintw(16,5,"a missão é designada para a Viking mais forte da vila, Thorya."); 
       mvprintw(17,5,"      Esta então com seu machado Kripto em suas mãos, recebe o escudo");
       mvprintw(18,5,"de sua mãe e parte rumo a Vitkan.");
}

void Pg_028(){
    
    clear();
        
    box(stdscr,58,92);
       move(6,39);
       hline(0,10);
       mvprintw(5,40,"- Fim -");
       mvprintw(7,8,  "             _____                                      ____________ ");
       mvprintw(8,8,  "            /     |      ___                            |_  |   |  _| ");
       mvprintw(9,8,  "           /_ /| _|      |_ |                           |____   ____| ");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________           |_ _|      ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |          |   |      ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|          |_ _|      ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |          |   |      ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|          |_ _|      ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |       ___|   |___  ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|      |_         _|  ");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|      |___|___|___| ");
}

void Pg_029(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,30);
       mvprintw(1,2,"Fase 2     - Honra e Glória");
       mvprintw(7,8,  "             _____                                      _________________  ");
       mvprintw(8,8,  "            /     |      ___                            |_  |  |   |  | _| ");
       mvprintw(9,8,  "           /_ /| _|      |_ |                           |____   ____  ___| ");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________           |_ |   | _|    ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |          |  |   |  |    ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|          |_ |   | _|    ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |          |  |   |  |    ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|          |_ |   | _|    ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |       ___|  |___|  |___ ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|      |_              _| ");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|      |___|__|___|__|__| ");
}

void Pg_030(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 2");
       mvprintw(3,5, "      Quando Tharkun chega a Torre de Vitkan consegue ver ao longe muita");
       mvprintw(4,5, "fumaça e cinzas vindas de Lumnus, é então que realmente tem certeza do ");
       mvprintw(5,5, "que estava acontecendo, o selo havia sido quebrado, mas as dúvidas de");
       mvprintw(6,5, "'Como?' e principalmente 'Por Quem?' ainda permanecem.");
       mvprintw(7,5, "      Algumas horas depois, Edward e Legolas chegam em Vitkan e se");
       mvprintw(8,5, "deparam com Thorya que também acaba de chegar a Torre. Ao entrar");
       mvprintw(9,5, "percebem a presençade Kyra e que Tharkun estava presa aos livros ");
       mvprintw(10,5,"como de costume.");
       mvprintw(11,5,"      Após uns minutos de discussão de que iria falar com Tharkun");
       mvprintw(12,5,"primeiro, a feiticeira chega a sala e explica a situação à todos");
       mvprintw(13,5,"presentes. O Titã Louco estava de volta e segundo o Conselho dos Magos,");
       mvprintw(14,5,"ele estava em busca das Armas Lendárias, a fim de controlar as feras que");
       mvprintw(15,5,"libertou e continuar com a exterminar todos os magos. Tharkun apesar de");
       mvprintw(16,5,"triste com a situação, pede para que seus companheiros confirmem se avistaram"); 
       mvprintw(17,5,"criaturas estranhas ou feras místicas. Todos concordam que suas províncias");
       mvprintw(18,5,"foram atacadas, com exceção de Thorya, que acaba se preocupando com sua terra");
       mvprintw(19,5,"natal ser o provável próximo alvo. Por isso, pede a todos que se isso de fato");
       mvprintw(20,5,"for acontecer, necessitaria de ajuda, ainda que fosse ajuda de desconhecidos.");
}

void Pg_031(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 2");
       mvprintw(3,5, "      Todos concordam em ir rumo à Krakia, contanto que depois fossem");
       mvprintw(4,5, "para o antigo local do selo, se caso desejassem acompanhar Tharkun.");
       mvprintw(5,5, "      E antes de partir, Tharkun oferece alguns equipamentos a fim");
       mvprintw(6,5, "de preparar o Grupo para um possível embate. Entrega para Legolas e Kyra,");
       mvprintw(7,5, "relíquias que potencializam suas habilidades e faz com que sejam capazes");
       mvprintw(8,5, "de dar qualquer dano contras as qualquer tipo feras mística. Além de");
       mvprintw(9,5, "oferecer o Amuleto Vingança da Rainha para Edward, com intenção que ele");
       mvprintw(10,5,"entregasse para Jack no próximo encontro deles. Tharkun utiliza de um portal");
       mvprintw(11,5, "para levar todos para Krakia mais rapidamente.");
       mvprintw(12,5, "      Quando chegam à Ilha, deparam-se com uma enorme rocha vindo em ");
       mvprintw(13,5,"direção à ilha.");
       mvprintw(14,5,"      Prontamente, Tharkun lança um feitiço evitando o choque e revelando");
       mvprintw(15,5,"que na verdade a rocha era na verdade o Kraken, agora acompanhado de navios");
       mvprintw(16,5,"que surgiam das profundezas, repletos de criaturas bizarras, que desde início");
       mvprintw(17,5," demonstraram que o objetivo era atacar Krakia.");
       mvprintw(19,30,"A batalha começa..");
}

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

void Pg_033(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 2");
       mvprintw(3,5, "      Apesar da duvidosa vitória, todos tem motivos suficientes");
       mvprintw(4,5, "para comemorar já que o grupo ainda que pouco numeroso foi capaz");
       mvprintw(5,5, "de derrotar Kraken e seus exércitos.");
       mvprintw(6,5, "      Ainda assim, Tharkun deseja investigar o local do selo e");
       mvprintw(7,5, "já se prepara para partir quando Kyra oferece ajuda para");
       mvprintw(8,5, "acompanhá-la em sua missão.");
       mvprintw(9,5, "      Tharkun e Kyra se despedem do grupo e partem para Ark, sendo");
       mvprintw(10,5,"que depois voltariam a se reunir todos em Vitkan.");
       mvprintw(11,5,"      Legolas e Edward desejam retornar para Domnus antes e investigar");
       mvprintw(12,5,"os destroços de Lumnus com propósito de encontrar pistas de um possível");
       mvprintw(13,5,"novo ataque, além de ver como estão Jack e os outros.");
       mvprintw(14,5,"      Thorya se voluntaria para acompanhá-los e após isso partem para Domnus.");
       mvprintw(15,5,"      Ao chegarem em Ark, Kyra percebe uma aura negra ao redor, dos túmulos,");
       mvprintw(16,5,"a mesma que havia percebido na vitória contra o Kraken."); 
       mvprintw(17,5,"      Tharkun percebe novamente uma névoa similar quando havia passado na");
       mvprintw(18,5,"vez anterior, a feiticeira tem certeza de que iria enfrentaria Apollyon.");
       mvprintw(19,5,"Pede para Kyra se preparar para um possível embate só que enquanto se deslocam");
       mvprintw(20,5,"pelo cemitério, Tharkun, num passo em falso, acaba ativando uma armadilha,");
       mvprintw(21,5,"fazendo com que as duas caíssem em covas profundas e se separassem.");
}

void Pg_034(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 2");
       mvprintw(3,5, "      Enquanto isso, chegando a costa de Domnus, Legolas contava");
       mvprintw(4,5, "aos dois amigos que apesar da tristeza de ter acabado de perder seu");
       mvprintw(5,5, "lar, ainda conseguia sentir um pouco de alegria por poder conhecer as");
       mvprintw(6,5, "terras distantes que sempre desejou explorar. Edward acaba se");
       mvprintw(7,5, "simpatizando ainda mais com o elfo, dado que ele também um dia já perdeu");
       mvprintw(8,5, "tudo paraum incêndio.");
       mvprintw(9,5, "      Antes da chegada a costa, o cavaleiro conta sua triste história");
       mvprintw(10,5,"aos dois companheiros de viagem.");
       mvprintw(11,5,"      Ao atracar o barco, percebem que uma gritaria imensa vindo de Lukaria,");
       mvprintw(12,5,"cidade natal de Edward e que estava bem próxima da atual localidade deles.");
       mvprintw(13,5,"      Ao chegar na cidade, nada se manisfestava, nem sequer um vento.");
       mvprintw(14,5,"      De repente de antigas moradas destruídas pelo antigo incêndio,");
       mvprintw(15,5,"enxames de gafanhotos surgem de todos os locais, exércitos de criaturas");
       mvprintw(16,5,"bizarras surgem novamente, só que agora ainda mais fortes e prontas"); 
       mvprintw(17,5,"para atacar o grupo, tudo foi uma emboscada. Eis que no meio da batalha");
       mvprintw(18,5,"surge uma figura demoníaca, Apollyon com uma mesma aura negra ao redor");
       mvprintw(19,5,"do corpo. O demónio começa apenas a observar o grupo, Legolas encarrega-se");
       mvprintw(20,5,"das criaturas enquanto Edward e Thorya se preparam para atacar o Rei do Abismo.");
       mvprintw(21,30,"A batalha começa..");
}

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

void Pg_036(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 2");
       mvprintw(3,5, "A derrota parece clara, mas ao longe, Legolas percebe uma coisa");
       mvprintw(4,5, "e grita a seus companheiros: 'Não tirem os olhos do Horizonte!'.");
       mvprintw(5,5, "      Foi quando uma bala de canhão ao longe atinge Apollyon,");
       mvprintw(6,5, "fazendo com esse recuasse, pelo menos por enquanto. Nisso alguns elfos");
       mvprintw(7,5, "e a tripulação, juntamente com seu capitão, Jack, partem para ajudar o");
       mvprintw(8,5, "grupo quase derrotado. Quando chegam na costa, os elfos dão cobertura com");
       mvprintw(9,5, "seus arcos, enquanto Jack abre caminho, quando o capitão chega até Edward");
       mvprintw(10,5,"e o vê todo ferido, Jack fica cego de ódio, porém Thorya o pede para que");
       mvprintw(11,5,"ele ajude a levar o cavaleiro para um local seguro.");
       mvprintw(12,5,"      Jack concorda mas quando estão quase retornando a praia, uma névoa");
       mvprintw(13,5,"os cerca e num golpe súbito, Apollyon apunhala Jack pelas costas.");
       mvprintw(14,5,"      Jack, apesar de gravemente ferido, ainda consegue acertar um golpe");
       mvprintw(15,5,"devastador com sua antiga espada no demônio, fazendo com que este sumisse");
       mvprintw(16,5,"dali gravemente ferido. Todos os inimigos que ali estavam, desaparecem."); 
       mvprintw(17,5,"      Seria mais uma vitória, porém após o embate, Jack cai bem próximo");
       mvprintw(18,5,"de onde foi atingido.");
       mvprintw(19,5,"      Edward vendo aquilo ainda cria forças para tentar socorrê-lo.");
       mvprintw(20,5,"      Mesmo assim, Jack consegue falar com seu irmão e com um sorriso");
       mvprintw(21,5,"no rosto diz:");
}

void Pg_037(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 2");
       mvprintw(5,5, "      'Não se culpe por isso, apesar dos pesares, pude passar");
       mvprintw(6,5, "meus últimos momentos fazendo aquilo que mais gosto, criando confusão");
       mvprintw(7,5, "ao lado de meu irmãozinho..");
       mvprintw(8,5, "      Viva e seja feliz, mas lembre-se sempre que");
       mvprintw(9,5, "a Morte também é um dia que vale a pena ser vivido... Adeus Irmão!'.");
       mvprintw(15,5,"      Com isso, Jack morre nos braços de seu irmão.");
       mvprintw(17,5,"      Edward jura naquele momento que encontrará o responsável");
       mvprintw(18,5,"por todo esse caos, e esse irá pagar, nem que isso custe sua própria vida.");
}

void Pg_038(){
    
    clear();
        
    box(stdscr,58,92);
       move(6,39);
       hline(0,10);
       mvprintw(5,40,"- Fim -");
       mvprintw(7,8,  "             _____                                      _________________  ");
       mvprintw(8,8,  "            /     |      ___                            |_  |  |   |  | _| ");
       mvprintw(9,8,  "           /_ /| _|      |_ |                           |____   ____  ___| ");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________           |_ |   | _|    ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |          |  |   |  |    ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|          |_ |   | _|    ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |          |  |   |  |    ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|          |_ |   | _|    ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |       ___|  |___|  |___ ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|      |_              _| ");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|      |___|__|___|__|__| ");
}

void Pg_039(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,40);
       mvprintw(1,2,"Fase 3 - O Verdadeiro Sacrifício");
       mvprintw(7,8,  "             _____                                      _______________________ ");
       mvprintw(8,8,  "            /     |      ___                            |_  |  |  |  |  |  |  _|");
       mvprintw(9,8,  "           /_ /| _|      |_ |                           |____  ___   ____   ___|");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________           |_ |  |  |  | _|    ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |          |  |  |  |  |  |    ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|          |_ |  |  |  | _|    ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |          |  |  |  |  |  |    ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|          |_ |  |  |  | _|    ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |       ___|  |__|  |__|  |___ ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|      |_                    _|");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|      |___|__|__|__|__|__|___|");
}

void Pg_040(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Ao acordar, Kyra percebe que ambas estão acorrentadas");
       mvprintw(4,5, "por um corrente estranha e que Tharkun ainda está desacordada.");
       mvprintw(5,5, "      Nisso, percebe uma figura imensa de um possível cavaleiro.");
       mvprintw(6,5, "      Eis que o cavaleiro apresenta-se como Karthos, o Titã Louco.");
       mvprintw(7,5, "Comenta também que poderia até explicar quem era se não tivesse nada");
       mvprintw(8,5, "melhor para fazer, mas deixaria isso para Tharkun.");
       mvprintw(9,5, "      O Titã sai da cela, pouco tempo depois Tharkun acaba acordando");
       mvprintw(10,5,"e pergunta a Kyra o que havia acontecido. Kyra assustada, explica tudo");
       mvprintw(11,5,"para Tharkun e que acaba se espantando em descobrir que Karthos era,");
       mvprintw(12,5,"na verdade, irmão de Tharkun.");
       mvprintw(13,5,"      Kyra então resolve encontrar um meio de escapar da atual");
       mvprintw(14,5,"localização. Tharkun todavia parecia desacreditada com tudo o que estava");
       mvprintw(15,5,"acontecendo e continuo explicando a Kyra que seu irmão foi o primeiro");
       mvprintw(16,5,"aprendiz de Merlin, um Mago que emanava maestria, tudo que ele havia feito"); 
       mvprintw(17,5,"foi para melhorar, a vida das outras pessoas, nunca para machucá-las.");
       mvprintw(18,5,"      Foi um dos poucos que conseguiu receber um treinamento misto");
       mvprintw(19,5,"e conseguir superar.");
}

void Pg_041(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Geralmente quando se é escolhido para ser aprendiz,");
       mvprintw(4,5, "existe a possibilidade de escolher entre que ensinamentos");
       mvprintw(5,5, "se deseja aprender, podendo escolher Cavalaria, Magia, Arquearia");
       mvprintw(6,5, "ou até mesmo Pesquisas e Estudos antigos, como Mitologia, Artes");
       mvprintw(7,5, "Arcanas, enquadrando até algumas Magias Negras há tempos proibidas.");
       mvprintw(8,5, "      Karthos não satisfeito com suas opções resolveu fazer todas,");
       mvprintw(9,5, "sim todas as opções. Muitos mestres dedicavam sua vida para um dos");
       mvprintw(10,5,"ensinamentos e não conseguiam chegar nem numa fração de todo conhecimento.");
       mvprintw(11,5,"      Muitos riram de Karthos quando ele decidiu isso, mas foi aí que");
       mvprintw(12,5,"Merlin virou para todos e perguntou:");
       mvprintw(13,5,"      'O que eu sou para vocês, então? Um fracasso ou alguém que não existe");
       mvprintw(14,5,"já o que faço é impossível?  Respondam-me!'.");
       mvprintw(15,5,"      Naquele momento todos se calaram, porque haviam esquecido que apenas");
       mvprintw(16,5,"um Mago foi hábil para tal feito. Merlin foi o único a estudar todas os"); 
       mvprintw(17,5,"ensinamentos, claro que ele não chegou a adquirir todo o conhecimento,");
       mvprintw(18,5,"mas com certeza foi o que mais se destacou.");
       mvprintw(19,5,"      Após isso, Merlin tinha se virado para Karthos e perguntou se ele");
       mvprintw(20,5,"aceitava ser seu Aprendiz. E foi nesse momento que meu irmão aceitou contanto");
       mvprintw(21,5,"que eu pudesse ir junto com ele.");
}

void Pg_042(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Eis que Tharkun percebe a figura de seu irmão na porta, nesse momento");
       mvprintw(4,5, "ele se vira e diz:");
       mvprintw(5,5, "      'Achei que você tivesse se esquecido de mim após todos esses anos,");
       mvprintw(6,5, "realmente sempre fomos inseparáveis, mas achei que entenderia a razão");
       mvprintw(7,5, "de meus atos...'.");
       mvprintw(8,5, "      Enquanto isso em Domnus, Legolas, Edward e Thorya estavam realizando");
       mvprintw(9,5,"um funeral digno para Jack. Logo após a cerimônia, Edward pede seus");
       mvprintw(10,5,"companheiros que o acompanhe até Vitkan, para  encontrar respostas e");
       mvprintw(11,5,"queria saber quem era o responsável de ter causado todo aquele Caos.");
       mvprintw(12,5,"      Porém quando chegam, todo o Conselho de Magos estão reunidos");
       mvprintw(13,5,"na entrada. E assim que percebem a chegada de nossos heróis, explicam");
       mvprintw(14,5,"suas 'verdades' e fazem com que acreditem que o Titã Louco ainda é o");
       mvprintw(15,5,"responsável, buscando destruir toda Lundavik."); 
       mvprintw(16,5,"      Cego de Ira, Edward não deseja nada além de vingança,");
       mvprintw(17,5,"Legolas e Thorya o acompanhariam, só que a guerreira viking achou");
       mvprintw(18,5,"estranho quando os magos perguntaram à ela da procedência de seu");
       mvprintw(19,5,"machado, já que este não lhes era estranho. Todavia, sem entender muito bem,");
       mvprintw(20,5,"explicou aos magos e nisso, pediram que ela os acompanhassem, enquanto ");
       mvprintw(21,5, "Edward e Legolas ficassem de guarda. Thorya entra com magos na Torre.");
}

void Pg_043(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3 ");
       mvprintw(3,5, "      De volta para a cela em algum lugar de Ark, Karthos começa");
       mvprintw(4,5, "a explicar as duas o que de fato havia acontecido, então continuou:");
       mvprintw(5,5, "      'Durante todo meu treinamento, não houve um dia que eu havia");
       mvprintw(6,5,"pensado em desistir, mas continuei bravamente dia após dia.");
       mvprintw(7,5, "      Enquanto alguns riam de meus fracassos, Merlin apenas me");
       mvprintw(8,5, "incentivava, buscava extrair de mim o que eu tinha de melhor.");
       mvprintw(9,5, "      Foi quando em um dia tive o prazer de ouvir do próprio Merlin, que");
       mvprintw(10,5, "cedo ou tarde eu seria capaz de ultrapassá-lo, apesar de eu ter ficado");
       mvprintw(11,5,"assustado com isso. Merlin riu e com sorriso no rosto me disse que não");
       mvprintw(12,5,"existia alegria maior no mundo de ver um aluno superar o próprio mestre.");
       mvprintw(13,5,"      Mas quando isso chegou ao Conselho, as coisas foram de mal a pior.");
       mvprintw(14,5,"      Inicialmente, chamaram Merlin para debater certos assuntos, foi então");
       mvprintw(15,5,"que a Grande Missão de Merlin para salvar a todos tinha se iniciado,");
       mvprintw(16,5,"uma grande mentira."); 
       mvprintw(17,5,"      Eles o expulsaram, baniram-no para fora de Lundavik. Fazendo com que");
       mvprintw(18,5,"buscasse armas de poderes ilimitados e trouxesse até eles, além de derrotar ");
       mvprintw(19,5,"sozinho bestas de poder cujo nível vocês já conehceram.");
       mvprintw(20,5,"      Agora devem estar se perguntando, como Merlin, o grande Mago Supremo,");
       mvprintw(21,5,"iria se submeter a tal situação?'.");
}

void Pg_044(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Eu mesmo lhes respondo, por minha culpa, condenaram-no por");
       mvprintw(4,5, "ter criado um monstro, alguém que eles não teriam como controlar.");
       mvprintw(5,5, "      E após ameaçarem a mim e Thark, Merlin não teve outra escolha");
       mvprintw(6,5, "se não concordar com os termos, para que nada mal acontesse.");
       mvprintw(7,5, "      Porém foi quando ele retornou de seu último embate contra Apollyon");
       mvprintw(8,5, "que eu entendi o que realmente estava acontecendo.");
       mvprintw(9,5, "      O 'renomado' Conselho dos Magos reuniu todas as relíquias,");
       mvprintw(10,5,"baniu Merlin e as criaturas para outra dimensão, com isso apenas");
       mvprintw(11,5,"restava a mim no caminho deles para que se tornassem os seres mais");
       mvprintw(12,5,"poderosos de toda Lundavik, após ver tudo aquilo, eu fugi.");
       mvprintw(13,5,"      Imaginando que se eu sumisse, nada de ruim iria acontecer a minha");
       mvprintw(14,5,"irmã. De um modo ou de outro acabariam mantendo ela viva, nem que se");
       mvprintw(15,5,"fosse como chantagem para me capturar algum dia. Fugi para tão longe");
       mvprintw(16,5,"que as terras que habitei jamais ouviram falar de Lundavik."); 
       mvprintw(17,5,"      Por muitos lados, fiquei sendo conhecido como o Titã Louco,");
       mvprintw(18,5,"àquele que matou Merlin, àquele que jamais deveria ter existido,");
       mvprintw(19,5,"o destruidor, tudo para mascarar os verdadeiros monstros.");
       mvprintw(20,5,"      Por isso que quando você apareceu no cemitério, Apollyon fugiu.");
       mvprintw(21,5,"Eles estão me procurando, os ataques são apenas distrações... ");
}

void Pg_045(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Kyra o interrompe: 'Foi você o responsável pelo");
       mvprintw(4,5, "golpe no Kraken, então?'.");
       mvprintw(5,5, "      Karthos confirma e continua: 'Não vim para acabar com");
       mvprintw(6,5, "Lundavik como todos pensam, vim porque tive uma visão de Merlin,");
       mvprintw(7,5, "pedindo ajuda. E por mais improvável que seja após todos esses anos,");
       mvprintw(8,5, "se existir a possibillidade dele estar vivo, devo tentar.");
       mvprintw(9,5, "      Devo isso a ele!'");
       mvprintw(10,5,"      Kyra então pergunta o motivo das correntes já que não lhes");
       mvprintw(11,5,"desejava nenhum mal.");
       mvprintw(12,5,"      Tharkun explica: 'Precaução..', a mercenária confusa pede pra que");
       mvprintw(13,5,"a amiga feiticeira se explicasse, Tharkun então continua:");
       mvprintw(14,5,"      'Precaução de que eu não o matasse assim que eu o visse.'");
       mvprintw(15,5,"      Continua agora em direção à Karthos:");
       mvprintw(16,5,"      'Você não faz ideia de quantas mentiras sobre você eu tive que aceitar"); 
       mvprintw(17,5,"para que no fim das contas você me dizer que fugiu para meu bem. Eu procurei");
       mvprintw(18,5,"por você por todos os lados. Estudei uma quantia imensurável de livros sobre");
       mvprintw(19,5,"localizadores, parei de buscar ajuda daqueles que realmente queriam que você");
       mvprintw(20,5,"estivesse morto..'.");
       mvprintw(21,5,"      E em lágrimas continua:");
}

void Pg_046(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      'Ah, como eu desejei que você estivesse morto, para que a culpa");
       mvprintw(4,5, "de falhar a cada tentativa fosse apenas minha em te encontrar.");
       mvprintw(5,5, "      E mesmo após todo esse tempo, você retorna para salvar alguém");
       mvprintw(6,5, "que apenas selou seu destino? E quanto a mim?");
       mvprintw(7,5, "      Se não fosse por essas correntes anuladoras eu juro que te");
       mvprintw(8,5, "lançaria de volta para sei de lá onde você surgiu.'");
       mvprintw(9,5, "      Nesse momento, Karthos ri e enquanto solta as duas, comenta:");
       mvprintw(10,5,"      'Fico feliz que você não tenha mudado nada, Lionna Thark. Talvez");
       mvprintw(11,5,"você nunca me perdoe, mas saiba que não teve um dia em que eu não pensei");
       mvprintw(12,5,"que fiz a escolha errada ao te deixar para trás'.");
       mvprintw(13,5,"      Com isso, num súbito movimento, Tharkun abraça seu irmão.");
       mvprintw(14,5,"      Enquanto eles se reestabeleciam, Karthos explica o que realmente");
       mvprintw(15,5,"estava fazendo e como conseguia afastar as feras.");
       mvprintw(16,5,"      Explicou que as Feras são criaturas pensantes e apenas são controladas"); 
       mvprintw(17,5,"apenas quando envoltas em uma aura negra.");
       mvprintw(18,5,"      Isso significa que as feras estão conectadas às armas.");
       mvprintw(19,5,"      O objetivo de Karthos é descobrir como libertar Merlin sem libertar");
       mvprintw(20,5,"os monstros de fato, já que todos os Monstros que haviam enfrentado,");
       mvprintw(21,5,"não passavam de meras ilusões criadas pelos próprios magos.");
}

void Pg_047(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Só que ilusões capazes de devastar cidade inteiras, ainda que");
       mvprintw(4,5, "tivessem o poder bem inferior aos originais.");
       mvprintw(5,5, "      Ele explica também que o Conselho ainda possuía as Armas Lendárias,");
       mvprintw(6,5, "talvez não todas, mas com certeza o suficiente. Tanto que se tivessem");
       mvprintw(7,5, "percebidos, Vitkan foi a única Província não ser atacada, todavia é");
       mvprintw(8,5, "difícil perceber algo quando todos ao redor estão sofrendo ataques.");
       mvprintw(9,5, "      Comenta também que apenas uma das criaturas era capaz de sair realmente");
       mvprintw(10,5,"da dimensão, Apollyon, um dos monstros mais poderosos que Merlin tinha");
       mvprintw(11,5,"derrotado. Só que quando vinha para esta dimensão raras vezes optava por");
       mvprintw(12,5,"combate já que sua forma ficava muito mais frágil e fraca.");
       mvprintw(13,5,"      Karthos continua que enquanto eles não possuírem um antigo machado,");
       mvprintw(14,5,"tudo estava bem, já que este havia sido roubado a alguns anos por um viking,");
       mvprintw(15,5,"chamado Thron.");
       mvprintw(16,5,"      E que este machado seria a chave para desencadear a quebra do selo"); 
       mvprintw(17,5,"e talvez liderar as criaturas, mas ainda assim não sabia muito bem como.");
       mvprintw(18,5,"      Tharkun e Arya espantam-se com tudo isso e principalmente como Krathos");
       mvprintw(19,5,"sabia disso tudo. E ele explica que foi ele quem organizou o furto do machado.");
       mvprintw(20,5,"      Ele, juntamente com Thron e Kraven, um antigo elfo que era procurado por");
       mvprintw(21,5,"toda Lundavik, só que o único capaz de organizar um furto com maestria.");
}

void Pg_048(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Sem esquecer de Jack, o pirata que os levou até a costa e os");
       mvprintw(4,5, "trouxe em segurança apesar de toda confusão causada.");
       mvprintw(5,5, "      Karthos continua que o plano foi desde o começo um fiasco, já");
       mvprintw(6,5, "que Kraven quase não apareceu para realizar o golpe.");
       mvprintw(7,5, "      Nisso, Kyra percebe que Kraven era o mesmo elfo que havia deixado");
       mvprintw(8,5, "vivo no dia de sua última missão. Apesar da imensa quantia oferecida");
       mvprintw(9,5, "pela sua cabeça, optou por deixá-lo vivo, já que o antigo elfo foi");
       mvprintw(10,5,"visto ajudando um acampamento de crianças, Kyra o seguiu por toda Lumnus,");
       mvprintw(11,5,"durante mais de um mês. Garantindo que realmente não estava sendo ");
       mvprintw(12,5,"enganada, e no dia de que realmente estava prestes a matá-lo, Kraven pediu");
       mvprintw(13,5,"para que se ele morresse, ela pudesse salvar uma das crianças que se");
       mvprintw(14,5,"encontrava extremamente doente, pediu para que os atos deles não condenasse");
       mvprintw(15,5,"a criança em necessidade.");
       mvprintw(16,5,"      Assim, Kyra o libertou ainda que pudesse gerar muitos problemas,"); 
       mvprintw(17,5,"como de fato aconteceu.");
       mvprintw(18,5,"      Karthos agora entendendo o motivo do atraso do antigo amigo,");
       mvprintw(19,5,"continua contando que durante o ataque um dos magos avistou a saída");
       mvprintw(20,5,"deles da Torre.");
}

void Pg_049(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Foi então que Thron fugiu com o machado, enquanto");
       mvprintw(4,5, "ele e Kraven chamavam a atenção dos magos, enquanto fugiam ");
       mvprintw(5,5, "para o barco.");
       mvprintw(7,5, "      Conta também que até poderiam ter enfrentado, mas quando");
       mvprintw(8,5, "perceberam a posse de outras armas místicas, optaram pela fuga.");
       mvprintw(10,5, "      Desde então, nunca mais ouviu falar de Thron.");
       mvprintw(12,5, "      Eis que Tharkun se recorda do machado de Thorya e percebe");
       mvprintw(13,5,"que aquele poderia vir a ser o machado que o Conselho tanto desejava.");
       mvprintw(15,5,"      E além disso, que este estava a caminho de de Vitkan,");
       mvprintw(16,5,"já que o grupo havia combinado de se encontrar lá.");
       mvprintw(18,5,"      Desse modo, o trio resolve se apressar porquê se o machado");
       mvprintw(19,5,"ficasse em posse dos magos, tudo estaria acabado.");
       mvprintw(21,5,"      E então partem para a Torre de Vitkan.");
}

void Pg_050(){
    
    clear();
        
    box(stdscr,58,92);
       move(6,39);
       hline(0,10);
       mvprintw(5,40,"- Fim -");
       mvprintw(7,8,  "             _____                                      _______________________ ");
       mvprintw(8,8,  "            /     |      ___                            |_  |  |  |  |  |  |  _|");
       mvprintw(9,8,  "           /_ /| _|      |_ |                           |____  ___   ____   ___|");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________           |_ |  |  |  | _|    ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |          |  |  |  |  |  |    ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|          |_ |  |  |  | _|    ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |          |  |  |  |  |  |    ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|          |_ |  |  |  | _|    ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |       ___|  |__|  |__|  |___ ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|      |_                    _|");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|      |___|__|__|__|__|__|___|");
}

void Pg_051(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,20);
       mvprintw(1,2,"Fase 4 - A Invasão");
       mvprintw(7,8,  "             _____                                    ____________  ____        ___");
       mvprintw(8,8,  "            /     |      ___                          |_  |   |  _| |_ |       / _/");
       mvprintw(9,8,  "           /_ /| _|      |_ |                         |____   ____| |  |      /  / ");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________         |_ _|     |_ |     / _/  ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |        |   |     |  |    /  /   ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|        |_ _|     |_ |   / _/    ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |        |   |     |  |  /  /     ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|        |_ _|     |_ | / _/      ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |     ___|   |___  |  |/  /       ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|    |_         _| |_   _/        ");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|    |___|___|___| |____/         ");
}

void Pg_052(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 4");
       mvprintw(3,5, "      Edward percebe ao longe uma figura de um cavaleiro e percebe");
       mvprintw(4,5, "Tharkun e Kyra vindo em sua direção. Só que ao perceber que a figura");
       mvprintw(5,5, "se tratava do mesmo cavaleiro que os magos anteriormente haviam lhe");
       mvprintw(6,5, "descrito, não hesitou nem um segundo e partiu para o embate.");
       mvprintw(7,5, "      Legolas, sem entender o motivo de suas duas companheiras estarem ao");
       mvprintw(8,5, "lado do Titã optou por manter a guarda e se manter afastado até compreender");
       mvprintw(9,5, "o que de fato estava acontecendo.");
       mvprintw(10,5,"      Tharkun então parte para cima de Edward, a fim de detê-lo, só que");
       mvprintw(11,5,"sua determinação é tão forte que nem sequer dá ouvidos a feiticeira.");
       mvprintw(12,5,"      Edward está tão furioso que não consegiuia nem entender como Tharkun");
       mvprintw(13,5,"estava do lado daquele que causou a morte de Jack.");
       mvprintw(14,5,"E numa batalha intensa, Krathos desvia de todos golpes lançados por Edward");
       mvprintw(15,5,"e percebendo suas palavras, Karthos pergunta o que havia acontecido com seu");
       mvprintw(16,5,"antigo amigo, Jack."); 
       mvprintw(17,5,"      Kyra, por sua vez, tenta controlar Tharkun que estava desolada com a");
       mvprintw(18,5,"notícia de que Jack havia sido morto.");
       mvprintw(19,5,"      Eis que Legolas lança uma flecha luminosa no meio todos, fazendo com");
       mvprintw(20,5,"que notassem sua presença e pede para que alguém explique estava acontecendo.");
}

void Pg_053(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 4");
       mvprintw(3,5, "      Tharkun então pergunta por Thorya e onde ela se encontrava,");
       mvprintw(4,5, "Legolas então expolica que Thorya havia subido com os magos até ");
       mvprintw(5,5, "a Torre, mas não sabia o porquê.");
       mvprintw(6,5, "      Krathos interrompe dizendo ser tarde demais. Kyra explica");
       mvprintw(7,5, "rapidamente à Edward, que retomava o fôlego e que voltava a raciocinar");
       mvprintw(8,5, "novamente, e ao elfo, que agora percebia a emboscada que Thorya");
       mvprintw(9,5, "tinha entrado.");
       mvprintw(10,5,"      Agora quando os cinco guerreiros se preparavam para entrar,");
       mvprintw(11,5,"percebem explosões vindas do alto da Torre e que um exército de criaturas");
       mvprintw(12,5,"surgia de um portais tanto acima quanto ao redor da Torre.");
       mvprintw(16,30,"Uma nova batalha se inicia...");
}

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

void Pg_055(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 4");
       mvprintw(8,5, "      Com isso, a equipe segue rumo ao alto da Torre, quando");
       mvprintw(9,5, "chegam se deparam com Thorya batalhando contra todos os magos, e seu machado dessa");
       mvprintw(10,5, "vez estava todo brilhante e emanava faíscas e pequenos raios de luz.");
       mvprintw(11,5, "      Porém quando os magos percebem que estavam encurralados");
       mvprintw(12,5, "realizam um feitiço similar ao que fizeram com Merlin,");
       mvprintw(13,5, "enviando todos para Mythicos.");
}

void Pg_056(){
    
    clear();
        
    box(stdscr,58,92);
       move(6,39);
       hline(0,10);
       mvprintw(5,40,"- Fim -");
       mvprintw(7,7,  "             _____                                    ____________  ____        ___");
       mvprintw(8,7,  "            /     |      ___                          |_  |   |  _| |_ |       / _/");
       mvprintw(9,7,  "           /_ /| _|      |_ |                         |____   ____| |  |      /  / ");
       mvprintw(10,7, "          /  / |  |  ____|  |___     ____________         |_ _|     |_ |     / _/  ");
       mvprintw(11,7, "         /_ /  | _|  |___    ___|   |   ______   |        |   |     |  |    /  /   ");
       mvprintw(12,7, "        /  /   |  |      |_ |       |_ |      | _|        |_ _|     |_ |   / _/    ");
       mvprintw(13,7, "       /_ /____| _|      |  |       |  |      |  |        |   |     |  |  /  /     ");
       mvprintw(14,7, "      /  ______   |      |_ |       |_ |      | _|        |_ _|     |_ | / _/      ");
       mvprintw(15,7, "     /_ /      | _|      |  |       |  |      |  |     ___|   |___  |  |/  /       ");
       mvprintw(16,7, "    /  /       |  |      |_ |       |_ |______| _|    |_         _| |_   _/        ");
       mvprintw(17,7, "   /__/        |__|      |__|       |____________|    |___|___|___| |____/         ");
}

void Pg_057(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,25);
       mvprintw(1,2,"Fase 5 - Fim de Jogo?");
       mvprintw(7,8,  "             _____                                        ____        ___");
       mvprintw(8,8,  "            /     |      ___                              |_ |       / _/");
       mvprintw(9,8,  "           /_ /| _|      |_ |                             |  |      /  / ");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________         |_ |     / _/  ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |        |  |    /  /   ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|        |_ |   / _/    ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |        |  |  /  /     ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|        |_ | / _/      ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |        |  |/  /       ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|        |_   _/        ");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|        |____/         ");
}

void Pg_058(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 5");
       mvprintw(3,5, "      Quando todos chegam a Mythicos, os magos desapareceram");
       mvprintw(4,5, "e, pouco a pouco, a presença de criaturas ao fundo distante");
       mvprintw(5,5, "começava a se mostrar.");
       mvprintw(6,5, "      Eram 4 Perdições e um enorme exército de criaturas");
       mvprintw(7,5, "sombrias, todas controladas pelos antigos magos.");
       mvprintw(8,5, "      Agora, nossos heróis se preparam para um último embate.");
       mvprintw(9,5, "E apesar de desacreditados que todos sairiam vivos de lá estavam");
       mvprintw(10,5,"todos prontos para se sacrificar lutando, juntos.");
       mvprintw(11,5,"      Eis que então surge do meio deles uma aura branca,");
       mvprintw(12,5,"Merlin se revela perante eles e os explica que o verdadeiro");
       mvprintw(13,5,"poder está dentro de cada um, diz a Thorya que seu machado");
       mvprintw(14,5,"é muito mais do que uma lembrança e por último, vira-se a");
       mvprintw(15,5,"Karthos e diz:");
       mvprintw(16,5,"      'Perdão por ter falhado com você, se tivesse lutado"); 
       mvprintw(17,5,"desde o princípio, talvez nada disso teria acontecido.");
       mvprintw(18,5,"      Mas nada disso mais importa, lembrem-se quando tudo parecer");
       mvprintw(19,5,"perdido procurem o que reflete o que são e aquilo que mais");
       mvprintw(20,5,"desejam, pois na escuridão há também luz.'");
}

void Pg_059(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 5");
       mvprintw(3,5, "      Após isso o Merlin desaparece, todos espantados agora");
       mvprintw(4,5, "se preparavam para o embate final.");
       mvprintw(5,5, "      Eis que Thorya entende o que realmente Merlin havia dito,");
       mvprintw(6,5, "seu machado era uma das armas lendárias e agora se fosse hábil");
       mvprintw(7,5, "suficiente consiguiria desbloquear tal poder.");
       mvprintw(8,5, "      Então, surge um Lobo Gigante, Fenrir, mas desta vez");
       mvprintw(9,5, "não se encontrava com nehnuma aura negra, e sim, uma aura branca,");
       mvprintw(10,5,"similiar a que emanava de Merlin.");
       mvprintw(11,5,"      O Lobo então se vira a Thorya e explica que se ela desejasse");
       mvprintw(12,5,"poderia controlá-lo.");
       mvprintw(13,5,"      Mas diferente do que pensavam, Thorya liberta o Lobo e só");
       mvprintw(14,5,"que ainda sim, Fenrir permanece juntos dos heróis e lutaria ao lado");
       mvprintw(15,5,"deles como agradecimento.");
       mvprintw(18,30,"A Batalha Final se inicia... ");
}

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

void Pg_061(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 5");
       mvprintw(3,5, "      Thorya então reune todas as armas e com um único");
       mvprintw(4,5, "golpe parte todas as armas liberando todos da antiga dimensão.");
       mvprintw(5,5, "      Os magos revoltados com tal decisão, agora se encontram");
       mvprintw(6,5, "na antiga Torre de Viktan, perguntam o porquê de tal ação.");
       mvprintw(7,5, "      Thorya, ainda que sabendo que provavelmente teria liberto todas as");
       mvprintw(8,5, "criaturas uma vez presa, sabia que seria o único modo de retornar para casa.");
       mvprintw(9,5, "comandado por Tharkun, o antigo cavaleiro ainda pede para que pudesse");
       mvprintw(10,5,"ser o novo aprendiz se assim sua irmã o aceitasse.");
       mvprintw(11,5,"      Tharkun, agora utilizando seu antigo nome Lionna Thark,");
       mvprintw(12,5,"o aceita com um sorriso no rosto. Além de confirmar aos outros");
       mvprintw(13,5,"que os antigos serão devidamente punidos e que toda Vitkan será");
       mvprintw(14,5,"reestruturada para que nada do tipo volte a acontecer novamente.");
       mvprintw(15,5,"      Kyra ainda deseja encontrar os antigos responsáveis do atentado");
       mvprintw(16,5,"e iria continuar a busca, só que Legolas se oferece para acompanhá-la"); 
       mvprintw(17,5,"assim que resolvesse os assuntos com seu pai. Nisso, ambos se preparam");
       mvprintw(18,5,"para ir para Domnus e após isso, seguir com a perseguição de Kyra.");
}

void Pg_062(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 5");
       mvprintw(3,5, "      Edward apesar de contente com a vitória, ainda sente que");
       mvprintw(4,5, "está com negócios inacabados com Apollyon, e se este realmente estivesse");
       mvprintw(5,5, "fora da dimensão de Mythicos, iria encontrá-lo e destruí-lo, a fim de");
       mvprintw(6,5, "vingar seu irmão.");
       mvprintw(7,5, "      Thorya se oferece para acompanhá-lo já que foi ela que o impediu de");
       mvprintw(8,5, "se vingar. Mas antes deveria partir para Krakia, e avisar de sua nova");
       mvprintw(9,5, "missão e encarregar alguém que pudesse substituí-la eenquanto essa");
       mvprintw(10,5,"estivesse fora.");
       mvprintw(11,5,"      Foi então que Fenrir se encarrega de ocupar a posição de Guardião");
       mvprintw(12,5," da Ilha. Quando tudo estivesse resolvido, Thorya encontraria Edward no");
       mvprintw(13,5,"túmulo de ");
       mvprintw(14,5,"Jack e a partir daí seguiriam o rumo do Rei do Abismo.");
       mvprintw(15,5,"      Eis que então a figura de Merlin aparece a eles novamente,");
       mvprintw(16,5,"agora muito mais brilhante. Merlin então diz a todos:");
}

void Pg_063(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 5");
       mvprintw(3,5, "      'Embora possam perceber que eu não tenha mais uma forma");
       mvprintw(4,5, "física quero agradecer por terem libertado minha alma que antes");
       mvprintw(5,5, "se encontrava em constante agonia dentro daquela prisão, mas agora");
       mvprintw(6,5, "posso descansar. Fico contente que Lionna tenha realmente descobrido");
       mvprintw(7,5, "estou livre e finalmente poder e que Karthos agora possa trilhar");
       mvprintw(8,5, "seu verdadeiro caminho, ao lado de sua irmã. Boa sorte a todos e");
       mvprintw(9,5, "lembrem-se, o lar é o reflexo do coração, um reflexo que vocês");
       mvprintw(10,5,"estão começando a entender'.");
       mvprintw(11,5,"      O Antigo Mago então desaparace, finalmente livre.");
       mvprintw(12,5,"      Antes que todos partissem, Lionna entrega a todos um artefato");
       mvprintw(13,5,"similar ao de Legolas, mas este iria disparar um sinal para quando");
       mvprintw(14,5,"fosse necessária a união dos heróis novamente, com esse sinal disparado");
       mvprintw(15,5,"todos deveriam se dirigir a Torre de Vitkan, sendo esta a nova base dos");
       mvprintw(16,5,"nossos bravos heróis."); 
       mvprintw(17,5,"      Todos se despedem e partem para suas próximas aventuras.");
}

void Pg_064(){
    
    clear();
        
    box(stdscr,58,92);
       move(6,39);
       hline(0,10);
       mvprintw(5,40,"- Fim -");
       mvprintw(7,8,  "             _____                                        ____        ___");
       mvprintw(8,8,  "            /     |      ___                              |_ |       / _/");
       mvprintw(9,8,  "           /_ /| _|      |_ |                             |  |      /  / ");
       mvprintw(10,8, "          /  / |  |  ____|  |___     ____________         |_ |     / _/  ");
       mvprintw(11,8, "         /_ /  | _|  |___    ___|   |   ______   |        |  |    /  /   ");
       mvprintw(12,8, "        /  /   |  |      |_ |       |_ |      | _|        |_ |   / _/    ");
       mvprintw(13,8, "       /_ /____| _|      |  |       |  |      |  |        |  |  /  /     ");
       mvprintw(14,8, "      /  ______   |      |_ |       |_ |      | _|        |_ | / _/      ");
       mvprintw(15,8, "     /_ /      | _|      |  |       |  |      |  |        |  |/  /       ");
       mvprintw(16,8, "    /  /       |  |      |_ |       |_ |______| _|        |_   _/        ");
       mvprintw(17,8, "   /__/        |__|      |__|       |____________|        |____/         ");
}

void Pg_Fim_de_Jogo(){
    
    clear();
        
    box(stdscr,58,92);
    mvprintw(6,8,  "                                                   _____________      ");         
    mvprintw(7,8,  "     ________________                              |  _______ _|      ");
    mvprintw(8,8,  "     |   |      |    |                             |_ |     |  |      ");
    mvprintw(9,8,  "     |_  ____________|    ___                      |__|     | _|      ");
    mvprintw(10,8, "     |  _|               |_ _|   _____       _____        __|  |      ");
    mvprintw(11,8, "     |_  |_______        |___|   |_  |_______|  _|       _|   _|      ");
    mvprintw(12,8, "     |         _|        _____   |   __     __   |     _|   _|        ");
    mvprintw(13,8, "     |_  _______|        |_  |   |_  | |_ _| |  _|    |_  _|          ");
    mvprintw(14,8, "     |  _|               |  _|   |  _|  |_|  |_  |    |___|           ");
    mvprintw(15,8, "     |_  |               |_  |   |_  |       |  _|    _____           ");
    mvprintw(16,8, "     |  _|               |  _|   |  _|       |_  |    |_ _|           ");
    mvprintw(17,8, "     |___|               |___|   |___|       |___|    |___|           ");
       
       
    getch();
}

void audio(int n_audio)
{
    int id = fork();
    if(id == 0) {
        if(n_audio == 0)
        {
            system("aplay -q ../audio/ataque.wav");
        }
    
        if(n_audio == 1)
        {
            system("aplay -q ../audio/game_start.wav");
        }
        if(n_audio == 2)
        {
            system("aplay -q ../audio/derrota.wav");
        }
        
    
    exit(0);
    }
}   
    
    
    
    
    
    
    
    
    
    
    
