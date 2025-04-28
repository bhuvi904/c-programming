//using short hand if else 
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter age =";
    cin >> age;
    string result =(age > 18)? "u can vote" : " u cant vote";
    cout << result << "\n";
    return 0;
}
