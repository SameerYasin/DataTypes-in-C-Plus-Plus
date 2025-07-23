// SAMEER YASIN
// 24070124092
// ENTC B1
#include<iostream>
#include<string>
using namespace std;
int main(){
    // Integer number input
    int a;
    cout << "Please enter an Integer number: " << endl;
    cin >> a;
    cout << "The Integer is " << a << " and its size is " << sizeof(a) << " bytes.\n";

    // Float number input
    float b;
    cout << "Please enter a Float number: " << endl;
    cin >> b;
    cout << "The Float is " << b << " and its size is " << sizeof(b) << " bytes.\n";

    // Double number input
    double c;
    cout << "Please enter a Double number: " << endl;
    cin >> c;
    cout << "The Double is " << c << " and its size is " << sizeof(c) << " bytes.\n";

    // Character input
    char d;
    cout << "Please enter a Character: " << endl;
    cin >> d;
    cout << "The Character is " << d << " and its size is " << sizeof(d) << " bytes.\n";

    // String input
    string e;
    cout << "Please enter a String: " << endl;
    cin >> e;
    cout << "The String is " << e << " and its size is " << sizeof(e) << " bytes.\n";

    // Boolean input
    bool f;
    cout << "Please enter a Boolean value (True or False): ";
    cin >> f;
    cout << "The Boolean value is " << f << " and its size is " << sizeof(f) << " bytes.\n";

    // Short integer value input
    short g;
    cout << "Please enter a Short Integer number: " << endl;
    cin >> g;
    cout << "The Short integer value is " << g << " and its size is " << sizeof(g) << " bytes.\n";

    // Long integer value input
    long h;
    cout << "Please enter a Long Integer value: " << endl;
    cin >> h;
    cout << "The long integer value is " << h << " and its size is " << sizeof(h) << " bytes.\n";

    return 0;
}

/* Sample Output:
Please enter an Integer number: 
15
The Integer is 15 and its size is 4 bytes.
Please enter a Float number: 
3.14
The Float is 3.14 and its size is 4 bytes.
Please enter a Double number: 
9876543210
The Double is 9.87654e+09 and its size is 8 bytes.
Please enter a Character: 
z
The Character is z and its size is 1 byte.
Please enter a String: 
SAMEER
The String is SAMEER and its size is 32 bytes.
Please enter a Boolean value (True or False): 
1
The Boolean value is 1 and its size is 1 byte.
Please enter a Short Integer number: 
789
The Short integer value is 789 and its size is 2 bytes.
Please enter a Long Integer value: 
123456789012
The long integer value is 123456789012 and its size is 8 bytes.
*/
