/*Write an OOP in C++ to demonstrate the concept of using array of objects
 to create an array of ten employees (reading their entire personal data: 
 Name, age, emp_ID, gender, address) and print the same.*/

#include <iostream>
using  namespace std;
class employee{
    private:
    string name,  address;
    int age, Emp_id;
    char gender;
    public:
    void getData(){
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter emp ID : ";
        cin >> Emp_id;
        cout << "Enter Gender(M/F) : ";
        cin >> gender;
        cout << "Enter Address : ";
        cin >> address;
        cout << "\n";
    }
    void disp(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Emp ID : " << Emp_id << endl;
        cout << "Gender : " << gender << endl;
        cout << "Address : " << address << endl;
        cout << "\n";
    }
};

int main(){
    employee e1[5];
    for (int i=0; i<5; i++){
        cout << "Enter details for Employee-" << i+1 << ":"<< endl;
        e1[i].getData();
    }
    for (int i=0; i<5; i++){
        cout << "Deails for Employee-" << i+1 << " :"<< endl;
        e1[i].disp();
    }
    return 0;
}
