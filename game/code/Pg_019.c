/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_019(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(6,8, "Legolas");
       mvprintw(9,8,"      - Arqueiro Elfo e Estrategista da Equipe, portava um Arco mágico");
       mvprintw(10,8,"e um pergaminho encantado que revela locazições até então desconhecidas.");
       mvprintw(12,8,"     Seu Arco não necessitava de flechas, já que possuía a habilidade de");
       mvprintw(13,8,"disparar projéteis sem gasto de munição, uma de suas invenções mais");
       mvprintw(14,8,"incríveis, sem contar também o pergaminho de Durin, que sempre mostrava");
       mvprintw(15,8,"todas as localizações possíveis, além de mostrar passagens secretas.");
       mvprintw(17,8,"      Apesar de ser o futuro rei de Lumnus, Legolas ainda deseja explorar");
       mvprintw(18,8,"e viajar por toda Lundavik. Ainda que tenha necessidade mais cedo ou mais");
       mvprintw(19,8,"tarde, Legolas aproveita os raros momentos em que pode sair e explorar");
       mvprintw(20,8,"por toda Lumnus.");
}
