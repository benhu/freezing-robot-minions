#include "minion.h"

using namespace std;

Minion::Minion() {
}

Minion::Minion(std::string nom, float txBanana) {
    this->nom = nom;
    this->txBanana= txBanana;
}

bool Minion::addPts(int pts) {
    std::set<int>::iterator it;
    
    it=this->tousLesPointsQuilAvisite.find(pts);
    
    if(this->tousLesPointsQuilAvisite.size() <= 29 && pts == this->pointDeDepart->id) {
        return false;
    }
    
    if(it == this->tousLesPointsQuilAvisite.end()) {
        return false;
    }
    
    this->tousLesPointsQuilAvisite.insert(pts);
    
    return true;
}
