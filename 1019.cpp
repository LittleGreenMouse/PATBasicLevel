#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int left, right;
    while (true) {
        int c[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        left = 0;
        right = 0;
        
        int count = 4;
        while(n) {
            c[n % 10] ++;
            count --;
            n /= 10;
        }
        c[0] = count;

        count = 3;
        for(int i = 9; i >= 0; i--) {
            while(c[i]) {
                int tmp1 = i;
                int tmp2 = i;
                for(int j = 0; j < count; j++) {
                    tmp1 *= 10;
                }
                for(int j = 0; j < 3 - count; j++) {
                    tmp2 *= 10;
                }
                count--;
                left += tmp1;
                right += tmp2;
                c[i]--;
            }
        }

        n = left - right;
        cout << setw(4) << setfill('0') << left << " - " << setw(4) << setfill('0') << right << " = " << setw(4) << setfill('0') << n << endl;
       
        if(n == 6174 || n == 0) {
            break;
        }
    }

    return 0;
}