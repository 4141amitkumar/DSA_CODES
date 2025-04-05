#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long odd, even;
        if (k%2== 0) {
            odd = k / 2;
            even = k / 2;
        } else {
            odd = (n % 2 == 0) ? (k / 2) : (k / 2 + 1);
            even = (k - odd);
        }
        if (odd % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
