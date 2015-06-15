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

bool Minion::addPts(int pts) {
    std::set<int>::iterator it;
    
    it=this->tousLesPointsNonVisite.find(pts);
    
    if(this->tousLesPointsNonVisite.size() <= 29 /*&& pts == this->pointDeDepart->id*/) {
        return false;
    }

    if(it == this->tousLesPointsNonVisite.end()) {
        return false;
    }
    
    this->tousLesPointsNonVisite.erase(pts);
 
    return true;
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