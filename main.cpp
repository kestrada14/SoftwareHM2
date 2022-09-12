#include <iostream>
#include <string>
#include "BrockageAccount.h"
#include "Stocks.h"


using namespace std;


int main(){
    Account Mateo;


    float Balance  = 50.0;
    float Add;
    string Name = "Mateo Ortega";
    string AccountOperations;
    cin >> AccountOperations;
    Mateo.SetAccountName(Name);
    Mateo.SetBalance(Balance);
    while(AccountOperations != "Stop"){
        
        if(AccountOperations == "Add"){
            cin >> Add;
            Mateo.DepositToAccount(Add);
        }
        if(AccountOperations == "Statement"){
             Mateo.PrintStatement();   
        }
      cin >> AccountOperations;
    }

    Stock Tesla;
        string StockName = "Tesla";
        string StockShortName ="TSLA";
        string PurchaseDate = "09/11/2022";
        string CurrentDate = "09/11/2022";
        float StockValue = 299.68;
        double MarketCap;
        MarketCap = 939.04 * (10e6);
        float DivYield =0;

    Tesla.SetStockStats(StockName,StockShortName,StockValue,MarketCap,DivYield
    ,CurrentDate);
    Tesla.StockInfo();

}