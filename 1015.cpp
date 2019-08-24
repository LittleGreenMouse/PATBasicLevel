#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class stu {
public:
    stu() {}
    
    stu(string n, int d, int c) {
        num = n;
        de = d;
        cai = c;
    }

    bool operator < (const stu& s) {
        int cmp1 = de + cai - s.de - s.cai;
        if(cmp1 > 0){
            return true;
        } else if(cmp1 < 0) {
            return false;
        } else {
            int cmp2 = de - s.de;
            if(cmp2 > 0) {
                return true;
            } else if(cmp2 < 0) {
                return false;
            } else {
                return num < s.num;
            }
        }
    }

    string toString(){
        return num + ' ' + to_string(de) + ' ' + to_string(cai);
    }

    string num;
    int de;
    int cai;
};

vector<stu> tt, tf, ffd, ff;

int main() {
    int n, l, h;
    cin >> n >> l >> h;

    string num;
    int de, cai;
    for(int i = 0; i < n; i++) {
        cin >> num >> de >> cai;
        if(de >= h && cai >= h) {
            tt.push_back(stu(num, de, cai));
        } else if(de >= h && cai >= l) {
            tf.push_back(stu(num, de, cai));
        } else if(de >= l && cai >= l && de >= cai) {
            ffd.push_back(stu(num, de, cai));
        } else if(de >= l && cai >= l) {
            ff.push_back(stu(num, de, cai));
        }
    }

    sort(tt.begin(), tt.end());
    sort(tf.begin(), tf.end());
    sort(ffd.begin(), ffd.end());
    sort(ff.begin(), ff.end());

    cout << tt.size() + tf.size() + ffd.size() + ff.size() << endl;
    for(size_t i = 0; i < tt.size(); i++) {
        cout << tt[i].toString() << endl;
    }
    for(size_t i = 0; i < tf.size(); i++) {
        cout << tf[i].toString() << endl;
    }
    for(size_t i = 0; i < ffd.size(); i++) {
        cout << ffd[i].toString() << endl;
    }
    for(size_t i = 0; i < ff.size(); i++) {
        cout << ff[i].toString() << endl;
    }

    return 0;
}