#include <iostream>
using namespace std;
class Student{
    private:
    int rollno,age;
    double gpa;
    string name;
    void getData(){
        cout << "Enter your Roll NO. : ";
        cin >> rollno;
        cout << "Enter your Name : ";
        cin >> name;
        cout << "Enter you Age : ";
        cin >> age;
        cout << "Enter your GPA : ";
        cin >> gpa;
        cout << "\n";
    }
    public:
    void input(){
        getData();
    }
    void displayData(){
        cout << "Student Details : " << endl;
        cout << "Roll NO. : " << rollno << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "GPA : " << gpa << endl;
    }
};
int main(){
    Student s1;
    s1.input();
    s1.displayData();
}