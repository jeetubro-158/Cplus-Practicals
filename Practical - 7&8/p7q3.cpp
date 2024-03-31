#include<iostream>
using namespace std;
template <class T>
T Maximum(T arr[], int s){
    int max=arr[0];
    for(int i=1; i<s; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        else 
        continue;
    }
    cout << "Maximum = " << max << endl;
}
int main(){
    char arr[]={65, 5, 6, 9, 20};
    Maximum(arr, 5);
}