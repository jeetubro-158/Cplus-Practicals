#include <iostream>
using namespace std;
class Shape{
    protected:
    int side, length, breadth;
};

class Square:public Shape{
    public:
    void AoSquare(){
        cout << "Enter side of sqaure : ";
        cin >> side;
        cout << "Area of Square = " << (side * side) << endl;
        cout << "Perimeter of Square = " << (4 * side) << endl;
    }
};

class Rectangle:public Shape{
    public:
    void AoRect(){
        cout << "Enter length of Rectangle : ";
        cin >> length;
        cout << "Enter breadth of Rectangle : ";
        cin >> breadth;
        cout << "Area of Rectangle = " << (length * breadth) << endl;
        cout << "Perimeter of Square = " << (2 * (length+breadth)) << endl;
    }
};

class Cuboid:public Shape{
    public:
    void cal_Vol(){
        cout << "Enter length of Cuboid : ";
        cin >> length;
        cout << "Enter breadth of Cuboid : ";
        cin >> breadth;
        cout << "Enter the height of Cuboid : ";
        cin >> side;
        cout << "Area of Rectangle = " << (length * breadth * side) << endl;
    }
};

int main(){
    Square s1;
    s1.AoSquare();
    Rectangle r1;
    r1.AoRect();
    Cuboid c1;
    c1.cal_Vol();
    return 0;
}