#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;

void menu_1(void);
void menu_2(void);
void quit(int);                //transforme une chaine de caractere en un float
void creer_nouv_compte (void );
void acces_compte(void);
int appel_erreur (int);
void affichage_resto();
void pizza();
void sushis();
void burger();
float recup;                                       
string nom_compte_courant;


int main()
{
    menu_1();
    quit(1);
    return 0;
}
    
void menu_1()                                              
{
    int choix;
    cout << "MENU  :                 \n";
    cout << "1-Creer nouveau compte  \n";
    cout << "2-Acces compte existant \n";
    cout << "3-Quit \n";
    cout << "CHOIX : "; cin >> choix;
    switch(choix)
    {
    case 1 :
            creer_nouv_compte();
    case 2 :
            acces_compte();
    case 3 :
            quit(1);
    default: quit(1);
    }
}

void creer_nouv_compte()
{
    string prenom, nom, mail, adresse, nom_complet, mdp;       //l'extension ".bank" est rajoutee au nom
    cout << "Prénom : "; cin >> prenom;
    cout << "Nom : "; cin >> nom;
    cout << "Mail : "; cin >> mail;
    cout << "Adresse : "; cin >> adresse;
    cout << "Mot de passe : "; cin >> mdp;
    nom_complet = prenom + nom;
     
    cout << "Compte crée ! \n";
    affichage_resto();
}
     
void acces_compte()                                                                    //liste les comptes crees et permet d'y acceder.
{
    string mail, mdp;  
    cout << "Mail: "; cin >> mail;
    cout << "Mot de passe : "; cin >> mdp;
    if(mail == "test@gmail.com" & mdp == "test"){
        affichage_resto();
    }
    else {
        appel_erreur (1);
        cout << "Identifiants incorrects";
        menu_1();
    }
}

void pizza(){
    cout<< "Pizza \n ";
}

void sushis(){
    cout<< "California au saumon \n ";
}

void burger(){
    cout<< "Burger au Poulet \n ";
}

void affichage_resto(){
    int resto;
    cout << "Restaurants :  \n";
    cout << "1- Chez Luigi - Pizzeria  \n";
    cout << "2- Lola sushi - Sushi \n";
    cout << "3- King burger - Burger \n";
    cout << "CHOIX : "; cin >> resto;

    switch(resto)
    {
    case 1 :
            pizza();
    case 2 :
            sushis();
    case 3 :
            burger();
    default: pizza();
    }
}

int appel_erreur(int erreur)
{
    if (erreur == 1)
    {
               cerr << "ERREUR: ACCES FICHIER IMPOSSIBLE";
    }
    if (erreur == 2)
    {
               cerr << "ERREUR: SAISIE INCORECTE";
    }
    return 1;                              
}     


void quit(int param)
{ 
     exit(0);         
}