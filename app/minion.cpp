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

/*void Minion::VisitPts() {
}*/
