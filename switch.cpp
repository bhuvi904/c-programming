#include <iostream>
using namespace std;
int main() {
    int enter;
    cout << "enter =";
    cin >> enter;
    switch (enter){
        case 1:
            cout << "mon";
            break;
        case 2:
            cout << "tue";
            break;
        case 3:
            cout << "wed";
            break;
        case 4:
            cout << "thu";
            break;
        case 5:
            cout << "fri";
            break;
        case 6:
            cout << "sat";
            break;
        default :// when we give input more than 6 it gives the op as nxt week
            
            cout << "nxt week ";
            
    }
    return 0;
}
