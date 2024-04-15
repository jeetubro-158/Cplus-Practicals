/*Design a class Geometry containing the methods area()
and volume() and also overload the area() function*/

#include <iostream>
using namespace std;
class Geometry
{
public:
    float Area(float r)    {
        cout << "Area of circle = " << (3.14 * r * r) << endl;
        return 0;
    }
    int Area(int l, int b)    {
        cout << "Area of Rectangle = " << (l * b) << endl;
        return 0;
    }
    int Volume(int s){
        cout << "Volume of Cube = " << (s*s*s) << endl;
    }
};

int main(){
    Geometry g1;
    g1.Area(5.0f);
    g1.Area(6, 5);
    g1.Volume(5);
    return 0;
}
