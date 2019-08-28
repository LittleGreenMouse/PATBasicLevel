#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    char da, db;
    cin >> a >> da >> b >> db;

    int count_a = 0, count_b = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == da) {
            count_a++;
        }
    }
    for(int i = 0; i < b.length(); i++) {
        if(b[i] == db) {
            count_b++;
        }
    }

    unsigned int pa = 0, pb = 0;
    for(int i = 0; i < count_a; i++) {
        pa *= 10;
        pa++;
    }
    pa *= (da - '0');
    for(int i = 0; i < count_b; i++) {
        pb *= 10;
        pb++;
    }
    pb *= (db- '0');

    cout << pa + pb << endl;

    return 0;
}