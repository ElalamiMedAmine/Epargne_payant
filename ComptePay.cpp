#include <iostream>
#include"ComptePay.h"
#include"Devise.h"


 ComptePay::ComptePayant()
    {
    }

bool  ComptePay::retirerArgent(Devise somme){

this->Compte::retirerArgent(somme);
this->Compte::retirerArgent(somme0.05);

}

void  ComptePay::deposerArgent(Devise somme)
 {
 this->Compte::deposerArgent(somme);
this->Compte::deposerArgent(somme0.05);

 }

ComptePay::~ ComptePay(){}