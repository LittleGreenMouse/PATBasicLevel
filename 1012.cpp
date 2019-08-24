#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;

    vector<int> a1, a2, a3, a4, a5;
    int tmp;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        switch(tmp % 5) {
            case 0:
                if(tmp % 2 == 0) {
                    a1.push_back(tmp);
                }
                break;
            case 1:
                a2.push_back(tmp);
                break;
            case 2:
                a3.push_back(tmp);
                break;
            case 3:
                a4.push_back(tmp);
                break;
            case 4:
                a5.push_back(tmp);
                break;
        }
    }

    if(a1.size() == 0) {
        cout << "N ";
    } else {
        tmp = 0;
        for(size_t i = 0; i < a1.size(); i++) {
            if(a1[i] % 2 == 0) {
                tmp += a1[i];
            }
        }
        cout << tmp << ' ';
    }

    if(a2.size() == 0) {
        cout << "N ";
    } else {
        tmp = 0;
        for(size_t i = 0; i < a2.size(); i++) {
            if(i % 2 == 0) {
                tmp += a2[i];
            } else {
                tmp -= a2[i];
            }
        }
        cout << tmp << ' ';
    }

    if(a3.size() == 0) {
        cout << "N ";
    } else {
        cout << a3.size() << ' ';
    }

    if(a4.size() == 0) {
        cout << "N ";
    } else {
        double avg = 0;
        for(size_t i = 0; i < a4.size(); i++) {
            avg += a4[i];
        }
        avg /= a4.size();
        cout << fixed << setprecision(1) << avg << ' ';
    }

    if(a5.size() == 0) {
        cout << "N";
    } else {
        sort(a5.begin(), a5.end(), cmp);
        cout << a5[0];
    }

    return 0;
}