#include <iostream>
#include <string>
#include <stack>
using namespace std;

const string pin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main() {
    string in;
    cin >> in;
    int sum = 0;
   stack<string> ret; 

    for (int i = 0; i < in.length(); i++) {
        sum += (in[i] - '0');
    }

    int tmp;
    while (sum) {
        tmp = sum % 10;
        ret.push(pin[tmp]);
        sum /= 10;
    }

    string s;
    cout << ret.top();
    ret.pop();
    while(!ret.empty()){
        cout << " " << ret.top();
        ret.pop();
    }

    return 0;
}