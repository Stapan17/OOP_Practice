#include <bits/stdc++.h>
using namespace std;

class Date1
{
private:
    int day, month, year;

public:
    Date1(int x, int y, int z)
    {
        day = x;
        month = y;
        year = z;
    }

    int TotDays()
    {
        int total = 0, y;
        int x = (year)*365;

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            y = month * 31;
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            y = month * 30;
        else
        {
            if (year % 4 == 0)
                y = 29 * month;
            else
                y = 28 * month;
        }

        int z = (day)*1;

        total = abs(x) + abs(y) + abs(z);

        return total;
    }

    void ShowDate()
    {
        cout << day << "-" << month << "-" << year << "\n";
    }
};

class Date2
{
private:
    int day, year;
    string month;

public:
    Date2(int x, string y, int z)
    {
        day = x;
        month = y;
        year = z;
    }

    int TotDays()
    {
        int total = 0;
        int x = (year)*365;
        int z = (day)*1;
        int y;

        if (month == "January")
            y = 31 * 1;
        else if (month == "February")
        {
            if (year % 4 == 0)
                y = 29 * 2;
            else
                y = 28 * 2;
        }
        else if (month == "March")
            y = 31 * 3;
        else if (month == "April")
            y = 31 * 4;
        else if (month == "May")
            y = 31 * 5;
        else if (month == "June")
            y = 31 * 6;
        else if (month == "July")
            y = 31 * 7;
        else if (month == "August")
            y = 31 * 8;
        else if (month == "September")
            y = 31 * 9;
        else if (month == "October")
            y = 31 * 10;
        else if (month == "November")
            y = 31 * 11;
        else if (month == "December")
            y = 31 * 12;

        total = abs(x) + abs(z) + abs(y);

        return total;
    }

    void ShowDate()
    {
        cout << day << "-" << month << "-" << year << "\n";
    }
};

int main()
{

    int a1, b1, c1, a2, c2;
    string b2;

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

    Date1 d1(a1, b1, c1);
    Date2 d2(a2, b2, c2);

    int total_Days_D1 = d1.TotDays();
    int total_Days_D2 = d2.TotDays();

    cout << "\nFirst Date is : \n";
    d1.ShowDate();
    cout << "\nSecond Date is : \n";
    d2.ShowDate();

    cout << "\nDiffrence between two Date is : ";
    cout << abs(total_Days_D1 - total_Days_D2) << "\n";

    return 0;
}
/*

jan 31  1
feb 28            2
mar 31  3
april 30           4
may 31  5 
june 30            6
july 31  7 
aug 31  8 
sep 30              9
oct 31  10
nov 30             11
dec 31   12

*/