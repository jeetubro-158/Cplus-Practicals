#include <iostream>
using namespace std;
class DateClass{
    private:
    int day, month, year;
    public:
    DateClass(){}
    DateClass(int h, int m, int s){
        day = h;
        month = m;
        year = s;
    }
    void disp(){
    cout << day <<"/" << month << "/" << year << endl;
    }
    DateClass incre(){
        
    }
    

};

int main(){
    DateClass t1(19,8,2024), t2(5,10,2024);
    t1.disp();
    t2.disp();
    return 0;
}