//It is our future main class

#include <iostream>
#include "graph.h"
#include "minion.h"

/**
* Classe qui représente la classe principale .
*/
using namespace std;

int getRandValue(int min, int max) {
    return rand()%max+min;
}

void evapoBanane(Graph* graph){
    cout << "EvapoBanane"<<endl;
    graph->evapoBanane(1);

}

/**
 * Méthode de commencement de la partie de chasse aux minions
 */
int main() {

    srand(time(NULL));

    //Parametrage
    const int nbMinion = 29; // en minion
    const int nbVille = 29; // en minion
    //int tpsVisite = 30;// en min
    //double evapPheromone = 10;
    float txBanana = 12;
    int nbIteration = 0;

    cout << "BANANA !" << endl;

    Graph* graph = new Graph();    

    Minion* lesMinions[nbMinion];

    for(int nbMimi = 0; nbMimi < nbMinion; ++nbMimi) {
        int firstPt = getRandValue(0, 29);
        Minion* mimi = new Minion("Serge", graph->getNode(firstPt), txBanana);
        lesMinions[nbMimi] = mimi;
    }

    int pt = 0;

    while(nbIteration != 100){
        for(int nbMimi = 0; nbMimi < nbMinion; ++nbMimi) {
            
            Minion* mimi = lesMinions[nbMimi]; 

            for(int lieu = 0; lieu < nbVille; ++lieu) {
                mimi->visitPts();
            }
        }
        //Evaporation de la banane
        evapoBanane(graph);
        ++nbIteration;
    }

    return 0;
}
