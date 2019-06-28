/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_049(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Foi então que Thron fugiu com o machado, enquanto");
       mvprintw(4,5, "ele e Kraven chamavam a atenção dos magos, enquanto fugiam ");
       mvprintw(5,5, "para o barco.");
       mvprintw(7,5, "      Conta também que até poderiam ter enfrentado, mas quando");
       mvprintw(8,5, "perceberam a posse de outras armas místicas, optaram pela fuga.");
       mvprintw(10,5, "      Desde então, nunca mais ouviu falar de Thron.");
       mvprintw(12,5, "      Eis que Tharkun se recorda do machado de Thorya e percebe");
       mvprintw(13,5,"que aquele poderia vir a ser o machado que o Conselho tanto desejava.");
       mvprintw(15,5,"      E além disso, que este estava a caminho de de Vitkan,");
       mvprintw(16,5,"já que o grupo havia combinado de se encontrar lá.");
       mvprintw(18,5,"      Desse modo, o trio resolve se apressar porquê se o machado");
       mvprintw(19,5,"ficasse em posse dos magos, tudo estaria acabado.");
       mvprintw(21,5,"      E então partem para a Torre de Vitkan.");
}
