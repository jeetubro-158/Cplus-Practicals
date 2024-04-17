#include <iostream>
using namespace std;
class Person{
    protected:
    string name, email;
    public:
    Person(){}
    Person(string n, string e){
        name = n;
        email = e;
    }
    void  disp(){
        cout << "Name : " << name << endl;
        cout << "Email : " << email << endl;
    }
};

class Engineer:public Person{
    protected:
    string work;
    public:
    Engineer(){}
    Engineer(string n, string e, string w): Person(n,e){
        work = w;
    }
    void disp(){
        Person::disp();
        cout << "Engineer's Work: " << work << endl;
    }
};

int main(){
    Person p1("Jeetu", "jeetu@gmail.com"); 
    Engineer e1("Karna", "karna@gmail.com", "Best Danurdhar");
    p1.disp();
    cout << "\n";
    e1.disp();
    return 0;
}