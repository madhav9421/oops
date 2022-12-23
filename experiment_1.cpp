#include<iostream>
using namespace std;
float area(int x,int y) {
   float at;
   at= 0.5*x*y;
   return at;
}
float area(int x) {
    return 3.14*x*x;
}
int main()
{
    int b,h,r;
    cout << "enter base value :";
    cin>>b;
    cout << "enter height value :";
    cin>>h;
    cout << "the area is :" << area(b,h) << endl;
    cout << "enter the radius of circle" << endl;
    cin >> r;
    cout << "the area of circle is" << area(r);
    return 0;
}