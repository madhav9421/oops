#include <iostream>
using namespace std;
class person {
    public:
  char name[20];
  int code;
  void get() {
    cout << "enter student name" << endl;
    cin >> name;
    cout << "enter student code" << endl;
    cin>> code;
  }
  void show() {
    cout << "student name:" << name << endl;
    cout << "student code:" << code << endl;
  }
}; 
class account : virtual public person {
    public:
    float pay;
    void getPay() {
        cout << "enter the money you want to pay" << endl;
        cin >> pay;
    }
    void display() {
        cout << "you have payed " << pay << "rs";

    }

};
class admin: virtual public person {
    public:
    int experience;
    void getexp() {
        cout << "how many years of experience do you have?" << endl;
        cin >> experience;
    }
    void showexp() {
        cout << "you have " << experience << " of experience" << endl;
    }
};
class master:public account,public admin {
   public:
   string n;
   void getprev() {
    cout << "enter prev company name" << endl;
    cin>> n;

   }
   void showprev() {
    cout << "previous company name was" << n<<endl;

   }
};
int main() {
    master m;
    m.get();
    m.show();
    m.getPay();
    m.display();
    m.getexp();
    m.showexp();
    m.getprev();
    m.showprev();
    return 0;
}