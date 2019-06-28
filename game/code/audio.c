/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Marielly Silva Alberti,   17150212.
 * Leonardo Nunes Rodrigues, 17250488.
 * Projeto: Adventurer's Quest.
 */


#include "../header/game.h"

void audio(int n_audio)
{
    int id = fork();
    if(id == 0) {
        if(n_audio == 0)
        {
            system("aplay -q ../audio/ataque.wav");
        }
    
        if(n_audio == 1)
        {
            system("aplay -q ../audio/game_start.wav");
        }
        if(n_audio == 2)
        {
            system("aplay -q ../audio/derrota.wav");
        }
        
    
    exit(0);
    }
} 
