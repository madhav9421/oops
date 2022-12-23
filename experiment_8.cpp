#include <iostream>
using namespace std;
// Write a program to show use of this pointer, new and delete.
int main() {
    int *p = NULL;
    p = new int;
    if(!p) {
        cout << "memory not allocated" << endl;
    }else {
        cout << "memory allocated" << endl;
    }
    delete p;
    
    return 0;
}