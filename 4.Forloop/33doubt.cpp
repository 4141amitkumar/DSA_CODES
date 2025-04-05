#include <iostream>
using namespace std;
int main() {
int x;
for (x = 0; x <= 255; x++) {
cout << "Ascii value of Character " << (char)('a' + x) ;
cout << " is " << x << endl;
}
}