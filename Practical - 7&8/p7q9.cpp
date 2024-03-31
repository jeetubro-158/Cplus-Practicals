#include<iostream>
using namespace std;
template <class T>
T Largest(T arr[], int size){
    int max=arr[0];
    for(int i=1; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum of Array is : " << max << endl;
}

int main(){
    int arr1[]={2, 5, 8, 10, 15};
    Largest(arr1, 5);

}