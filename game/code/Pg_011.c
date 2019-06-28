/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
