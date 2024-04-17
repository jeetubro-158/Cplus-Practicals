#include <iostream>
using namespace std;
class point2D{
    private:
    int x, y;
    public:
    point2D (){}
    point2D (int xx, int yy){
        x = xx;
        y = yy;
    }
    void disp(){
        cout << "(" << x << "," << y << ")" << endl;
    }
    point2D operator ++(){
        ++x;
        ++y;
    }
    point2D operator ++(int){
        x++;
        y++;
    }
    point2D operator +(point2D p){
        point2D temp;
        temp.x = x+p.x;
        temp.y = y+p.y;
        return temp;
    }
};
int main(){
    point2D p1(3, 2), p2(7, 5), p3;
    p1++;
    p1.disp();
    ++p2;
    p2.disp();
    p3 = p1+p2;
    p3.disp();
    return 0;
}