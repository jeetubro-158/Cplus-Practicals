/*Write an OOP in C++ to create a class employee with data members employee ID, 
employee name, designation and salary. Write methods
i) getEmployee()- To take user input
ii) showGrade()- to display grade of employee based on salary
iii) showEmployee ()- to display employee details */

#include <iostream>
using namespace std;
class employee{
    private:
    int emp_id;
    string emp_name, designation;
    double salary;
    public:
    void getEmployee(){
        cout << "Enter Employee id : ";
        cin >> emp_id;
        cout << "Enter Employee Name : ";
        cin >> emp_name;
        cout << "Enter Employee Designation : ";
        cin >> designation;
        cout << "Enter Employee Salary : ";
        cin >> salary;
    }    
    void showGrade(){
        if (salary >= 50000){
            cout << "\nGade : A" << endl;
        } else {
            cout << "\nGrade : B" << endl;
        }
    }
    void showEmployee(){
        cout << "\nEmployee Details:" << endl;
        cout << "Employee id : " << emp_id << endl;
        cout << "Employee Name : " << emp_name << endl;
        cout << "Employee Designation : " << designation << endl;
        cout << "Employee Salary : " << salary << endl;
    }
};

int main(){
    employee e1;
    e1.getEmployee();
    e1.showEmployee();
    e1.showGrade();
    return 0;
}
