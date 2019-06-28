/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_045(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 3");
       mvprintw(3,5, "      Kyra o interrompe: 'Foi você o responsável pelo");
       mvprintw(4,5, "golpe no Kraken, então?'.");
       mvprintw(5,5, "      Karthos confirma e continua: 'Não vim para acabar com");
       mvprintw(6,5, "Lundavik como todos pensam, vim porque tive uma visão de Merlin,");
       mvprintw(7,5, "pedindo ajuda. E por mais improvável que seja após todos esses anos,");
       mvprintw(8,5, "se existir a possibillidade dele estar vivo, devo tentar.");
       mvprintw(9,5, "      Devo isso a ele!'");
       mvprintw(10,5,"      Kyra então pergunta o motivo das correntes já que não lhes");
       mvprintw(11,5,"desejava nenhum mal.");
       mvprintw(12,5,"      Tharkun explica: 'Precaução..', a mercenária confusa pede pra que");
       mvprintw(13,5,"a amiga feiticeira se explicasse, Tharkun então continua:");
       mvprintw(14,5,"      'Precaução de que eu não o matasse assim que eu o visse.'");
       mvprintw(15,5,"      Continua agora em direção à Karthos:");
       mvprintw(16,5,"      'Você não faz ideia de quantas mentiras sobre você eu tive que aceitar"); 
       mvprintw(17,5,"para que no fim das contas você me dizer que fugiu para meu bem. Eu procurei");
       mvprintw(18,5,"por você por todos os lados. Estudei uma quantia imensurável de livros sobre");
       mvprintw(19,5,"localizadores, parei de buscar ajuda daqueles que realmente queriam que você");
       mvprintw(20,5,"estivesse morto..'.");
       mvprintw(21,5,"      E em lágrimas continua:");
}
