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
    const int nbMinion = 29; // en minion
    const int nbVille = 29; // en minion
    //int tpsVisite = 30;// en min
    //double evapPheromone = 10;
    const int nbIteration = 0;

    cout << "BANANA !" << endl;

    Graph* graph = new Graph();    

    Minion* lesMinions[nbMinion];

    for(int nbMimi = 0; nbMimi < nbMinion; ++nbMimi) {
        int firstPt = getRandValue(0, 29);
        Minion* mimi = new Minion("Serge", firstPt);
        lesMinions[nbMimi] = mimi;
    }


    while(nbIteration != 100){

        for(int lieu = 0; lieu < nbVille; ++lieu) {
            do {
                int pt = getRandValue(0, 29);
            }while(!mimi->addPts(pt));

        }

        //eVAPORATION DE LA BANANE
        evapoBanane();
        ++nbIteration;
    }



    return 0;
}
