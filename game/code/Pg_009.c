/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_009(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "       /|             /|___/|___/|__/|                        ");
       mvprintw(5,8, "      | |             |              |      /|                ");
       mvprintw(6,8, "      |_|    /|  /|   |   [:]  [:]   |     |_|    /|          ");
       mvprintw(7,8, "       ||_  |_| |_|   |_ [:]    [:] _|      ||   |_|          ");
       mvprintw(8,8, "       |_ |  ||  || /|  |_^^^___^^^_|   /|  ||  __||          ");
       mvprintw(9,8, "         ||_ ||  |||_|    | |VVV| |    |_|  || | __|          ");
       mvprintw(10,8,"         | |_||__||_||____|_|^_^|_|_____||__||_| |___         ");
       mvprintw(11,8,"         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^       ");
       mvprintw(12,9, "Kraken");
       mvprintw(14,8, "     - Espécie de Lula ou Polvo Gigante que ameaçava navios,");
       mvprintw(15,8, "     Tinha a fama de destruidor de navios, todavia só atacava àqueles");
       mvprintw(16,8, "que poluíam os mares e navios piratas. Após uma de suas expedições,");
       mvprintw(17,8, "     Merlin acaba se deparando com o Kraken. Após uma intensa batalha,");
       mvprintw(18,8, "Merlin chega a conclusão que deveria baní-lo, apesar de perceber o real"); 
       mvprintw(19,8, "motivo de seus ataques.");
}
