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

    /*tant que la condition d'arrêt n'est pas vérifiée :
    /pour i allant de 1 au nombre de minions :
        choisir un evenement de depart 
        pour chaque evenement non visité i :
            choisir une evenement dans la liste des evenements restants
        déposer des bananes sur le trajet
    biodégradation des bananes
    finilabananaparti
    */

    return 0;
}
