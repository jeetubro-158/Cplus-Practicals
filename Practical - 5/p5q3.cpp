#include <iostream>
using namespace std;
class Parent{
    protected:
    int x;
    public:
    void input(){
        x = 50;
    }
    void disp(){
        cout << "From Parent class\n";
        cout << "x = " << x << endl;
    }
};

class Child:private Parent{
    public:
    void getData(){
        input();
    }
    void disp(){
        cout << "From Child class\n";
        cout << "x = " << x << endl;
    }
};

int main(){
    Parent p1;
    p1.input();
    p1.disp();
    Child c1;
    c1.getData();
    c1.disp();
}