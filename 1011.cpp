#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    long a, b, c;
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if(a + b > c) {
            cout << "Case #" << i+1 << ": true" << endl;
        } else {
            cout << "Case #" << i+1 << ": false" << endl;
        }
    }

    return 0;
}