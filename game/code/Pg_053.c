/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_053(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 4");
       mvprintw(3,5, "      Tharkun então pergunta por Thorya e onde ela se encontrava,");
       mvprintw(4,5, "Legolas então expolica que Thorya havia subido com os magos até ");
       mvprintw(5,5, "a Torre, mas não sabia o porquê.");
       mvprintw(6,5, "      Krathos interrompe dizendo ser tarde demais. Kyra explica");
       mvprintw(7,5, "rapidamente à Edward, que retomava o fôlego e que voltava a raciocinar");
       mvprintw(8,5, "novamente, e ao elfo, que agora percebia a emboscada que Thorya");
       mvprintw(9,5, "tinha entrado.");
       mvprintw(10,5,"      Agora quando os cinco guerreiros se preparavam para entrar,");
       mvprintw(11,5,"percebem explosões vindas do alto da Torre e que um exército de criaturas");
       mvprintw(12,5,"surgia de um portais tanto acima quanto ao redor da Torre.");
       mvprintw(16,30,"Uma nova batalha se inicia...");
}
