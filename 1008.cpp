#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    m = m % n;
    int a[n];

    int tmp;
    for(int i; i < n; i++) {
        cin >> tmp;
        a[i] = tmp;
    }

    bool flag = false;
    for(int i = n-m; i < n; i++) {
        if(flag) {
            cout << ' ';
        }
        cout << a[i];
        flag = true;
    }
    for(int i = 0; i < n-m; i++) {
        if(flag) {
            cout << ' ';
        }
        cout << a[i];
        flag = true;
    }

    return 0;
}