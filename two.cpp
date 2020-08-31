#include <bits/stdc++.h>
using namespace std;

class two
{
private:
    int year, month, day;

public:
    two() : day(31), month(8), year(2020){};

    void setDate(int x, int y, int z)
    {
        day = x;
        month = y;
        year = z;
    }

    void ShowDate()
    {
        cout << day << " - " << month << " - " << year << "\n";
    }

    int Diff(two d2)
    {
        int total = 0;
        int x = (d2.year - year) * 365;
        int y = (d2.month - month) * 30;
        int z = (d2.day - day) * 1;

        total = abs(x) + abs(y) + abs(z);

        return total;
    }
    int operator-(two);
};

int two::operator-(two d2)
{
    int total = 0;
    int x = (d2.year - year) * 365;
    int y = (d2.month - month) * 30;
    int z = (d2.day - day) * 1;

    total = abs(x) + abs(y) + abs(z);
    return total;
}

int main()
{
    two d1, d2;

    cout << "You want to select date : \n";
    cout << "[1]. Yes\n";
    cout << "[2]. No\n";
    cout << "Enter Your Choice : \n";

    int x;
    cin >> x;

    if (x == 1)
    {
        int a1, b1, c1, a2, b2, c2;

        cout << "Enter First Date\n";
        cout << "Enter Day : \n";
        cin >> a1;

        cout << "Enter Month : \n";
        cin >> b1;

        cout << "Enter Year : \n";
        cin >> c1;

        cout << "Enter Second Date\n";
        cout << "Enter Day : \n";
        cin >> a2;

        cout << "Enter Month : \n";
        cin >> b2;

        cout << "Enter Year : \n";
        cin >> c2;

        d1.setDate(a1, b1, c1);
        d2.setDate(a2, b2, c2);
    }

    cout << "Diffrence between two dates According to First method : ";
    int ans = d1.Diff(d2);
    cout << ans << "\n";

    cout << "Diffrence between two dates According to Second method : ";
    ans = d2 - d1;
    cout << ans << "\n";

    return 0;
}