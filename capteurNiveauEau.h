#ifndef CAPTEUREAU_H
#define CAPTEUREAU_H

#include <string.h>
#include <stdio.h>

using namespace std;


/*
    le capteur de niveau d'eau a pour objectif de signaler lorsque le reservoir d'eau dans le bac de culture est a son niveau maximal.
    Il s'agit d'un simple pont diviseur de tension. Si les deux pattes du capteur ne sont pas immergees alors la resistance vaut +infini 
    et la tension lu vaut alors 0 modulo la resistance du bas. On initialise la broche de GPIO en pull-up.

    Connexion du capteur sur le GPIO33 configure en pull-up soit la pin 33

    Ce capteur permet de fermer l'electrovanne. L'electrovanne peut etre active que si ce capteur n'est pas vrai. 
*/

class CapteurNiveauEau{
    public :

    //Constructeur
    CapteurNiveauEau();

    //Destructeur
    ~CapteurNiveauEau();

    //initialisation du pin de lecture
    void capteurEau_Init(int mode);

    //Mise à jour de la valeur du capteur
    void setLevel();

    //Revoie de la valeur du capteur
    bool getLevel();
    
    private :
    bool niveauMax;
};

#endif