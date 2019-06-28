/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_027(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 1");
       mvprintw(3,5, "      Não só por estarem com dúvidas e questionamentos, mas também pelo");
       mvprintw(4,5, "descaso que a Província de Domnus teve para com os elfos.");
       mvprintw(5,5, "      Eis que o Lobo desaparece.");
       mvprintw(6,5, "Após oferecer abrigo e assistência aos elfos, Jack pede para que Edward vá");
       mvprintw(7,5, "descobrir o que está acontecendo enquanto ele fica em Domnus ajudando os");
       mvprintw(8,5, "elfos refugiados. Legolas logo se oferece para acompanhá-lo, ainda que não");
       mvprintw(9,5, "os conhecesse, sabia que poderia confiar neles já que foram os únicos a");
       mvprintw(10,5,"prestar ajuda quando mais precisou.");
       mvprintw(11,5,"      Com isso, os dois partem para Vitkan, já que Jack sabia que");
       mvprintw(12,5,"Edward pode encontrar respostas com Tharkun.");
       mvprintw(13,5,"      Finalmente, em Krakia, muitos ficam preocupados com os possíveis");
       mvprintw(14,5,"presságios e após a decisão dos líderes da tribo, é concedido a missão de");
       mvprintw(15,5,"ir até a Torre de Vitkan e descobrir o que realmente está ocorrendo,");
       mvprintw(16,5,"a missão é designada para a Viking mais forte da vila, Thorya."); 
       mvprintw(17,5,"      Esta então com seu machado Kripto em suas mãos, recebe o escudo");
       mvprintw(18,5,"de sua mãe e parte rumo a Vitkan.");
}
