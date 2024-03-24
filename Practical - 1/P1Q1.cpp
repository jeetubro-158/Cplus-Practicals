#include <iostream>
using namespace std;
class Calculator{
    private:
    int a,b;
    public:
    Calculator(){a = 0; b = 0;}
    Calculator(int aa, int bb){
        a = aa;
        b = bb;
    }
    void disp(){
        cout << "a=" << a << " & b=" << b << endl;
    }
    void add(){
        cout << "Additon = " << a + b << endl;
    }
    void subtract(){
        cout << "Subtraction = " << a - b << endl;
    }
    void multiply(){
        cout << "Multiplication = " << a * b << endl;
    }
    void Divide(){
        cout << "Devision = " << a / b << endl;
    }
};
int main(){
    Calculator num1(18,2);
    num1.disp();
    num1.add();
    num1.subtract();
    num1.multiply();
    num1.Divide();
    return 0;

}