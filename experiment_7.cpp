#include <iostream>
using namespace std;
class media {
    public: 
    char title[10];
    float price;
    virtual void read() {
       cout << "enter the title of the publication";
       cin>>title;
       cout << endl << "enter the price of the publication";
       cin >> price;

    }
    virtual void show() {
         cout << "the title of the publication" << title << endl;
         cout << "the price of the publication is" << price << endl;
    }
};
class book : public media {
    public:
    int pages;
    void read() {
        cout << "how many pages in the book" << endl;
        cin >> pages;
    }
    void show() {
        cout << "there are total" << pages << "pages in the book";
    }
};
class tape:public media {
public:
float time;
void read() {
    cout << "enter the time taken to read" << endl;
    cin >> time;
}
void show() {
    cout << "the time taken is " << time;
}
};
int main() {
    media m;
    book b;
    tape t;
    m.read();
    m.show();
    media* ptr;
    ptr = &b;
    ptr->read();
    ptr->show();
    ptr = &t;
    ptr->read();
    ptr->show();
    return 0;
}