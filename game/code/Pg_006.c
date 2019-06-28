/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
