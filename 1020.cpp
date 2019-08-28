#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

class bin {
public:
    bin() {}

    bool operator < (const bin& b) {
        return price > b.price;
    }

    double num;
    double val;
    double price;
};

int main() {
    int n,d;
    cin >> n >> d;

    bin b[n];

    for(int i = 0; i < n; i++) {
        cin >> b[i].num;
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i].val;
    }
    for(int i = 0; i < n; i++) {
        b[i].price = b[i].val / b[i].num;
    }

    sort(b, b+n);

    double ret = 0;
    for(int i = 0; i < n; i++) {
        if(d >= b[i].num) {
            ret += b[i].val;
            d -= b[i].num;
        } else {
            ret += b[i].price * d;
            break;
        }
    }

    cout << fixed << setprecision(2) << ret << endl;

    return 0;
}