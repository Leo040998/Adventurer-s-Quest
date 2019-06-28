/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
