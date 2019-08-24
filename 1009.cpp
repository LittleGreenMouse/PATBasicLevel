#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack<string> s;

    string in;
    while(cin >> in){
        s.push(in);
    }

    bool flag = false;
    while(!s.empty()) {
        if(flag) {
            cout << ' ';
        }
        cout << s.top();
        s.pop();
        flag = true;
    }

    return 0;
}