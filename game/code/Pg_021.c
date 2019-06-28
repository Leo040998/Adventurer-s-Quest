/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_021(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(6,8, "Tharkun");
       mvprintw(9,8,"      - Feiticeira e Suporte da Equipe, portava o Cetro de Istaria e Anel");
       mvprintw(10,8,"de Sindara. Enquanto o Cetro concede não só extrema magia àquele que");
       mvprintw(11,8,"o possui, como também a imortalidade do usuário, todavia, se este for");
       mvprintw(12,8,"destruído, o usuário é destruído com ele. O Anel, por sua vez,");
       mvprintw(13,8,"proporciona a capacidade de curar tanto o usuário quanto indivíduos ao");
       mvprintw(15,8,"      Tharkun é a atual Líder Guardiã de Vitkan, seu mentor foi o próprio");
       mvprintw(16,8,"redor. Merlin, contudo só recebeu essa posição após desaparecimento de");
       mvprintw(17,8,"seu antigo professor.");
       mvprintw(18,8,"      Com o decorrer dos anos seguiu a risca todos ensinamentos e leis");
       mvprintw(19,8,"além de se envolver o mínimo possível nos assuntos das outras províncias,");
       mvprintw(20,8,"aprendidas, como o Antigo Conselho dos Magos havia pedido.");
}
