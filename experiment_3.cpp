#include <iostream>
using namespace std;
class DM {
    public:
    float meter;
    void get_data() {
        cout << "enter distance in meters and centimeters"<<endl;
        cin >> meter;
    }
    friend void add();
}a1;
class DB {
    public:
    float inch;
    void get_data() {
        cout << "enter distance in feet and inches" << endl;
        cin>>inch;
    }
    friend void add();
}a2;
void add() {
    float a,res;
    a = a1.meter*39.37;
    res = a + a2.inch;
    cout << "total inches" << res << endl;
    a = a2.inch/39.37;
    res = a +a1.meter;
    cout << "total metres" << res << endl;

}
int main() {
    a1.get_data();
    a2.get_data();
    add();
    return 0;
}