// voting age using if else
#include <iostream>
using namespace std;
int main() {
    int myage;
    int votingage=18;
    cout << "my age =";
    cin >> myage;
    if(myage>=votingage){
        cout << "u can vote" << "\n";
    }
    else {
        cout << "u can't" <<"\n";
    }
    return 0;
}
