/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_008(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8, "                                                              ");
       mvprintw(5,8, "                              /|     /|            *          ");
       mvprintw(6,8, "                ~~ ~~ ~~     /_|____/_|        *  * *  *      ");
       mvprintw(7,8, "             ~~ ~~~ ~~ ~~~~~|_ ^ _ = _|     *        *     *  ");
       mvprintw(8,8, "               ~~~ ~~ ~~~~~~|_[0]_[0]_|            *   *  *   ");
       mvprintw(9,8, "             ~~~~~ ~~~~ ~~~~|_ _ | _ _|        *    *         ");
       mvprintw(10,8,"               ~~~~ ~~~~      |_|_|_|              *    *     ");
       mvprintw(11,8,"                         <<<<==========>>>>>                  ");
       mvprintw(12,9, "Apollyon");
       mvprintw(14,8, "     - Um Demônio, mais conhecido como Abaddon ou Rei do Abismo, ");
       mvprintw(15,8, "comandante de um enorme exército de gafanhotos.");
       mvprintw(16,8, "     Apesar de não aparentar ser tão destrutivoquanto os anteriores,");
       mvprintw(17,8, "essa entidade foi uma das mais complexas para Merlin, visto que não se");
       mvprintw(18,8, "tratava de um demônio qualquer, mas sim de um Anjo que se rebelou e"); 
       mvprintw(19,8, "trouxe devastação após a Abertura do Poço do Abismo. Porém como");
       mvprintw(20,8, "um dos seus últimos feitos, Merlin foi capaz de banir o demônio, também");
       mvprintw(21,8, "conhecido como Líder do Apocalipse.");
}
