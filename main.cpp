#include <iostream>
#include <algorithm>
#include "Joueur.h"
#include "Tour.h"

using namespace std;

int main() {
// faire un tableau
    /*int nbCartes = 51;
    string cartes[52] = {"as coeur", "2 coeur", "3 coeur", "4 coeur", "5 coeur", "6 coeur", "7 coeur", "8 coeur", "9 coeur", "10 coeur", "valet coeur", "dame coeur", "roi coeur",
                         "as carreau", "2 carreau", "3 carreau", "4 carreau", "5 carreau", "6 carreau", "7 carreau", "8 carreau", "9 carreau", "10 carreau", "valet carreau", "dame carreau", "roi carreau",
                         "as trefle", "2 trefle", "3  trefle", "4 trefle", "5 trefle", "6 trefle", "7 trefle", "8 trefle", "9 trefle", "10 trefle", "valet trefle", "dame trefle", "roi trefle",
                         "as pique", "2 pique", "3 pique", "4 pique", "5 pique", "6 pique", "7 pique", "8 pique", "9 pique", "10 pique", "valet pique", "dame pique", "roi pique"};
*/
// créer les joueurs
    Joueur joueurA("A");
    Joueur joueurB("B");
    Joueur joueurC("C");
    Joueur joueurD("D");

    Tour tour1(joueurA, joueurB, joueurC, joueurD);

// melanger le tableau: attention a chaque melange en partant de la base on a le même résultat
  //  random_shuffle(cartes, cartes + 51);

    /*for (int j = 0; j < nbCartes; ++j) {
        cout << "carte " << j << ": " << cartes[j] << endl;
    }*/

// faire une boucle de distribution
    /*for (int i = 0; i < 13; ++i)
    {
        if (nbCartes >= 0)
        {
            joueurA.ajouterCarte(cartes[nbCartes]);
            joueurB.ajouterCarte(cartes[nbCartes-1]);
            joueurC.ajouterCarte(cartes[nbCartes-2]);
            joueurD.ajouterCarte(cartes[nbCartes-3]);
            nbCartes -= 4;
        }
    }
*/
    joueurA.afficherMainCartes();

// todo jouer et retenir les points




// carte des joueurs:
    /*cout << "____________________" << endl;
    for (int j = 0; j < 13; ++j) {
        cout << "carte " << j << ": " << joueurA[j] << endl;
    }

    cout << "____________________" << endl;
    for (int j = 0; j < 13; ++j) {
        cout << "carte " << j << ": " << joueurB[j] << endl;
    }

    cout << "____________________" << endl;
    for (int j = 0; j < 13; ++j) {
        cout << "carte " << j << ": " << joueurC[j] << endl;
    }

    cout << "____________________" << endl;
    for (int j = 0; j < 13; ++j) {
        cout << "carte " << j << ": " << joueurD[j] << endl;
    }*/

}