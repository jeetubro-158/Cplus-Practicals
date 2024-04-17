#include <iostream>
using namespace std;
class Complex{
    private:
    int real, img;
    public:
    Complex(){}
    Complex(int r, int i){
        real = r;
        img = i;
    }
    void disp(){
        cout << real << "+" << img << "i" << endl;
    }
    friend Complex operator +(Complex c1, Complex c2);
};

Complex operator +(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main(){
    Complex c1(3,7), c2(5,2);
    c1.disp();
    c2.disp();
    Complex c3;
    c3 =c1 + c2;
    cout << "-----\n";
    c3.disp();
}