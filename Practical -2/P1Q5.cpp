#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int age;
    std::string emp_ID;
    char gender;
    std::string address;

public:
    // Default constructor
    Employee() : name(""), age(0), emp_ID(""), gender(' '), address("") {}

    // Constructor with parameters
    Employee(const std::string& name, int age, const std::string& emp_ID, char gender, const std::string& address)
        : name(name), age(age), emp_ID(emp_ID), gender(gender), address(address) {}

    // Method to display employee details
    void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Employee ID: " << emp_ID << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Address: " << address << std::endl << std::endl;
    }
};

int main() {
    // Array of 2 Employee objects
    Employee employees[2];

    // Reading data for each employee
    for (int i = 0; i < 2; i++) {
        std::string name, emp_ID, address;
        int age;
        char gender;

        std::cout << "Enter details for Employee " << i + 1 << std::endl;
        std::cout << "Name: ";
        std::getline(std::cin >> std::ws, name); // Using getline to read the entire line including spaces
        std::cout << "Age: ";
        std::cin >> age;
        std::cout << "Employee ID: ";
        std::cin >> emp_ID;
        std::cout << "Gender (M/F): ";
        std::cin >> gender;
        std::cout << "Address: ";
        std::getline(std::cin >> std::ws, address); // Using getline to read the entire line including spaces

        employees[i] = Employee(name, age, emp_ID, gender, address);
    }

    // Printing data for each employee
    std::cout << "\nEmployee Details:\n";
    for (int i = 0; i < 2; i++) {
        std::cout << "Employee " << i + 1 << ":\n";
        employees[i].display();
    }

    return 0;
}
