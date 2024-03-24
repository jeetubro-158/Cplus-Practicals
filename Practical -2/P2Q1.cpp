#include <iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(){}
    Complex(int r, int i){
        real = r;
        img = i;
    }
    void disp(){
        cout << real << " + " << img << "i" << endl;
    }
    friend Complex CompAdd(Complex c1, Complex c2);

};
Complex CompAdd(Complex c1, Complex c2){
    Complex t;
    t.real =  c1.real + c2.real;
    t.img = c1.img + c2.img; 
    return t;
}      
int main(){
    Complex c1(5,7);
    Complex c2(4,8);
    c1.disp();
    c2.disp();
    Complex c3 = CompAdd(c1,c2);
    cout << "-------"<<endl;
    c3.disp();
    return 0;
}