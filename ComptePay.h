#include <iostream>
#include "Compte.h"
#include "Client.h"
#include "Operation.h"
#include "Devise.h"



class ComptePay : public Compte
 {
    public:
ComptePay ();
bool retirerArgent(Devise montant)override;
void deposerArgent(Devise montant)override;
 ~ComptePay ();
};