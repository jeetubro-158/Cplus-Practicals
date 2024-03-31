#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str, str2;
    cout << "Enter your word : ";
    cin >> str;
    str2 = str;
    reverse(str.begin(), str.end());
    if ( str == str2){
        cout << str2 << " is a PALINDROME" << endl;
    } else {
        cout << str2 << " is NOT a PALINDROME" << endl;
    }
}