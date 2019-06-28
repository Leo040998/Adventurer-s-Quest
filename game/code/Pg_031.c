/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_031(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 2");
       mvprintw(3,5, "      Todos concordam em ir rumo à Krakia, contanto que depois fossem");
       mvprintw(4,5, "para o antigo local do selo, se caso desejassem acompanhar Tharkun.");
       mvprintw(5,5, "      E antes de partir, Tharkun oferece alguns equipamentos a fim");
       mvprintw(6,5, "de preparar o Grupo para um possível embate. Entrega para Legolas e Kyra,");
       mvprintw(7,5, "relíquias que potencializam suas habilidades e faz com que sejam capazes");
       mvprintw(8,5, "de dar qualquer dano contras as qualquer tipo feras mística. Além de");
       mvprintw(9,5, "oferecer o Amuleto Vingança da Rainha para Edward, com intenção que ele");
       mvprintw(10,5,"entregasse para Jack no próximo encontro deles. Tharkun utiliza de um portal");
       mvprintw(11,5, "para levar todos para Krakia mais rapidamente.");
       mvprintw(12,5, "      Quando chegam à Ilha, deparam-se com uma enorme rocha vindo em ");
       mvprintw(13,5,"direção à ilha.");
       mvprintw(14,5,"      Prontamente, Tharkun lança um feitiço evitando o choque e revelando");
       mvprintw(15,5,"que na verdade a rocha era na verdade o Kraken, agora acompanhado de navios");
       mvprintw(16,5,"que surgiam das profundezas, repletos de criaturas bizarras, que desde início");
       mvprintw(17,5," demonstraram que o objetivo era atacar Krakia.");
       mvprintw(19,30,"A batalha começa..");
}
