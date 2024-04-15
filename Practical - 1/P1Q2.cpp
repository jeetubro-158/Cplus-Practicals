/*Design the class student in C++ containing getData()
 and display Data() as two of its methods which will be 
 used for reading and displaying the student information respectively.
  Where getData() will be private method.*/

#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollno, age;
    void getData(){
        cout << "Enter Your Name : ";
        cin >> name;
        cout << "Enter Your Roll NO. : ";
        cin >> rollno;
        cout << "Enter Your Age : ";
        cin >> age;
    }
    public:
    void readData(){
        getData();
    }
    void displayData(){
        cout << "\nName : " << name << endl;
        cout << "Roll NO. : " << rollno << endl;
        cout << "Age : " << age << endl;
    }
};

int main(){
    Student s1;
    s1.readData();
    s1.displayData();
    return 0;
}
