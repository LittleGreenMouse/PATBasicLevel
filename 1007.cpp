#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prime;

    for(int i = 2; i <= n; i++) {
        bool flag = true;
        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            prime.push_back(i);
        }
    }

    int ret = 0;
    for(size_t i = 1; i < prime.size(); i++) {
        if(prime[i] - prime[i-1] == 2){
            ret++;
        }
    }
    cout << ret << endl;

    return 0;
}