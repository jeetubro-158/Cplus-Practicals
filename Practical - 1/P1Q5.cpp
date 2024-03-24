#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int age;
    string emp_ID;
    char gender;
    string address;

public:
    // Default constructor
    Employee() : name(""), age(0), emp_ID(""), gender(' '), address("") {}

    // Constructor with parameters
    Employee(const string& name, int age, const string& emp_ID, char gender, const string& address)
        : name(name), age(age), emp_ID(emp_ID), gender(gender), address(address) {}

    // Method to display employee details
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << emp_ID << endl;
        cout << "Gender: " << gender << endl;
        cout << "Address: " << address << endl << endl;
    }
};

int main() {
    // Array of 2 Employee objects
    Employee employees[5];

    // Reading data for each employee
    for (int i = 0; i < 5; i++) {
        string name, emp_ID, address;
        int age;
        char gender;

        cout << "Enter details for Employee " << i + 1 << endl;
        cout << "Name: ";
        getline(cin >> ws, name); // Using getline to read the entire line including spaces
        cout << "Age: ";
        cin >> age;
        cout << "Employee ID: ";
        cin >> emp_ID;
        cout << "Gender (M/F): ";
        cin >> gender;
        cout << "Address: ";
        getline(cin >> ws, address); // Using getline to read the entire line including spaces

        employees[i] = Employee(name, age, emp_ID, gender, address);
    }

    // Printing data for each employee
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << ":\n";
        employees[i].display();
    }

    return 0;
}
