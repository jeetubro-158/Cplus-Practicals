#include <iostream>
using namespace std;
class Number{
    private:
    int num;
    public:
    int input(){
        cout << "Enter the number : ";
        cin >> num;
    }
    int getN(){
        return num;
    }
        
};
class Square : public Number {
    public:
    void Cal_Square(Number nn){
        int n = nn.getN();
        cout << "Square of " << n << " = " << (n*n) << endl;
    };
};

class Cube:public Number{
    public:
    void Cal_Cube(Number nn){
        int n = nn.getN();
        cout << "Cube of " << n << " = " << (n*n*n) << endl;
    }
};

int main(){
    Number p;
    p.input();
    Square s1;
    
    s1.Cal_Square(p);
    Cube c1;

    c1.Cal_Cube(p);
    return 0;
}