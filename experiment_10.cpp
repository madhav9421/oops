#include <iostream>
using namespace std;
class test {
   public:
   test() {
    cout << " constructor of test called"<<endl;
   }
   ~test() {
    cout << "destructor of test called " << endl;
   }
};
int main() {

   try {
    test t1;
    cout << "inside try block" << endl;
    throw 10;
   }
   catch(int e) {
    cout << "error caught with value :" << e;
   }
   return 0;
}