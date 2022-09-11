#include <iostream>


class Account{
private:
  std::string AccountName;
  float AccountBalance;
  
public:
    
 void SetAccountName (std::string Name){
    AccountName =Name;
 }
std::string GetAccountName() const{
    return AccountName;
}
void SetBalance (float Balance){
    AccountBalance= Balance;
}
float GetBalance (){
    return AccountBalance;
}

};