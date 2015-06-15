Les minions voyagent
==

#Equipe
- Olivia Bruce
- Benjamin Humeau

![Star Minion](https://raw.githubusercontent.com/benhu/freezing-robot-minions/master/assets/star_minion.jpg "Star Minion")

#Executable
```
	make
	minions
```

# Histoire
Dans une ville futuriste Nuctrantes, un évènement (le voyage à Nuctrantes) nécessite l'optimisation des voyages. 
Comme le problème du voyageur du commerce nous voulons optimiser les déplacements/ le coût pour les utilisateurs. 
On peut identifier notre voyage comme le parcours des noeuds d'un graphe. Les petits minions vont nous aider à y voir plus clair. Munis d'une technologie révolutionnaire; la ceinture de téléportation tellurique; nous devons repérer si il est plus intéressant de marcher ou de se téléporter.
Nos minions seront à même de déterminer le meilleur chemin, le meilleur prix ou le meilleur qualité/prix.

On envoie par itération de nombreux minions sur un parcours.
Les minions crient Banana sur les routes. Le banana étant ultrasonic, il cree des bananes qui se déposent sur les routes emprunter. Ce qui permet aux minions de l'itération suivante, de choisir un chemin si le taux de banana est important. Plus il y a de de cri de Banana sur les routes, plus les minions emprunteront le route.
Les bananes ont rééllement un pouvoir attractif sur les minions et les rends totalement incapable d'avancer dans une autre direction que celle où; il y a des bananes.

![Minions](http://media.giphy.com/media/mikVwhc0ntV0k/giphy.gif  "Minions")

#Règles
- Bond : 5min
- Vitesse Touriste : 5km/h
- Temps visites : 15 à 60 min
- On entre en un noeud0 et on sort par un noeud0 (dépot de ceinture).
- On ne visite qu’une fois chaque evenement 
- Plus une ville est loin, moins elle sera choisie. (Visibilité)
- Un minion choisira un chemin avec le plus de banane.
- Une fois son trajet terminé, la fourmi dépose, sur l’ensemble des arêtes parcourues, plus de phéromones si le trajet est court.
- Les phéromones s’évaporent à chaque itération.



#Formule
La règle de déplacement, appelée « règle aléatoire de transition proportionnelle », est écrite mathématiquement sous la forme suivante :

![Formule](http://upload.wikimedia.org/math/0/7/c/07c690df6ac123d810621855ae3e01b2.png "YOLO")

- où Jik est la liste des déplacements possibles pour un minion k lorsqu’il se trouve sur un evenement i, 
- ηij la visibilité,  
Les deux principaux paramètres contrôlant l’algorithme sont α et β, qui contrôlent l’importance relative de l’intensité et de la visibilité d’une arête.
On va donc pondéré sur la distance et l'intensité des bananes.

#Etape de l'otpimisation par les minions

L’algorithme général repose sur un ensemble de minions, chacune parcourant un trajet parmi ceux possibles. À chaque étape, le minion choisit son parcours.


L'algorithme en pseudo code :
```
tant que la condition d'arrêt n'est pas vérifiée :
	pour i allant de 1 au nombre de minions :
		choisir un evenement de depart 
		pour chaque evenement non visité i :
			choisir une evenement dans la liste des evenements restants
		déposer des bananes sur le trajet
	biodégradation des bananes
finilabananaparti
```
La condition d'arrêt peut être :
- Un nombre défini d'itération (sufisament grand pour que l'algorithme converge).
- Ou alors un algorithme qui detecte une convergence ou divergence de la solution, et s'arrête automatiquement.

La fonction d'évaluation pondère en minimisant la distance entre deux points et en prenant le plus grand nombre de banane possible.

#Constatation
Nos minions seront à même de déterminer le meilleur chemin, le meilleur prix ou le meilleur qualité/prix.
Nous constatons :
- que le plus rapide chemin mais le plus coûteux est l'utilisation de la ceinture de téléportation à chaque déplacement.
- le meilleur prix c'est de marcher tout le temps mais c'est plus long. 

#Test

A compléter.

#Conclusion 

On a un peu perdu du temps sur la réalisation de l'algorithme, ce qui fait que l'on.
