#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class stu {
public:
    stu() {

    }

    stu(string na, string nu, int sc) {
        name = na;
        num = nu;
        score = sc;
    }

    bool operator < (const stu& s) {
        if(score < s.score) {
            return true;
        } else {
            return false;
        }
    }

    string name;
    string num;
    int score;
};

int main() {
    int n;
    cin >> n;
    stu s[n];

    string name, num;
    int score;
    for(int i = 0; i < n; i++) {
        cin >> name >> num >> score;
        s[i].name = name;
        s[i].num = num;
        s[i].score = score;
    }

    sort(s, s+n);

    cout << s[n-1].name << ' ' << s[n-1].num << endl;
    cout << s[0].name << ' ' << s[0].num << endl;

    return 0;
}