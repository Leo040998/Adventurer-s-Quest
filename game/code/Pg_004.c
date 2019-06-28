/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_004(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(4,8,  "     Essas províncias, com o decorrer de eras sofreram diversas mudanças,");
       mvprintw(5,8,  "já que algumas prosperamam imensamente. Enquanto outras se encontram");
       mvprintw(6,8,  "em extrema miséria e decadência. Mas o evento que estava prestes a");
       mvprintw(7,8,  "ocorrer se tratava do Colapso,um evento que seria responsável por reunir");
       mvprintw(8,8,  "Líderes de todos os Antigos Reinos.");
       mvprintw(10,8, "     Mas para entender melhor o que estava acontecendo, é necessário");
       mvprintw(11,8, "entender o que foi o Sacrifício de Merlin e o que era Mythicos.");
       mvprintw(13,8, "     Mythicos foi o lar das Antigas Criaturas que antes habitavam Lundavik");
       mvprintw(14,8, "e estariam habitando até hoje se não fosse pelo Sacríficio de Merlin,");
       mvprintw(15,8, "trabalho mais importante de Merlin que foi banir todas as criaturas ");
       mvprintw(16,8, "consideradas por ele prejudiciais a Lundavik e selá-las em outra dimensão,");
       mvprintw(17,8, "Mythicos.");
}
