//
// Created by auger on 12/12/2016.
//

#include <algorithm>
#include "Tour.h"

/**
 * Le constructeur distribue les cartes au différents joueurs et instancie la partie
 * @param Joueur&: joueurA
 * @param Joueur&: joueurB
 * @param Joueur&: joueurC
 * @param Joueur&: joueurD
 */
Tour::Tour(Joueur& joueurA, Joueur& joueurB, Joueur& joueurC, Joueur& joueurD)
{
    random_shuffle(cartes, cartes + 51);

    for (int i = 0; i < 13; ++i)
    {
        if (Tour::getNbCartes() >= 0)
        {
            joueurA.ajouterCarte(Tour::getCartes()[nbCartes]);
            joueurB.ajouterCarte(Tour::getCartes()[nbCartes-1]);
            joueurC.ajouterCarte(Tour::getCartes()[nbCartes-2]);
            joueurD.ajouterCarte(Tour::getCartes()[nbCartes-3]);
            Tour::setNbCartes(Tour::getNbCartes() - 4);
        }
    }
}

/**
 * Obtenir le nombre de cartes du paquet
 * @return int: nbCartes
 */
int Tour::getNbCartes() const {
    return nbCartes;
}

/**
 * Modifier le nombre de cartes du paquet
 * Utiliser lors de la distribution pour connaitgre le nombre de cartes restants à distribuer
 * @param int: nbCartes
 */
void Tour::setNbCartes(int nbCartes) {
    Tour::nbCartes = nbCartes;
}

/**
 *
 * @return string: cartes
 */
const string *Tour::getCartes() const {
    return cartes;
}

/**
 * Destructeur
 */
Tour::~Tour() {}
