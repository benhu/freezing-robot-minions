#ifndef MINION_H
#define MINION_H

#include <iostream>
#include <set>
#include "node.h"

class Minion{

	public:
        Minion();
		Minion(std::string nom, float txBanana);
		~Minion();
        bool addPts(int pts);
	private:
		std::string nom;					// Le prenom
		float txBanana;						// Les pheromones
		const float tpsTeleportation = 5;	// Le temps de teleportation
		const int vMinion = 5;				// La vitesse de marche

		Node* pointDeDepart;

        std::set<int> tousLesPointsQuilAvisite;
};

#endif
