#include <iostream>

using namespace std;

  int transactionCount = 0;
  int savingAcc = 0;
  int acc = 0;
  float depositValue = 0;
  string username = "rbrown";
  string password = "blue123";
  string customer = "Robert Brown";
  string accName;
  string pass;

int main(){
 
  cout << "enter username ";
  cin >> accName;
  cout << "enter password ";
  cin >> pass;
   
  if(username == accName && password == pass){
    while(true){
      cout << "enter deposit value " << endl;
      cin >> depositValue >> endl;
      if(depositValue < 0) {
        break;
      }
      if((depositValue - int(depositValue)) > 0){
        cout << "please enter value" << "ATM does not deposit coins" << endl;
        transactionCount++;
      }
      else{
        cout << " Deposit value in\n. saving\n. Checking\n.";
        cin >> acc;
        cout << depositValue;
        if(acc == 1){
          savingAcc += int(depositValue);
        }
        else{
          checkingAcc += int(depositValue);
        }
        transactionCount++;
        cout << "customer name: " << customer << endl;
        cout << "username" << username << endl;
        cout << "savings account" << savingAcc << endl;
        cout << "checking account" << checkingAcc << endl;
        cout << "Value deposited: $" << depositValue << endl;
        cout << "Transaction number" << transactionCount << endl;
      }
    }
  }
  else{
    cout << "Wrong Username or Password" << endl;
  }
  return 0;
}
