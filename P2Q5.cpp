#include <iostream>
using namespace std;
int main(){
    string word;
    cout << "Enter anything with space : ";
    //cin >> word;
    getline(cin, word);
    int n=word.length();
    for(int i=0; i<n; i++){
        if(word[i] == ' '){
            word[i] = '_';
        }
    }
    cout << word <<endl;
}