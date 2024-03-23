#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int n,flag=0;
    cout << "Enter a String : ";
    getline(cin, str);
    n=str.length();
    // for(int i=0; i<str.length(); i++){
    //     str[i] = toupper(str[i]);
    // }
    /* Follwing is the alternate way of above code */
    for(char &each: str){  //each is pointing to each character of the string--> str.
        each = toupper(each);
    }

    for(int i=0; i<n/2; i++){
        if((str[i]) != str[n-1-i]){
            flag = 1;
            break;
        }
        //following is optional but for better understanding it is given
        else 
        continue;
    }
    if(flag == 1)
    cout <<"\"" << str << "\"" << " is NOT PALINDROME";
    else 
    cout <<"\"" << str << "\""  << " is a PALINDROME";
}
