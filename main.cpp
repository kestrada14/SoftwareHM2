#include <iostream>
#include "stock.h"

using namespace std;


int main(){
    Account Mateo;

    float Balance  = 53456.23;
    string Name = "Mateo Ortega";

    Mateo.SetAccountName(Name);
    Mateo.SetBalance(Balance);
    cout << "This is the Account Name " << Mateo.GetAccountName() << "\n";
    cout << "This is the Account Balance " << Mateo.GetBalance() << "\n";

}