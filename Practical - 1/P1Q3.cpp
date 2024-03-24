#include <iostream>
using namespace std;
class Employee{
    private:
    string empid, name, designation;
    double salary;
    public:
    void getEmployee(){
        cout << "Enter Employee id: ";
        cin >> empid;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Employee salary: ";
        cin >> salary;
    }
    void showGrade(){
        string grade;
        if (salary >= 5000){
            grade = "Grade : A";
            cout << grade;
        }
        else{
            grade = "Grade : B";
            cout << grade;
        }
    }
    void showEmployee(){
        cout << "\nEmployee id : " << empid << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Employee Designation : " << designation << endl;
        cout << "Employee Salary : " << salary << endl;
    }
};
int main(){
    Employee e1;
    e1.getEmployee();
    e1.showEmployee();
    e1.showGrade();
}