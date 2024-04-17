#include <iostream>
using namespace std;

class demo {
private:
    float x, y, z;
public:
    demo() {}
    demo(float xx, float yy, float zz) {
        x = xx;
        y = yy;
        z = zz;
    }
    void disp() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
    friend demo& operator --(demo &d, int);
    friend demo& operator--(demo &d);
};

demo& operator--(demo &d) {
    --d.x;
    --d.y;
    --d.z;
}

demo& operator --(demo &d, int){
    d.x--;
    d.y--;
    d.z--;
}

int main() {
    demo d1(5, 6, 9);
    d1.disp();
    --d1;
    d1.disp();
    d1--;
    d1.disp();
}
