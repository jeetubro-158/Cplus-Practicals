#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream f1("C:/Users/jeetu/Desktop/C++/PRACITCALS/Practical - 7/Positive.txt");
    ofstream f2("C:/Users/jeetu/Desktop/C++/PRACITCALS/Practical - 7/Negativ.txt");
    for(int i=1; i<=10; i++){ 
        int num;
        cout << "Enter Number-" << i << " : ";
        cin >> num;
        if(num > 0){
            f1 << num << endl;            
        } else if(num < 0){
            f2 << num << endl;
        }
    }
    f1.close();
    f2.close();
    return 0;
}