#include <iostream>
using namespace std;
class Route{
    private:
    int distance;
    public:
    Route(){}
    Route(int d){ distance = d;}
    void disp(){
        cout << "Distance = " << distance << endl;
    }
    bool operator ==(Route r){
        if(distance == r.distance)
        return true;
        else
        return false;        
    }
    bool operator >(Route r){
        if(distance > r.distance)
        return true;
        else
        return false;        
    }
};

int main(){
    Route r1(67), r2(67);
    cout << "Route-1 "; r1.disp();
    cout << "Route-2 "; r2.disp();
    if(r1 == r2){
        cout << "Both the routes cover same distance.\n";
    } else if(r1 > r2){
        cout << "Route-1 is longer than route-2.";
    } else {
        cout << "Route-2 is longer than route-1.";
    }
    return 0;
}