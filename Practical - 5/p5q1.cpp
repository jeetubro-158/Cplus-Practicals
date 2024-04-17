#include <iostream>
using namespace std;
class BankAccount{
    private:
    string cusid;
    double balance;
    public:
    BankAccount(){}
    BankAccount(string id, double b){
        cusid = id;
        balance = b;
    }
    void disp(){
        cout << "Customer id : " << cusid << "\t";
        cout << "Balance : " << balance << endl;
    }
    void deposit(double amt){
        balance += amt;
    }
    void withdraw(double amt){
        balance -= amt;
    }
};

int main(){
    BankAccount c1("01", 10000);
    c1.disp();
    c1.deposit(5000);
    c1.disp();
    c1.withdraw(3000);
    c1.disp();
    return 0;
}
