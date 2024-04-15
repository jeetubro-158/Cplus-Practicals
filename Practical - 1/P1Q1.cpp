/*Q.1. Write an OOP in C++ to create a claculator class with the addtion, subtraction,
multiplication and division member functions.*/
#include <iostream>
using namespace std;
class Calculator{
    private:
    int num;
    public:
    Calculator () {}
    Calculator(int n){
        num = n;
    }
    int add(Calculator n2){
        cout << "Addition = " << num + n2.num << endl;
        return 0;
    }
    int sub(Calculator n2){
        cout << "Subtraction = " << num - n2.num << endl;
        return 0;
    }
    int Multi(Calculator n2){
        cout << "Multiplication = " << num * n2.num << endl;
        return 0;
    }
    int Div(Calculator n2){
        cout << "Division = " << num / n2.num << endl;
        return 0;
    }    
};

int main(){
    Calculator c1(20), c2(5);
    c1.add(c2);
    c1.sub(c2);
    c1.Multi(c2);
    c1.Div(c2);
    return 0;
}
