#include <iostream>
#include <string>
using namespace std;

class Time {
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int h, int m, int s) {
            hour = h;
            minute = m;
            second = s;
        }
        int getHour() { return hour; }
        int getMinute() { return minute; }
        int getSecond() { return second; }
        void setHour(int h) { hour = h; }
        void setMinute(int m) { minute = m; }
        void setSecond(int s) { second = s; }
        void print() {
            cout << hour << ":" << minute << ":" << second << endl;
        }
};

int main(){
    int  h, m, s;
    do {
        cout << "Enter hour: ";
        cin >> h;
    } while (h < 0 || h > 11);
    do {
        cout << "Enter minute: ";
        cin >> m;
    } while(m < 0 || m > 59);
    do {
        cout << "Enter second: ";
        cin >> s;
    } while(s < 0 || s > 59);

    Time t(h, m, s);

    cout << endl;
    t.print();

    cout << endl;
    return 0;
}