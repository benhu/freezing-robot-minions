#include "minion.h"

using namespace std;

Minion::Minion() {
}

Minion::Minion(std::string nom, Node* node, float txBanana) {
    this->nom = nom;
    this->pointDeDepart = node;
    this->txBanana= txBanana;

    this->clearList();
}

int Minion::visitPts() {
   
    int size = this->tousLesPointsNonVisite.size();
    int pos = 0; 
    int val = 0;

    std::list<int>::iterator it = this->tousLesPointsNonVisite.begin();

    do {

        pos = this->getRandValue(0, size);

        it = std::next(this->tousLesPointsNonVisite.begin(), pos);

        val = (int)(*it);
    } while(this->pointDeDepart->id == val && size != 1);

    this->tousLesPointsNonVisite.erase(it);

    if(size - 1 == 0) {
        this->clearList();
    }

    return val;
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

void Minion::clearList() {
    this->walkedDist = 0;    
    for(int i =0; i < 29; ++i) {
        this->tousLesPointsNonVisite.push_back(i);
    }   
}
