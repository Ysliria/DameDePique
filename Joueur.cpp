//
// Created by auger on 12/12/2016.
//

#include "Joueur.h"

/**
 * Constructeur
 * @param string: nomJoueur
 */
Joueur::Joueur(string nomJoueur)
{
    Joueur::nomJoueur = nomJoueur;
}

/**
 * Donne le nom du joueur
 * @return string: nomJoueur
 */
const string &Joueur::getNomJoueur() const {
    return nomJoueur;
}

/**
 * Défini le nom du joueur
 * @param string: nomJoueur
 */
void Joueur::setNomJoueur(const string &nomJoueur) {
    Joueur::nomJoueur = nomJoueur;
}

/**
 * Donne le nombre de cartes restantes à jouer
 * @return int: nombreDeCarte
 */
int Joueur::getNombreDeCarte() const {
    return nombreDeCarte;
}

/**
 * Définie le nombre de carte à jouer
 * @param int: nombreDeCarte
 */
void Joueur::setNombreDeCarte(int nombreDeCarte) {
    Joueur::nombreDeCarte = nombreDeCarte;
}

/**
 * Obtenir le nombre de points
 * @return int: points
 */
int Joueur::getPoints() const
{
    return points;
}

/**
 * Modifier le nombre de points
 * @param int: points
 */
void Joueur::setPoints(int points)
{
    Joueur::points = points;
}

/**
 * Ajouter une carte à la main du joueur
 * @param string: carte
 */
void Joueur::ajouterCarte(string carte)
{
    Joueur::cartes[Joueur::getNombreDeCarte()] = carte;
    setNombreDeCarte(getNombreDeCarte() + 1);
}

/**
 * Obtenir la main du joueur
 * @return string: cartes[]
 */
const string *Joueur::getCartes() const
{
    return cartes;
}

void Joueur::afficherMainCartes() const
{
    cout << "____________________" << endl;
    cout << "Main du joueur " << Joueur::getNomJoueur() << endl;

    for (int i = 0; i < 13; ++i)
    {
        cout << "    " << i << " : " << Joueur::getCartes()[i] << endl;
    }
}

/**
 * Jouer une carte de la main du joueur
 * @param int: carteChoisie
 */
void Joueur::jouerCarte(int carteChoisie)
{
    Joueur::cartes[carteChoisie] = "";
}

/**
 * Destructeur
 */
Joueur::~Joueur() {}
