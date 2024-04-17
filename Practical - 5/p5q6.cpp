#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;
public:
    Employee() {}
    Employee(string n, double sal) {
        name = n;
        salary = sal;
    }
    void disp() {
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
    virtual void sal_increment() = 0;
};

class Manager : public Employee {
protected:
    string dept, perform_grade;
public:
    Manager() {}
    Manager(string n, double sal, string d, string pg) : Employee(n, sal) {
        dept = d;
        perform_grade = pg;
    }
    void disp() {
        Employee::disp();
        cout << "Department : " << dept << endl;
        cout << "Performance Grade : " << perform_grade << endl;
    }
    void sal_increment() {
        if ((perform_grade == "**") || (perform_grade == "***")) {
            salary = salary + (salary * 0.05);
        }
        else if (perform_grade == "****") {
            salary = salary + (salary * 0.1);
        }
        else if (perform_grade == "*****") {
            salary = salary + (salary * 0.15);
        }

        cout << "Performance Increment Salary = " << salary << endl;
    }
};

class Executive : public Manager {
protected:
    string location;
    int year_serive;
public:
    Executive() {}
    Executive(string n, double sal, string d, string pg, string loc, int ys) : Manager(n, sal, d, pg), location(loc), year_serive(ys) {}
    void disp() {
        Manager::disp();
        cout << "Location : " << location << endl;
        cout << "Year of Service : " << year_serive << endl;
    }
    void sal_increment() {
        Manager::sal_increment();
        if(year_serive > 2)
        salary = salary + (salary*0.1);
        cout << "Final Incremented Salary = " << salary << endl;
    }

};

int main() {
    Executive e1("Nitesh", 100000, "IT", "*****", "Mumbai", 10);
    e1.disp();
    e1.sal_increment();
}
