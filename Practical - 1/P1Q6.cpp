#include <iostream>
#include <math.h>
using namespace std;
float area(float r){
    //area of circle
    return M_PI*r; //pi = 3.14
}
int area(int l, int b){
    //for area of rectangle
    return l*b;
}
int area(int r){
    //for area of square
    return r*r;
}
int main(){
    int l,b,s;
    float r;
    l=5,b=10;
    s=5;
    r=5;
    cout << "Area of Circle : " << area(r) <<endl;
    cout <<"Area of Rectangle : " << area(l,b) <<endl;
    cout << "Area of Square : " << area(s) <<endl;
    return 0;
}