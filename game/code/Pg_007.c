/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

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
