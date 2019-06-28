/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_012(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(8,8,  "     Só que como foi mencionado antes, uma Equipe de bravos guerreiros");
       mvprintw(9,8,  "que uniram suas forças para impedir o Titã.");
       mvprintw(13,8,  "     Sendo eles:");
}
