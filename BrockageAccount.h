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
void DepositToAccount(float add){
    if (add < 0){
        std::cout << "Invalid Deposit \n";
    }
    else{
    AccountBalance = AccountBalance + add;
    }
}
void WithdrawlToAccount(float withdrawl){
    if (AccountBalance< withdrawl){
         std::cout << "Invalid Withdrawl \n";
    }
    else{
    AccountBalance = AccountBalance - withdrawl;
    }
}

void PrintStatement(){
    std::cout << "Account Information for User: \n" << AccountName << "\n";
    std::cout << "Account Balance is: " << AccountBalance << " \n"; 
}

};