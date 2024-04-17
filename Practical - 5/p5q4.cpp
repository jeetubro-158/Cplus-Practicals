#include <iostream>
using namespace std;
class Papa{
    public:
    void disp(){
        cout << "From Papa class\n";
    }    
};

class Beta:public Papa{
    public:
    void disp(){
        cout << "From Beta class\n";
    }
};

int main(){
    Papa p1;
    p1.disp();
    Beta b1;
    b1.disp(); //Here child class "Beta" will override the Parent class "Papa".
    return 0;
}