#include <iostream>
#include <map>
#include "BrockageAccount.h"


class Stock{
    protected:
        std::string StockName;
        std::string StockShortName;
        std::string PurchaseDate;
        std::string CurrentDate;
        float StockValue;
        double MarketCap;
        float DivYield;
          
    public:
        void SetStockStats(std::string Name, std::string ShortName , float Value,
        double MKCap, float Yield, std::string Date
        ){
            StockName = Name;
            StockShortName = ShortName;
           StockValue = Value;
            MarketCap = MKCap;
            DivYield = Yield;
            PurchaseDate = Date;
        }
        std::string GetName() const{
            return StockName;
        }
        std::string GetShortName() const{
            return StockShortName;
        }
        float GetValue() const{
            return StockValue;
        }
        float GetMKCap() const{
            return MarketCap;
        }
        float GetYield() const{
            return DivYield;
        }
        std::string GetPurchaseDate() const{
            return PurchaseDate;
        }
        void StockInfo(){
            std::cout << "Stock Name: " << StockName << "\n";
            std::cout << "Stock ShortName: " << StockShortName << "\n";
            std::cout << "Stock Value: " << StockValue << "\n";
            std::cout << "Stock MarketCap: " << MarketCap << "\n";
            std::cout << "Stock Divident Yield: " << DivYield << "\n";
            
        }

};



class  Portfolio: public Stock, public Account{

private:

double PortfolioBalance;
std::map<std::string ,double > Portfoliolist;

public:
void setPortfolioBalance(double Bal){
    PortfolioBalance = Bal;
}
void StockPurchase(int NumOfStocksPurchased){
    double Balance = NumOfStocksPurchased * StockValue;
    if (Balance > GetBalance()){
        std::cout << "Insufficent Balance";
    }
    else{
        WithdrawlToAccount(Balance);
        PortfolioBalance = PortfolioBalance+ Balance;
        Portfoliolist.insert(std::pair<std::string , double>(GetShortName(),Balance));
        std::cout << "\n" << Portfoliolist[GetShortName()] << "\n";
    }
}

void Balance(){
    std::cout << "\n" << PortfolioBalance << "\n";
}



};