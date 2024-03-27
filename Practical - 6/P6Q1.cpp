#include <iostream>
using namespace std;
class Employee{
    protected:
    string emp_id, name;
    public:
    void input(){
        cout << "Enter Imployee id : ";
        cin >> emp_id;
        cout << "Enter Name : ";
        cin >> name;
    }
    void display(){
        cout << "Employee id : " << emp_id << endl;
        cout << "Employee Name : " << name << endl;        
    }
};
class emp_Union{
    protected:
    string mem_id;
    public:
    void input(){
        cout << "Enter the Member id : ";
        cin >> mem_id;
    }
    void display(){
        cout << "Member id : " << mem_id << endl;
    }
};
class emp_Info : public Employee, public emp_Union {
    private:
    double basic_sal;
    public:
    void input(){
        Employee::input();
        emp_Union::input();
        cout << "Enter Salary : ";
        cin >> basic_sal;
    }
    void display(){
        cout << endl; //For maintaining a seperation between reading and displaying data 
        Employee::display();
        emp_Union::display();
        cout << "Basic Salary : " << basic_sal << endl;
    }
};

int main(){
    emp_Info e1;
    e1.input();
    e1.display();
    return 0;
}
