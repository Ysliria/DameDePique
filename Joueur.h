//
// Created by auger on 12/12/2016.
//
#ifndef DAMEDEPIQUE_JOUEUR_H
#define DAMEDEPIQUE_JOUEUR_H

#include <iostream>
using namespace std;

class Joueur {
private:
    int points = 0;
    int nombreDeCarte = 0;
    string cartes[13];
    string nomJoueur;

public:
// Constructeur
    Joueur(string nomJoueur);

// Accesseurs
    int getPoints() const;
    void setPoints(int points);

    const string &getNomJoueur() const;
    void setNomJoueur(const string &nomJoueur);

    const string *getCartes() const;

// Utilitaires
    void ajouterCarte(string carte);
    void afficherMainCartes() const;
    void jouerCarte(int carteChoisie);
    int getNombreDeCarte() const;
    void setNombreDeCarte(int nombreDeCarte);

// Destructeur
    virtual ~Joueur();
};

#endif //DAMEDEPIQUE_JOUEUR_H
