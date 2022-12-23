#include <iostream>
using namespace std;
class matrix {
   int r,c,m[3][3];
   int i,j;
   public:
   matrix() {}
   matrix(int a,int b) {
    r=a;
    c=b;
   }  
   void get();
   void disp();
   matrix operator +(matrix);
   matrix operator -(matrix);
};
void matrix::get() {
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            cout <<"["<<i<<","<<j<<"]";
            cin >> m[i][j];
        }
    }
}
void matrix::disp() {
    for(i=0;i<r;i++) {
        cout << endl;
        for(j=0;j<c;j++) {
            cout << m[i][j] << "\t";
        }
    }
}
matrix matrix::operator+(matrix k) {
    matrix add(r,c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            add.m[i][j] = m[i][j] + k.m[i][j];
        }
    }
    return add;
}
matrix matrix::operator -(matrix k) {
    matrix sub(r,c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            sub.m[i][j] = m[i][j] -k.m[i][j];
        }
    }
    return sub;
}
int main() {
    int a,b;
    cout << "enter row size of matrix :" ;
    cin >> a;
    cout << "enter column size of matrix :";
    cin>> b;
    matrix o1(a,b);
    matrix o2(a,b);
    cout << "enter the number of matrix A: ";
    o1.get();
    cout << "enter the number of matrix B: ";
    o2.get();
    matrix o3;
    o3 = o1 + o2;
    cout << "matrix[A+B] : ";
    o3.disp();
    o3 = o1 - o2;
    cout << " matrix [a-b] : ";
    o3.disp();
    return 0;
}