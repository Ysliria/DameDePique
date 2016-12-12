//
// Created by auger on 12/12/2016.
//

#ifndef DAMEDEPIQUE_TOUR_H
#define DAMEDEPIQUE_TOUR_H

#include <iostream>
#include "Joueur.h"

using namespace std;

class Tour {
private:
    int nbCartes = 51; // de 0 à 51
    string cartes[52] = {"as coeur", "2 coeur", "3 coeur", "4 coeur", "5 coeur", "6 coeur", "7 coeur", "8 coeur", "9 coeur", "10 coeur", "valet coeur", "dame coeur", "roi coeur",
                         "as carreau", "2 carreau", "3 carreau", "4 carreau", "5 carreau", "6 carreau", "7 carreau", "8 carreau", "9 carreau", "10 carreau", "valet carreau", "dame carreau", "roi carreau",
                         "as trefle", "2 trefle", "3  trefle", "4 trefle", "5 trefle", "6 trefle", "7 trefle", "8 trefle", "9 trefle", "10 trefle", "valet trefle", "dame trefle", "roi trefle",
                         "as pique", "2 pique", "3 pique", "4 pique", "5 pique", "6 pique", "7 pique", "8 pique", "9 pique", "10 pique", "valet pique", "dame pique", "roi pique"};

public:
// Constructeurs
    Tour(Joueur& joueurA, Joueur& joueurB, Joueur& joueurC, Joueur& joueurD);

// Accesseurs
    int getNbCartes() const;
    void setNbCartes(int nbCartes);

    const string *getCartes() const;

// Utilitaires


// Destructeur
    virtual ~Tour();
};


#endif //DAMEDEPIQUE_TOUR_H
