#include <iostream>
#include <map>


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



class  Portfolio: public Stock{

public:

void StockPurchase(){


}

void  ComparePortfolio(){


}



private:



};