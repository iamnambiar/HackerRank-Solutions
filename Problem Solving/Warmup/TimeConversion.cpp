// https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     stringstream time12(s);
     int hh, mm, ss;
     string mer;
     char sep;
     time12 >> hh >> sep >> mm >> sep >> ss >> mer;
     if (mer.compare("PM") == 0 && hh < 12) {
         hh += 12;
     }
     else if (mer.compare("AM") == 0 && hh == 12) {
         hh -= 12;
     }
     stringstream time24;
     time24 << std::setw(2) << std::setfill('0') << hh << sep;
     time24 << std::setw(2) << std::setfill('0') << mm << sep;
     time24 << std::setw(2) << std::setfill('0') << ss;
     return time24.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
