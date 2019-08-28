#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a;
    int b;
    vector<char> q;
    int r = 0;

    cin >> a >> b;
    
    int qq;
    for(int i = 0; i < a.length(); i++) {
        r += (a[i] - '0');
        qq = r / b;
        if(q.size() == 0) {
            if(qq > 0) {
                q.push_back('0' + qq);
            }
        } else {
            q.push_back('0' + qq);
        }
        r = r % b;
        r *= 10;
    }
    if(q.size() == 0) {
        q.push_back('0');
    }

    for(size_t i = 0; i < q.size(); i++) {
        cout << q[i];
    }
    cout << ' ' << r/10 ;

    return 0;
}