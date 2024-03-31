#include <iostream>
#include <fstream>
using namespace std;
int main(){
string str[5];
for(int i=0; i<5; i++){
    cout << "Enter your word : ";
    cin >> str[i];
}
for(int i=0; i<5; i++){
    if(str[i].at(0) == 'B' || str[i].at(0) == 'C')
    cout << str[i] << endl;
}

}