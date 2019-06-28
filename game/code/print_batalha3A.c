/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
