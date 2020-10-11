// https://www.hackerrank.com/challenges/reduced-string/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    if (s.length() == 1) {
        return s;
    }
    for (int index = 1; index < s.length(); ++index) {
        if (s.at(index) == s.at(index - 1)) {
            s = s.substr(0, index - 1) + s.substr(index + 1);
            index = 0;
        }
    }
    if (s.compare("") == 0) {
        s = "Empty String";
    }

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
