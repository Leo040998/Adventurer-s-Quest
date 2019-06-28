/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void Pg_061(){
    
    clear();
        
    box(stdscr,58,92);
       move(2,1);
       hline(0,10);
       mvprintw(1,2,"Fase 5");
       mvprintw(3,5, "      Thorya então reune todas as armas e com um único");
       mvprintw(4,5, "golpe parte todas as armas liberando todos da antiga dimensão.");
       mvprintw(5,5, "      Os magos revoltados com tal decisão, agora se encontram");
       mvprintw(6,5, "na antiga Torre de Viktan, perguntam o porquê de tal ação.");
       mvprintw(7,5, "      Thorya, ainda que sabendo que provavelmente teria liberto todas as");
       mvprintw(8,5, "criaturas uma vez presa, sabia que seria o único modo de retornar para casa.");
       mvprintw(9,5, "comandado por Tharkun, o antigo cavaleiro ainda pede para que pudesse");
       mvprintw(10,5,"ser o novo aprendiz se assim sua irmã o aceitasse.");
       mvprintw(11,5,"      Tharkun, agora utilizando seu antigo nome Lionna Thark,");
       mvprintw(12,5,"o aceita com um sorriso no rosto. Além de confirmar aos outros");
       mvprintw(13,5,"que os antigos serão devidamente punidos e que toda Vitkan será");
       mvprintw(14,5,"reestruturada para que nada do tipo volte a acontecer novamente.");
       mvprintw(15,5,"      Kyra ainda deseja encontrar os antigos responsáveis do atentado");
       mvprintw(16,5,"e iria continuar a busca, só que Legolas se oferece para acompanhá-la"); 
       mvprintw(17,5,"assim que resolvesse os assuntos com seu pai. Nisso, ambos se preparam");
       mvprintw(18,5,"para ir para Domnus e após isso, seguir com a perseguição de Kyra.");
}
