#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[3];
    for(int i = 0; i < 3; i++) {
        a[i] = n % 10;
        n /= 10;
    }

    for(int i = 0; i < a[2]; i++) {
        cout << 'B';
    }
    for(int i = 0; i < a[1]; i++) {
        cout << 'S';
    }
    for(int i = 1; i <= a[0]; i++) {
        cout << i;
    }

    return 0;
}