/*Write an OOP in C++ program to calculate the area of circle, 
rectangle and square using the concept of method overloading*/

#include <iostream>
#include <math.h>
using namespace std;
int Area(float r){
    cout << "Area of circle = " << (M_PI*r*r) << endl;
    return 0;
}
int Area(int l, int b){
    cout << "Area of Rectangle = " << (l*b) << endl;
    return 0;
}
int Area(int s){
    cout << "Area of Square = " << (s*s) << endl;
    return 0;
}

int main(){
    //Area of Circle
    Area(5.0f);
    //Area of Rectangle
    Area(5, 4);
    //Area of Square
    Area(5);
    return 0;
}
