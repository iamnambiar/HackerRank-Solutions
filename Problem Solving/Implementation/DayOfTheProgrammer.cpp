// https://www.hackerrank.com/challenges/day-of-the-programmer/problem

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    stringstream date;
    if (year >= 1919) {
        // Julian Calendar
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
            // Leap Year
            date<<"12.09."<<year;
        }
        else {
            date<<"13.09."<<year;
        }
    }
    else if (year <= 1917) {
        // Gregorian Calendar
        if (year % 4 == 0) {
            // Leap year
            date<<"12.09."<<year;
        }
        else {
            date<<"13.09."<<year;
        }
    }
    else {
        // Transition
        date<<"26.09."<<year;
    }
    return date.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
