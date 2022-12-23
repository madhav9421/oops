#include <iostream>
using namespace std;
// Write a function template for finding the minimum value contained in an array
template <class t>
t findMin(t arr[], int size) {
    t min = arr[0];
    for(int i=0;i<size;i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int intArray[5] = {1,5,2,3,4};
    char charArray[5] = {'b','c','d','a','e'};
    double doubleArray[5] = {2.3,4.2,5.4,6.5,7.2};
    cout << "the minimum value of first array is :" << findMin(intArray,5) << endl;
    cout << "the minimum value of second array is :" << findMin(charArray,5) << endl;
    cout << "the minimum value of third array is:" << findMin(doubleArray,5) << endl;
    return 0;
}