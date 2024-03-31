#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream f1("C:/Users/jeetu/Desktop/C++/PRACITCALS/Practical - 7/STATE.txt");
    ifstream f2("C:/Users/jeetu/Desktop/C++/PRACITCALS/Practical - 7/CAPITAL.txt");
    ifstream f3("C:/Users/jeetu/Desktop/C++/PRACITCALS/Practical - 7/LANGUAGE.txt");
    string s, c, l;
    for(int i=0; i<2; i++){
        getline(f1, s);
        f2 >> c;
        f3 >> l;
        cout << "State : " << s << " Capital : " << c << " Language : " << l << endl;
    }
    f1.close();
    f2.close();
    f3.close();
}