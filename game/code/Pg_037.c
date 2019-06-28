/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_037(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 2");
       mvprintw(5,5, "      'Não se culpe por isso, apesar dos pesares, pude passar");
       mvprintw(6,5, "meus últimos momentos fazendo aquilo que mais gosto, criando confusão");
       mvprintw(7,5, "ao lado de meu irmãozinho..");
       mvprintw(8,5, "      Viva e seja feliz, mas lembre-se sempre que");
       mvprintw(9,5, "a Morte também é um dia que vale a pena ser vivido... Adeus Irmão!'.");
       mvprintw(15,5,"      Com isso, Jack morre nos braços de seu irmão.");
       mvprintw(17,5,"      Edward jura naquele momento que encontrará o responsável");
       mvprintw(18,5,"por todo esse caos, e esse irá pagar, nem que isso custe sua própria vida.");
}
