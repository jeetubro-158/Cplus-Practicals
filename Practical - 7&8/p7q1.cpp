#include <iostream>
using namespace std;
template <class T>
T exchange(T a, T b){
    cout << "Before Swapping : a = " << a << " & b = " << b << endl;
    T temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping : a = " << a << " & b = " << b << endl;
}

int main(){
    double n1=10, n2 = 20;
    exchange(n1, n2);
    return 0;
}
