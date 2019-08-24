#include <iostream>
#include <algorithm>
using namespace std;

int flag[101];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int k,n;
    cin >> k;
    int a[k];
    for(int i = 0; i < k; i++) {
        cin >> n;
        a[i] = n;
        while(n != 1) {
            if(n % 2 != 0) {
                n = 3 * n + 1;
            }
            n = n / 2;
            if(n <= 100) {
                flag[n] = 1;
            }
        }
    }

    sort(a, a+k, cmp);

    bool f = false;
    for(int i = 0; i < k; i++) {
        if(flag[a[i]] == 0) {
            if(f) {
                cout << ' ';
            }
            cout << a[i];
            f = true;
        }
    }

    return 0;
}