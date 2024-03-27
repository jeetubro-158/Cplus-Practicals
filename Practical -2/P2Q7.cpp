//Actually this is question no. 6 but int our practical question paper it was mistakenly given 7.

#include <iostream>
#include <conio.h> // For _getch() function
using namespace std;

class tollbooth{
    int cars, cash;
public:
    tollbooth(){
        cars = 0;
        cash = 0;
    }
    int disp(){
        cout << "\nTotal Paid Cars = " << cars << endl;
        cout << "Total Cash Collected = " << cash << endl;
        cout << "\n";
        return 0;
    }
    int display(){
        cout << "Total NON-PAID Cars : " << cars << endl;
    }

    int paid(){
        cars = cars + 1;
        cash = cash + 20;
        return 0;
    }
    int non_paid(){
        cars = cars + 1;
    }

};

int main(){
    tollbooth t1; //for counting paid cars and cash collected.
    tollbooth t2; //for counting non-paid cars.
    char get;
    while (true) {
        cout << "Enter p for paid, n for non-paid, and e or esc to exit: ";
        get = _getch(); // Read a single character without waiting for Enter key
        cout << get << endl; // Print the character (optional)

        if (get == 'P' || get == 'p') {
            t1.paid();
        }
        else if (get == 'N' || get == 'n') {
            t2.non_paid();
        }
        else if (get == 27 || get == 'e') { // Check for escape key (ASCII value 27) or 'e'
            break; // Exit the loop if escape key or 'e' is pressed
        }
        else {
            cout << "Invalid Input, Please enter the input as instructed." << endl;
        }
    }

    t1.disp();
    t2.display();

    return 0;
}
