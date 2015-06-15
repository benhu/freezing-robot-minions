#include "minion.h"

using namespace std;

Minion::Minion() {
}

Minion::Minion(std::string nom, float txBanana) {
    this->nom = nom;
    this->txBanana= txBanana;

    for(int i =0; i < 29; ++i) {
        tousLesPointsNonVisite.insert(i);
    }
}

void Minion::visitPts() {
}


/**
 * Ajoute de la distance parcouru au minion
 */ 
void Minion::addDistance(int ajout){
    this->walkedDist = ajout;    
}


void Minion::showMinion(){
    cout<< "I'm a Minion named " << this->nom << endl;
    cout<< "Distance Parcouru" << this->walkedDist << endl;
}
