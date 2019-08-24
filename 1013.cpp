#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> prime;

int main() {
    int num = 2;
    bool flag;
    while(prime.size() < 10001) {
        flag = true;
        for(int i = 2; i <= sqrt(num); i++) {
            if(num % i == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            prime.push_back(num);
        }
        num++;
    }

    int m, n;
    cin >> m >> n;
    bool blank_flag = false;
    int count = 0;
    for(size_t i = m - 1; i < n; i++) {
        if(blank_flag) {
            cout << ' ';
        }
        cout << prime[i];
        blank_flag = true;
        count ++;
        if(count == 10) {
            cout << endl;
            count = 0;
            blank_flag = false;
        }
    }

    return 0;
}