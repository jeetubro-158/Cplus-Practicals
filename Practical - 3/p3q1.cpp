#include <iostream>
using namespace std;
class Computer{
    private:
    string processor, RAM, ROM;
    public:
    Computer(){}
    Computer(string pro, string ra, string ro){
        processor = pro;
        RAM = ra;
        ROM = ro;
    }
    void disp(){
        cout << "Processor : " << processor << endl;
        cout << "RAM : " << RAM << endl;
        cout << "ROM : " << ROM << endl;
    }
};

class Teacher{
    private:
    string name, qualification;
    public:
    Teacher(){}
    Teacher(string n, string q){
        name = n;
        qualification = q;
    }
    void disp(){
        cout << "Teacher Name : " << name << endl;
        cout << "Qualification : " << qualification << endl;
    }
};

class Printer{
    private:
    string type, make;
    public:
    Printer () {}
    Printer(string t, string m){
        type = t;
        make = m;
    }
    void disp(){
        cout << "Type : " << type << endl;
        cout << "Make : " << make << endl;
    }
};

class LAN{
    private:
    string OS;
    Computer com1, com2, com3;
    public:
    LAN(){}
    LAN(string os, Computer c1, Computer c2, Computer c3){
        OS = os;
        com1 = c1;
        com2 = c2;
        com3 = c3;
    }
    void disp(){
        cout << "OS : " << OS << endl;
        com1.disp();
        com2.disp();
        com3.disp();
    }
};

class LAB{
    private:
    Teacher instructor;
    LAN lan1, lan2;
    public:
    LAB(){}
    LAB(Teacher t1, LAN l1, LAN l2){
        instructor = t1;
        lan1 = l1;
        lan2 = l2;
    }
    void disp(){
    instructor.disp();
    lan1.disp();
    lan2.disp();
    }
};

class College{
    private:
    Teacher principal, viceprincipal, HOD;
    LAB lab1, lab2;
    public:
    College(){}
    College(Teacher p, Teacher vp, Teacher h, LAB l1, LAB l2){
        principal = p;
        viceprincipal = vp;
        HOD = h;
        lab1 = l1;
        lab2 = l2;
    }
    void disp(){
        principal.disp();
        viceprincipal.disp();
        HOD.disp();
        lab1.disp();
        lab2.disp();
    }
};


int main(){
    Computer c1("i5", "8GB", "512GB");
    Computer c2("i7", "16GB", "512GB");
    Computer c3("i9", "32GB", "1TB");
    Teacher instructor("Kulkarni", "B.Tech");
    Teacher principal("Manju", "P.HD");
    Teacher vp("nitesh", "fail");
    Teacher HOD("Agi Thomas", "B.Tech");
    LAN lan1("Windows", c1, c2, c3);
    LAN lan2("MAC", c1, c2, c3);
    LAB lab1(instructor, lan1, lan2);
    LAB lab2(principal, lan1, lan2);

    College col1(principal, vp, HOD, lab1, lab2);
    col1.disp();

    return 0;
}
