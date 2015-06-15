//It is our future main class

#include <iostream>
#include "graph.h"
#include "minion.h"

/**
* Classe qui représente la classe principale .
*/
using namespace std;

int getRandValue(int min, int max) {
    return (rand()/(int)RAND_MAX)*(max-min)+min;
}

/**
 * Méthode de commencement de la partie de chasse aux minions
 */
int main() {
    
    //Parametrage
    int nbMinion = 29; // en minion
    //int nbVille = 29; // en minion
    //int tpsVisite = 30;// en min
    //double evapPheromone = 10;


    Graph* graph = new Graph();    

    for(int nbMimi = 0; nbMimi < nbMinion; ++nbMimi) {
        int firstPt = getRandValue(0, 29);
        Minion* mimi = new Minion("Serge", firstPt);

    }

    return 0;
}
