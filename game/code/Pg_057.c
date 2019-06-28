/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
