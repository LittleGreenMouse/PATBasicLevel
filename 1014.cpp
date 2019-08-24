#include <iostream>
#include <string>
using namespace std;

string get_day(char ch) {
    string ret;
    switch (ch) {
        case 'A':
            ret = "MON";
            break;
        case 'B':
            ret = "TUE";
            break;
        case 'C':
            ret = "WED";
            break;
        case 'D':
            ret = "THU";
            break;
        case 'E':
            ret = "FRI";
            break;
        case 'F':
            ret = "SAT";
            break;
        case 'G':
            ret = "SUN";
            break;
    }
    return ret;
}

int get_hour(char ch) {
    int ret;
    switch (ch) {
        case '0':
            ret = 0;
            break;
        case '1':
            ret = 1;
            break;
        case '2':
            ret = 2;
            break;
        case '3':
            ret = 3;
            break;
        case '4':
            ret = 4;
            break;
        case '5':
            ret = 5;
            break;
        case '6':
            ret = 6;
            break;
        case '7':
            ret = 7;
            break;
        case '8':
            ret = 8;
            break;
        case '9':
            ret = 9;
            break;
        case 'A':
            ret = 10;
            break;
        case 'B':
            ret = 11;
            break;
        case 'C':
            ret = 12;
            break;
        case 'D':
            ret = 13;
            break;
        case 'E':
            ret = 14;
            break;
        case 'F':
            ret = 15;
            break;
        case 'G':
            ret = 16;
            break;
        case 'H':
            ret = 17;
            break;
        case 'I':
            ret = 18;
            break;
        case 'J':
            ret = 19;
            break;
        case 'K':
            ret = 20;
            break;
        case 'L':
            ret = 21;
            break;
        case 'M':
            ret = 22;
            break;
        case 'N':
            ret = 23;
            break;
    }
    return ret;
}

int main() {
    string in1, in2, in3, in4;
    cin >> in1 >> in2 >> in3 >> in4;

    string day;
    int hour;

    int len1 = in1.length() > in2.length() ? in2.length() : in1.length();
    int i;
    for(i = 0; i < len1; i++) {
        if(in1[i] == in2[i] && in1[i] >= 'A' && in1[i] <= 'G') {
                day = get_day(in1[i]);
                break;
        }
    }

    int count = 2;
    for(i; i < len1 && count > 0; i++) {
        if(in1[i] == in2[i] && (in1[i] >= '0' && in1[i] <= '9' || in1[i] >= 'A' && in1[i] <= 'N')){
            count--;
            if(count == 1) {
                continue;
            } else if(count == 0) {
                hour = get_hour(in1[i]);
            }
        }
    }

    int min;
    int len2 = in3.length() > in4.length() ? in4.length() : in3.length();
    for(int i = 0; i < len2; i++) {
        if(in3[i] == in4[i] && (in3[i] >= 'a' && in3[i] <= 'z' || in3[i] >= 'A' && in3[i] <= 'Z')) {
            min = i;
        }
    }

    cout << day << ' ';
    if(hour < 10) {
        cout << '0' << hour;
    } else {
        cout << hour;
    }
    cout << ':';
    if(min < 10) {
        cout << '0' << min;
    } else {
        cout << min;
    }

    return 0;
}