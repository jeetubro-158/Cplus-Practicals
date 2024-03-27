#include <iostream>
using namespace std;
class Base{
protected:
double r;
void read(){
cout << "Enter Radius : ";
cin >> r;
}

void show(){
cout << "Radius = " << r << endl;
}
};

class area:public Base{
protected:
double area;
public:
void input(){
Base::read();
Base::show();
area = (3.14*r*r);
cout << "Area of circle is : "<< area << endl;
}
};

void main(){
area a1;
a1.input();
}