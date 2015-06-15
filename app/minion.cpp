#include "minion.h"

using namespace std;

Minion::Minion() {
}

Minion::Minion(std::string nom, Node* node, float txBanana) {
    this->nom = nom;
    this->pointDeDepart = node;
    this->txBanana= txBanana;

    for(int i =0; i < 29; ++i) {
        this->tousLesPointsNonVisite.push_back(i);
    }
}

void Minion::visitPts() {
    int size = this->tousLesPointsNonVisite.size();

    int pos = this->getRandValue(0, size);

    std::list<int>::iterator it = std::next(this->tousLesPointsNonVisite.begin(), pos);

    int val = (int)(*it);

    if(this->pointDeDepart->id == val)
    {
        return;
    }

    this->tousLesPointsNonVisite.erase(it);
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

int Minion::getRandValue(int min, int max) {
    return rand() % max + min;
}
