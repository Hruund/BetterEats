#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;

void menu_1(void), menu_2(void), quit();
void creer_nouv_compte (void), acces_compte(void);
void affichage_resto(), pizza(), sushis(), burger();
string plat;


int main()
{
    cout << "-------------- Better Eats --------------\n\n";
    menu_1();
    quit();
    return 0;
}
    
void menu_1()                                              
{
    int choix;
    cout << "Menu principal :\n";
    cout << "1 - Inscription  \n";
    cout << "2 - Se connecter \n";
    cout << "3 - Quitter \n";
    cout << "CHOIX : "; cin >> choix;
    cout << "\n";
    switch(choix)
    {
    case 1 :
        creer_nouv_compte();
    case 2 :
        acces_compte();
    case 3 :
        quit();
    default: quit();
    }
}

void creer_nouv_compte()
{
    string prenom, nom, mail, adresse, nom_complet, mdp;       //l'extension ".bank" est rajoutee au nom
    cout << "Prenom : "; cin >> prenom;
    cout << "Nom : "; cin >> nom;
    cout << "Mail : "; cin >> mail;
    cout << "Adresse : "; cin >> adresse;
    cout << "Mot de passe : "; cin >> mdp;
    nom_complet = prenom + nom;
     
    cout << "Compte cree ! \n";
    cout << "Bonjour " << prenom << " !\n\n";
    affichage_resto();
}
     
void acces_compte()                                                                    //liste les comptes crees et permet d'y acceder.
{
    string mail, mdp;  
    cout << "Mail: "; cin >> mail;
    cout << "Mot de passe : "; cin >> mdp;
    if(mail == "test@gmail.com" & mdp == "test"){
        cout << "Bonjour Test ! Comment allez vous aujourd'hui ?\n\n";
        affichage_resto();
    }
    else {
        cout << "Identifiants incorrects, retour au menu\n\n";
        menu_1();
    }
}

void pizza(){
    cout<< "Pizza fromage\n ";
    cout<< "Pizza chorizo\n ";
    cout<< "Pizza jambon\n ";
    cout << "CHOIX : "; cin >> plat;
}

void sushis(){
    cout<< "California au saumon \n ";
    cout<< "Sushis au saumon \n ";
    cout << "CHOIX : "; cin >> plat;
}

void burger(){
    cout<< "Burger au Poulet \n ";
    cout<< "Burger au Cantal \n ";
    cout<< "Burger vegetarien \n ";
    cout << "CHOIX : "; cin >> plat;
}

void affichage_resto(){
    int resto;
    cout << "Un petit creux ? Choississez un restaurant ! \n";
    cout << "1 - Chez Luigi - Pizzeria  \n";
    cout << "2 - Lola sushi - Sushi \n";
    cout << "3 - King burger - Burger \n";
    cout << "CHOIX : "; cin >> resto;
    cout << "\n Tres bon choix ! Voici les plats disponibles : \n";

    switch(resto)
    {
    case 1 :
        pizza();
    case 2 :
        sushis();
    case 3 :
        burger();
    default: quit();
    }
}

void quit()
{ 
    exit(0);         
}