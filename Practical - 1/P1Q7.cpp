#include <iostream>
#include <math.h>
using namespace std;
class Geometry{
    float n;
    public:
    Geometry () {}
    Geometry (float s){
        n = s;
    }
    float area (){
        //area of square
        return M_PI*n;
    }

    friend int area(int a);

    float volume (){
        //volume of cube
        return n*n*n;
    }  
    
};

int area(int a){
        //area of square
        return (a*a);
    }

int main(){
    Geometry g1(5.0);
    Geometry g2(6);
    int s=5;
    cout << "Area of Circle : " <<g1.area() << endl;
    cout << "Volume of Cube : " <<g1.volume() << endl;
    cout << "Area of Square : " << area(s) << endl;
    return 0;
}