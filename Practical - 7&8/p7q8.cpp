#include<iostream>
using namespace std;
template <class T>
T Small(T arr[], int s){
    int min=arr[0];
    for(int i=1; i<s; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        else 
        continue;
    }
    cout << "Smallest = " << min << endl;
}
int main(){
    int arr[]={65, 55, 6, 9, 20};
    Small(arr, 5);
    return 0;
}