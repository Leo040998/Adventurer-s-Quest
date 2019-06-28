/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_014(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Início");
       mvprintw(7,8,  "Thorya");
       mvprintw(9,8, "     - Guerreira Viking e Líder da Equipe, portava o Machado Kripto e");
       mvprintw(10,8, "o Escudo de Vitae.");
       mvprintw(12,8, "     O Machado foi dado como herança de família, entregado à ela após");
       mvprintw(13,8, "o falecimento de seu pai, Thron.");
       mvprintw(15,8, "     Enquanto o Escudo foi dado por sua mãe, no dia em que todo o");
       mvprintw(16,8, "caos se iniciava, sendo que este havia sido forjado por antigos elfos,");
       mvprintw(17,8, "dado no dia de seu casamento.");
       mvprintw(19,8, "     A guerreira apesar de cabeça-dura, sempre demonstrou liderança");
       mvprintw(20,8, "e esperteza em suas ações.");
}
