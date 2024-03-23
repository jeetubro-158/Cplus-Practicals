#include <iostream>
#include <math.h>
using namespace std;
class demo{
    private:
    int num;
    void readNO(){
        cout << "Enter the number : ";
        cin >> num;
    }
    public:
    void getData(){
        readNO();
    }
    void disp(){
        cout << "num = " << num << endl;
    }
    void fact(){
        int fact=1;
        for(int i=1; i<=num; i++){
            fact = fact * i;
        }
        cout << "Factorial = " << fact <<endl;
    }
    void reverseNO(){
        int real = num, last = 0, rev = 0;
        while(num != 0){
        last = num % 10;
        rev = rev * 10 + last;
        num = num / 10;
        }
        cout << "Reversed Number : " << rev << endl;
        num = real;
    }
    void Palindrome(){
        int real = num, last = 0, rev = 0;
        while(num != 0){
        last = num % 10;
        rev = rev * 10 + last;
        num = num / 10;
        }
        if( real == rev){
            cout << rev << " is a PALINDROME." << endl;
        } else {
            cout << rev << " is not a PALINDROME." << endl;
        }
        num = real;
    }
    void isArmstrong(){
        //153
        int real = num, last = 0, digits;
        double rev;
        string str = to_string(num);
        digits = str.length();
        while(num != 0){
            last = num % 10;
            rev = rev + pow(last,digits);
            num = num / 10;
        }
        if(rev == real){
            cout << real << " is an ARMSTRONG." << endl;
        } else {
            cout<< real << " is not an ARMSTRONG." << endl;
        }
    }
};

int main(){
    demo d1,d2,d3;
    d1.getData();
    d1.fact();
    d2.getData();
    d2.reverseNO();
    d2.Palindrome();
    d2.isArmstrong();
}
