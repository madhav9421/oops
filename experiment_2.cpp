#include <iostream>
using namespace std;
class Bank {
public:
   string name;
   char account_type[20];
   int account_number;
   int balance;
   void initialize() {
    cout << "enter account holder name" << endl;
    cin >> name;
    cout << "enter account type" << endl;
    cin >> account_type;
    cout << "enter accout number" << endl;
    cin >> account_number;
    cout << "enter balance amound " << endl;
    cin >> balance; 
   }
   void deposit() {
    int bal;
    cout << "how much money do you want to deposit ? " << endl;
    cin>>bal;
    balance += bal;
    cout << "you current balance is" << balance << endl;
   }
   void withdraw() {
    int bal;
    cout << "your current balance is :" << balance << endl;
    cout << "how much money do you want to withdraw :" << endl;
    cin >> bal;
    if(bal > balance) {
      cout << "you dont have that much money pal";
      return ;
    }else {
      balance -= bal;
      cout << "your new balance is " << balance ;
    }
   }
   void display() {
    cout << "name of account holder" << name << endl;
    cout << "account type" << account_type << endl;
    cout << "account number is " << account_number << endl;
    cout << "balance is " << balance << endl;
   }
 };
 int main() {
  Bank bk;
  bk.initialize();
  bk.deposit();
  bk.display();
  bk.withdraw();
  bk.display();
  return 0;
 }