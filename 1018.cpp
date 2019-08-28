#include <iostream>
using namespace std;

const char CH[] = {'B', 'C', 'J'};

int main() {
    int n;
    char a, b;
    // b c j
    int wc[3];
    // c j b
    int lc[3];

    for(int i = 0; i < 3; i++) {
        wc[i] = 0;
        lc[i] = 0;
    }

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a == 'B' && b == 'C'){
            wc[0]++;
        } else if(a == 'C' && b == 'J'){
            wc[1]++;
        } else if(a == 'J' && b == 'B'){
            wc[2]++;
        } else if(a == 'C' && b == 'B'){
            lc[0]++;
        } else if(a == 'J' && b == 'C'){
            lc[1]++;
        } else if(a == 'B' && b == 'J'){
            lc[2]++;
        }
    }

    int win = wc[0] + wc[1] + wc[2];
    int lose = lc[0] + lc[1] + lc[2];

    int wa = 0;
    for(int i = 1; i < 3; i++) {
        if(wc[i] > wc[wa]) {
            wa = i;
        }
    }
    int wb = 0;
    for(int i = 1; i < 3; i++) {
        if(lc[i] > lc[wb]) {
            wb = i;
        }
    }


    cout << win << ' ' << n - win - lose << ' ' << lose << endl;
    cout << lose << ' ' << n - win - lose << " " << win << endl;
    cout << CH[wa] << ' ' << CH[wb];

    return 0;
}