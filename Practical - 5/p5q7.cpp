#include <iostream>
using namespace std;
class Person{
    protected:
    string name, gender;
    int age;
    public:
    void getData(){
        cout << "Enter Name : ";
        getline(cin, name);
        cout << "Enter Gender : ";
        cin >> gender;
        cout << "Enter Age : "; 
        cin >> age;
    }
    void disp(){
        cout << "\nName : " << name << endl;
        cout << "Gender : " << gender << endl;
        cout << "Age : " << age << endl;
    }
};

class Student:public Person{
    protected:
    int rollno;
    string course, email, mobileno;
    public:
    void getData(){
        Person::getData();
        cout << "Enter Roll NO. : ";
        cin >> rollno;
        cout << "Enter Course : ";
        cin >> course;
        cout << "Enter email : ";
        cin >> email;
        cout << "Enter mobile No. : ";
        cin >> mobileno;
    }
    void disp(){
        Person::disp();
        cout << "Roll NO. : " << rollno << endl;
        cout << "Course : " << course << endl;
        cout << "Email : " << email << endl;
        cout << "Mobile NO. : " << mobileno << endl;
    }
};

class StudentExam:public Student{
    protected:
    string sub1, sub2, sub3;
    int mark1, mark2, mark3;
    public:
    void getData(){
        Student::getData();
        cout << "Enter Subject-1 Name : ";
        cin >> sub1;
        cout << "Enter Marks : ";
        cin >> mark1;
        cout << "Enter Subject-2 Name : ";
        cin >> sub2;
        cout << "Enter Marks : ";
        cin >> mark2;
        cout << "Enter Subject-3 Name : ";
        cin >> sub3;
        cout << "Enter Marks : ";
        cin >> mark3;
    }
    void disp(){
        Student::disp();
        cout << "Subject-1 : " << sub1 << "-->" << mark1 << endl;
        cout << "Subject-2 : " << sub2 << "-->" << mark2 << endl;
        cout << "Subject-3 : " << sub3 << "-->" << mark3 << endl;
    }
    void isPassed(){
        if((mark1 + mark2 + mark3) >= 30){
        cout << "Student is Passed:\n";
        cout << "Total Marks : " << (mark1 + mark2 + mark3) << endl;
        } else {
            cout << "Student is Failed.";
        }
    }
};

int main(){
    StudentExam s1;
    s1.getData();
    s1.disp();
    s1.isPassed();
    return 0;
}