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
        void showMinion();
        void addDistance(int ajout);


	private:
		std::string nom;					// Le prenom
		float txBanana;						// Les pheromones
		const float tpsTeleportation = 5;	// Le temps de teleportation
		const int vMinion = 5;				// La vitesse de marche

		int walkedDist;

		Node* pointDeDepart;

<<<<<<< HEAD
        std::set<int> tousLesPointsQuilAvisite;


=======
        std::set<int> tousLesPointsNonVisite;
>>>>>>> 6b5a11ef6a6271aff3ff49cbb4f1f6b9bca62b9b
};

#endif
