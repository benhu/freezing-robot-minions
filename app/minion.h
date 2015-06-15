#ifndef MINION_H
#define MINION_H

#include <iostream>
#include <list>
#include "node.h"

class Minion{

	public:
        Minion();
		Minion(std::string nom, Node* node, float txBanana);
		~Minion();
        void visitPts();
        void showMinion();
        void addDistance(int ajout);
	private:
		std::string nom;					// Le prenom
		float txBanana;						// Les pheromones
		const float tpsTeleportation = 5;	// Le temps de teleportation
		const int vMinion = 5;				// La vitesse de marche
		int walkedDist;
		Node* pointDeDepart;
        std::list<int> tousLesPointsNonVisite;
        int getRandValue(int min, int max);
};

#endif
