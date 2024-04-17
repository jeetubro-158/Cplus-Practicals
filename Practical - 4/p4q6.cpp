#include <iostream>
using namespace std;
class Employee{
    protected:
    string name;
    double salary;
    public:
    Employee(){}
    Employee(string n, double s){
        name = n;
        salary = s;
    }
    void disp(){
        cout << "Name : " << name << endl;
        cout << "salary : " << salary << endl;
    }
    virtual void sal_increament()=0;
};

class Manager:public Employee{
    protected:
    string department, perform_grade;
    public:
    Manager(){}
    Manager(string n, double s, string d, string pg):Employee(n, s){
        department = d;
        perform_grade = pg;
    }
    void disp(){
        Employee::disp();
        cout << "Department : " << department <<endl;
        cout << "Performance Grade : " << perform_grade << endl;
    }
    void sal_increament(){
        if(perform_grade == "**" || perform_grade == "***" )
        salary +=(salary*0.05);
        else if (perform_grade == "****")
        salary +=(salary*0.1);
        else if (perform_grade == "**a***")
        salary +=(salary*0.15);

        cout << "Salary Increment on Performance : " << salary << endl;
    }
};

class Executive:public Manager{
    protected:
    string location;
    int year_service;
    public:
    Executive(){}
    Executive(string n, double s, string d, string pg, string loc, int yos):Manager(n, s, d, pg){
        location = loc;
        year_service = yos;
    }
    void sal_increament(){
        Manager::sal_increament();
        if(year_service > 2){
            salary += (salary*0.1);
        }
        cout << "Salary Increment on Yearo of Experience : " << salary << endl;
    }
};

int main(){
    Executive e1("Agi", 100000, "IT", "****", "Mumbai", 5);
    e1.disp();
    e1.sal_increament();
}
