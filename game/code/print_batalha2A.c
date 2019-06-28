/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
