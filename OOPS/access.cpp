#include<bits/stdc++.h>
using namespace std;
class Base {
private:
    int z = 3;    
public:
    int x = 1;
protected:
    int y = 2;
};

class Derived : private Base {
public:
    void show() {
        cout << x << " "; // Accessible, but as private in Derived
        cout << y << " "; // Accessible, but as private in Derived
        // cout << z; // Error: z is private in Base, not inherited
    }
};
class Derived2 : protected Base {
public:
    void show() {
        cout << x << " "; // Accessible, as protected
        cout << y << " "; // Accessible, as protected
        // cout << z; // Error: z is private in Base, not inherited
    }
};
class Derived3 : public Base {
public:
    void show() {
        cout << x << " "; // Accessible, as public
        cout << y << " "; // Accessible, as protected
        // cout << z; // Error: z is private in Base, not inherited
    }
};


int main(){
    Derived2 ob2;
    ob2.show();
    Derived3 ob3;
    ob3.show();
    return 0;
}