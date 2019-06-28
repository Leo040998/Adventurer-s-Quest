/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_002(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,25,  "Lumnus    -Terra dos Antigos Elfos");
       mvprintw(7,25,  "Domnus    - Província dos Reis");
       mvprintw(10,25, "Ark       - Terra dos Desolados");
       mvprintw(13,25, "Vitkan    - Terra dos Guardiões");
       mvprintw(16,25, "Krakia    - Ilha dos Navegadores");
}
