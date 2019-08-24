# include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    int ret = 0;

    while(input != 1) {
        if(input % 2 != 0) {
            input = 3 * input + 1;
        }
        input /= 2;
        ret ++;
    }

    cout << ret << endl;

    return 0;
}