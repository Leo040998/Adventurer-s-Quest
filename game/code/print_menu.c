/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void print_menu(int menu_opcao){
    clear();
    box(stdscr,58,92);
    move(2,1);
    hline(0,10);
    mvprintw(1,2,"Menu");
    mvprintw(4,30, "Adventurer's Quest");
    mvprintw(8,27, "1 - Começo da Aventura");
    mvprintw(11,27,"2 - Instruções");
    mvprintw(14,27,"3 - Sair");
    if(menu_opcao == 0){
        mvprintw(8,23, "-->");
        refresh();
    }
    if(menu_opcao == 1){
        mvprintw(11,23,"-->");
        refresh();
    }
    if(menu_opcao == 2){
        mvprintw(14,23,"-->");
        refresh();
        }
}
