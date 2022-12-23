#include <iostream>
using namespace std;
class student {
 public:
 string name;
 int age;
 student() {
    cout << "enter student name" << endl;
    cin >> name;
    cout << "enter student age" << endl;
    cin>>age;
 }
 student(string n,int a) {
    name = n;
    age = a;
    cout << " the name of student is " << name << endl;
    cout << "the age of student is " << age << endl;

 }
 student(student &obj) {
    name = obj.name;
    age = obj.age;
    cout << "the name of student is " << name;
    cout << "the age of student is" << age;
 }
 ~student() {
    cout << "default constructor called" << endl;
 }
};
int main() {
    student hehe;
    student raj("raj",18);
    student abhi(raj);
    return 0;
}