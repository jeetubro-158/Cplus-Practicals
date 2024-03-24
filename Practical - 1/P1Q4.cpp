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
    string RtnName() {
        return name;
    }
    double RtnSal(){
        return salary;
    }
    void RaiseSal(double amount){
        salary = salary + amount;
    }
    employee RtnBoth(){
        return *this;
    }
};
int main(){
    employee emp1("Agi", 1000);
    employee emp2("Kulkarni", 1500);
    cout << "Boefore Riasing the Salary : " << endl;
    cout << "Emp 1 : " << emp1.RtnName() << " ---> " << emp1.RtnSal() << endl;
    cout << "Emp 2 : " << emp2.RtnName() << " ---> " << emp2.RtnSal() << endl << endl;

    emp1.RaiseSal(500);
    emp2.RaiseSal(500);

    cout << "After Riasing the Salary : " << endl;
    cout << "Emp 1 : " << emp1.RtnName() << " ---> " << emp1.RtnSal() << endl ;
    cout << "Emp 2 : " << emp2.RtnName() << " ---> " << emp2.RtnSal() << endl;
    
    return 0;
}