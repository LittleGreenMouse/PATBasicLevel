#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> in;

    int tmp;
    while(cin >> tmp) {
        in.push_back(tmp);
    }

    bool zero_flag = true;
    bool blank_flag = false;
    for(size_t i = 0; i <= in.size()/2; i++) {
        in[2*i] = in[2*i] * in[2*i+1];
        in[2*i+1]--;
        if(in[2*i+1] >= 0) {
            if(blank_flag) {
                cout << ' ';
            }
            cout << in[2*i] << ' ' << in[2*i+1];
            blank_flag = true;
            zero_flag = false;
        }
    }

    if(zero_flag) {
        cout << "0 0";
    }

    return 0;
}