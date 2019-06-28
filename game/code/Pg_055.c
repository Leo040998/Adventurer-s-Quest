/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_055(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 4");
       mvprintw(8,5, "      Com isso, a equipe segue rumo ao alto da Torre, quando");
       mvprintw(9,5, "chegam se deparam com Thorya batalhando contra todos os magos, e seu machado dessa");
       mvprintw(10,5, "vez estava todo brilhante e emanava faíscas e pequenos raios de luz.");
       mvprintw(11,5, "      Porém quando os magos percebem que estavam encurralados");
       mvprintw(12,5, "realizam um feitiço similar ao que fizeram com Merlin,");
       mvprintw(13,5, "enviando todos para Mythicos.");
}
