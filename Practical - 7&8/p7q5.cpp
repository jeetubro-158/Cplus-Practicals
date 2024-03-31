#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin("C:/Users/jeetu/Desktop/C++/PRACITCALS/Practical - 7/STATE.txt");
    string str="";
    ofstream fout;
    fout.open("C:/Users/jeetu/Desktop/C++/PRACITCALS/Practical - 7/LANGUAGE.txt");
    while (!fin.eof())
    {
        getline(fin, str);
        cout << str << "\n";
        fout << str << "\n";
    }
    fin.close();
    fout.close();
    return 0;    
}