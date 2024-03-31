#include <iostream>
using namespace std;
class Item{
    protected:
    string code;
    double price;
    public:
    Item(){code="nothing"; price=0;}
    Item(string c, double p){
        code = c;
        price = p;
    }
    void display(){
        cout << "Item Code = " << code << endl;
        cout << "Item Price = " << price << endl;
    }
};
class Edible_Oil : public Item {
    protected:
    string brand;
    public:
    Edible_Oil(){}
    Edible_Oil(string c, double p, string b):Item(c, p){
        brand = b;
    }
    void showDet(){
        Item::display();
        cout << "Brand : " << brand << endl;
    }
};
class HealthyYummy : public Item {
    protected:
    string fat, carbohydrate;
    public:
    HealthyYummy(){}
    HealthyYummy(string c, double p, string f, string carb):Item(c, p){
        fat = f;
        carbohydrate = carb;
    }
    void showDet(){
        Item::display();
        cout << "Fat = " << fat << endl;
        cout << "Carbohydrate = " << carbohydrate << endl;
    }
};
class Greeny:public Item {
    protected:
    string rate;
    public:
    Greeny(){}
    Greeny(string c, double p, string r):Item(c, p){
        rate = r; //review wali rating hai ye
    }
    void showDet(){
        Item::display();
        cout << "Rate = " << rate << endl;
    }
};
int main(){
    Edible_Oil e("ITM00067", 145, "Fortune");
    HealthyYummy h("ITM0076", 250, "40", "25");
    Greeny g("ITM00067", 150, "****");
    cout << "Edible Oil Details : " << endl;
    e.showDet();
    cout << "HealtyYummy Details : " << endl;
    h.showDet();
    cout << "Greeny Details : " << endl;
    g.showDet();
}