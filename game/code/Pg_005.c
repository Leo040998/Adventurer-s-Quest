/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_005(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8,  "     Foi então que o Colapso se iniciava, o Titã quebra o selo fazendo com ");
       mvprintw(5,8,  "que criaturas como Fênix e Kraken fossem libertas.");
       mvprintw(8,8,  "     Mesmo com o feitiço de Merlin tendo sido quebrado, ele ainda foi capaz");
       mvprintw(9,8,  "de evitar a saída de mais feras.");
       mvprintw(12,8, "     Mas ainda assim, Cinco delas escaparam e formaram um grupo chamado");
       mvprintw(13,8, "Perdições do Infinito, sendo elas:");
}
