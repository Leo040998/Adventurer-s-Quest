/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_001(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "   Nossa aventura começa no fim de uma noite chuvosa, mal sabiam eles que");
       mvprintw(5,8, "uma catástrofe estava prestes a acontecer. Um ritual antigo iria acontecer");
       mvprintw(6,8, "não muito distante da Província de Ark.");
       mvprintw(8,8, "   Nas Montanhas da Perdição, o Titã Louco continua sua insaciável busca");
       mvprintw(9,8, "por vingança, mas ainda necessitando das Armas Lendárias para realizar");
       mvprintw(10,8,"seus planos, capazes até mesmo controlar antigas feras mistícas.");
       mvprintw(12,8,"   Armas extremamente poderosas e antigas, espalhadas por todas as Cinco");
       mvprintw(13,8,"Províncias de Lundavik.");
       mvprintw(16,8,"   Sendo elas:");
}
