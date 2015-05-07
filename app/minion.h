#ifndef MINION_H
#define MINION_H

#include "minion.cpp"
 
#include <iostream>
//using namespace std; INTERDIT ma cherie SEULEMENT dans le cpp
 
class Minion{

	public:
		Minion();
		~Minion();
	private:
		std::string nom;					// Le prenom
		float txBanana;						// Les pheromones
		const float tpsTeleportation = 5;	// Le temps de teleportation
		const int vMinion = 5;				// La vitesse de marche

		Node* pointDeDepart;

		SET tousLesPointsQuilAvisite;
};

#endif