#include <iostream>
#include <string>
#include "Stocks.h"


using namespace std;


int main(){
    float Balance  = 50.0;
    float Add;
    string Name = "Mateo Ortega";
    string AccountOperations;
    string CommandList = "Statement = Check Account Statement\nDeposit = Deposit Money \n Withdrawl = Withdraw Money \n Purchase = Purchase Stock\n Balance = Total Value of Stocks \n StockInfo =  Check The Stock Information You are purchasing \n";

    cout << "\n" << CommandList << "\n";
    cin >> AccountOperations;

    Stock Tesla;  // Testing for Tesla Stock 
        string StockName = "Tesla";
        string StockShortName ="TSLA";
        string PurchaseDate = "09/11/2022";
        string CurrentDate = "09/11/2022";
        float StockValue = 299.68;
        double MarketCap;
        MarketCap = 939.04 * (10e6);
        float DivYield =0;




    int i = 0;
    Portfolio MateosPort;
    int numstocks;
    MateosPort.SetAccountName(Name);
    MateosPort.SetBalance(Balance);
    MateosPort.SetStockStats(StockName,StockShortName,StockValue,MarketCap,DivYield
    ,CurrentDate);
    MateosPort.setPortfolioBalance( i =0);
    while(AccountOperations != "Stop"){
        
        if(AccountOperations == "Deposit"){
            cin >> Add;
            MateosPort.DepositToAccount(Add);
        }
        else if(AccountOperations == "Statement"){
             MateosPort.PrintStatement();   
        }
        else if(AccountOperations == "Withdrawl"){
            cin >> Add;
            MateosPort.WithdrawlToAccount(Add);
        }
        else if(AccountOperations == "Purchase"){
            cin >> numstocks;
            MateosPort.StockPurchase(numstocks);

        }
        else if(AccountOperations == "Balance"){
            MateosPort.Balance();
        }
        else if(AccountOperations == "StockInfo"){
            MateosPort.StockInfo();
        }
        else{
            cout << "Try again \n" << CommandList << "\n";
        }



      cin >> AccountOperations;
    }

}