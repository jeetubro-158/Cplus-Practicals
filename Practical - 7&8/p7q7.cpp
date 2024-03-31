#include <iostream>
using namespace std;

template <class T>
class largest{
private:
    T a, b, c;
public:
    largest(T x, T y, T z) {
        a = x;
        b = y;
        c = z;
    }
    void large() {
        if (a > b && a > c) {
            cout << a << " is large." ;
        } else if (b > a && b > c) {
            cout << b << " is large." ;
        } else {
            cout << c << " is large." ;
        }
    }
};

int main() {
    largest<char> m1(97, 65, 27);
    m1.large();
    return 0;
}
