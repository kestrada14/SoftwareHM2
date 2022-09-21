#include <iostream>
#include <map>
#include "BrockageAccount.h"
#include <chrono>
#include <ctime> 


class Stock{
    private:
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
std::map<std::string ,double > Portfoliolist; // This map will store the history of all transactions

public:

Portfolio(){
    PortfolioBalance = 0;
}
void setPortfolioBalance(double Bal){
    PortfolioBalance = Bal;
}
void StockPurchase(int NumOfStocksPurchased){
    double Balance = NumOfStocksPurchased * GetValue();
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

class Money{
private:
double amount;
bool availabe;
std::string currency_type;

public:
//constructor
Money (double cash,std::string currency){
    amount = cash;
    currency_type = currency;
    availabe = false;
}

void SetCash(double money){
    amount = money;
}
double GetCash(){
    return amount;
} 
void SetCurrency(std::string type){
    currency_type = type; // USD, Euros ,etc.
}
std::string GetCurrency(){
    return currency_type;
} 

void DepositMoney(double deposit){
    amount = deposit + amount;
    
        std::cout << "Deposit of " << deposit <<  "Completed\n";
}
void WithdrawMoney(double withdrawl){
    if(withdrawl > amount){
        std::cout << "No money available \n";
    }
    else{
        amount = amount - withdrawl;
        std::cout << "Withdraw Completed of " << withdrawl << " \n" << "Current Balance of Account is "<< amount << "\n";
    }
}

};

class Time{
    private:
    time_t my_time;
    std::string TimeZone;
    public:
    Time(std::string Zone){
        my_time = time(NULL);
        TimeZone = Zone;
    }
    
    void SetTimeZone ( std::string Zones){
        TimeZone = Zones;
    }
    std::string GetTimeZone(){
        return TimeZone;
    }


};

class Status{
    private:
    bool active; // check if account is on
    bool LowMoneyWarning;
    public:
    Status (){
        active = false;
        LowMoneyWarning = false;
    }
    void setStatus( bool stat){
        active = stat;
    }
    void GetWarning(double money){//  going to get from money class to set the warning
        if ( money< 1000){
            LowMoneyWarning = true;
            std::cout << "Add money to account balance is low \n" << "Current Balance is:" << money << "\n";
        }
        else{
            LowMoneyWarning = false;
        }
    }

};

class Profits{

};

class History{

};

class Dates{

};

class Analysis{
private:
    bool stockWorth;
    
    
public:
    // constructor
    explicit Analysis(bool worth)
    :  stockWorth(worth){
    }
    

    void getAnalysis(){
        return stockWorth
    }
    
    void setWorth(bool worth)
        stockWorth = worth;

};

class Buy{
private:
    float amount;
    
public:
    // Constructor
    explicit Buy(float stockBuy)
    : amount(stockBuy){
    }
    
    // Mutator
    void setPrice(float price){
        amount = price;
    }
    
    // Accessor
    void stockPrice(){
        return amount;
    }
    // TODO: add a buy function that add stock to portfolio
};

class Sell{
private:
    float amount;
    
public:
    // Constructor
    explicit Sell(float stockSell)
    : amount(stockSell){
    }
    
    // Mutator
    void setPrice(float price){
        amount = price;
    }
    
    // Accessor
    void stockPrice(){
        return amount;
    }
    
    //TODO: create a sell function that will add stock to the portfolio
};
