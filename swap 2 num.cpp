#include <iostream>
using namespace std;
 int main() {
    int a;
    int b;
    int temp;
    cout << "enter a = ";
    cin >> a;
    cout << "enter b = " ;
    cin >> b;
    temp = a;
    a = b;
    b = temp;
     cout << "a is " << a  << "\n" <<"b is " << b << "\n";
    return 0;


 }
