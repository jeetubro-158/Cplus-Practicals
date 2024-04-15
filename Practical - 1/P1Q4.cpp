/*Write an OOP in C++ to implement a class employee. An employee has a name and a salary (double).
 Write a default constructor and constructor with two parameters (name and salary) and two methods:
(i) to return the name and salary and
(ii) A method that raises the employee's salary.*/

#include <iostream>
using namespace std;
class employee{
    string name;
    double salary;
    public:
    employee(){}
    employee(string n, double sal){
        name = n;
        salary = sal;
    }
    void disp(){
        cout << "Employee Name : " << name << endl;
        cout << "Employee Salary : " << salary << endl;
    }
    void RaiseSal(double amount){
        salary += amount;
    }
};

int main(){
    employee emp1("Agi", 1000);
    employee emp2("Kulkarni", 1500);
    cout << "Boefore Riasing the Salary : " << endl;
    emp1.disp();
    emp2.disp();
    cout << "After Riasing the Salary : " << endl;
    emp1.RaiseSal(500);
    emp2.RaiseSal(500);
    emp1.disp();
    emp2.disp();
    return 0;
}
