#include <iostream>
using namespace std;
class Time{
    int hours, min, sec;
    public:
    Time(){}
    Time (int h, int m, int s){
        hours = h;
        min = m;
        sec = s;
    }
    void disp(){
        cout<< hours <<":"<< min <<":"<< sec <<endl;
    }
    Time addtime(Time t){
        Time temp;
        int h=0,m=0;
        temp.hours = hours + t.hours;
        temp.min = min + t.min;
        temp.sec = sec + t.sec;
        if(temp.sec > 60){
            temp.sec = temp.sec - 60;
            m = 1;
        }
        temp.min = min + t.min+ m;
        if(temp.min > 60){
            temp.min = temp.min - 60;
            h = 1;
        }
        temp.hours = hours + t.hours + h;
        return temp;        
    }
};
int main(){
    Time t1(5,50,40);
    t1.disp();
    Time t2(4, 40, 50);
    t2.disp();
    Time t3 = t1.addtime(t2);
    t3.disp();
    return 0;
}