/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
