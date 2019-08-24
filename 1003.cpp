#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string in;
    size_t pos_p, pos_t; 
    bool flag;
    for (int i = 0; i < n; i++) {
        cin >> in;
        flag = true;

        pos_p = in.find("P");
        pos_t = in.find("T");
        if (pos_p == in.npos || pos_t == in.npos) {
            cout << "NO" << endl;
            continue;
        }
        if (pos_t - pos_p == 1) {
            cout << "NO" << endl;
            continue;
        }
        
        int count = 0;
        for(size_t i = pos_p + 1; i < pos_t; i++) {
            if (in[i] == 'A') {
                count++;
            } else {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if(!flag)   continue;

        if((in.length() - pos_t - 1) >= (count * pos_p)) {
            for(size_t i = 0; i < pos_p; i++) {
                if(in[i] != 'A') {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            if(!flag)   continue;
            for(size_t i = pos_t + 1; i < in.length(); i++) {
                if(in[i] != 'A') {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
            continue;
        }
    }

    return 0;
}