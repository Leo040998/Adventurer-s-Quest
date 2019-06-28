/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
