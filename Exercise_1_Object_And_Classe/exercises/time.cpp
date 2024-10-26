#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        setTime(h, m, s);
    }

    void setTime(int h, int m, int s) {
        if (h >= 0 && h <= 23) {
            hour = h;
        } else {
            throw invalid_argument("Часът трябва да бъде между 0 и 23.");
        }

        if (m >= 0 && m <= 59) {
            minute = m;
        } else {
            throw invalid_argument("Минути трябва да бъдат между 0 и 59.");
        }

        if (s >= 0 && s <= 59) {
            second = s;
        } else {
            throw invalid_argument("Секундите трябва да бъдат между 0 и 59.");
        }
    }

    void print24HourFormat() const {
        cout << setfill('0') << setw(2) << hour << ":"
             << setw(2) << minute << ":"
             << setw(2) << second << endl;
    }

    void print12HourFormat() const {
        int hour12 = hour;
        string period = "AM";

        if (hour >= 12) {
            period = "PM";
            if (hour > 12) {
                hour12 -= 12;
            }
        } else if (hour == 0) {
            hour12 = 12;
        }

        cout << setfill('0') << setw(2) << hour12 << ":"
             << setw(2) << minute << ":"
             << setw(2) << second << " " << period << endl;
    }
};

int main() {
    try {
        Time time(13, 24, 7);

        cout << "Формат 24 часа: ";
        time.print24HourFormat();

        cout << "Формат 12 часа: ";
        time.print12HourFormat();
    }
    catch (const invalid_argument& e) {
        cout << "Грешка: " << e.what() << endl;
    }

    return 0;
}
