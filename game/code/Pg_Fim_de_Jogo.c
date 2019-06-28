/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
