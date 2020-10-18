// https://www.hackerrank.com/challenges/camelcase/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int wordCount = 0;
    int index = 0;
    while(s[index]) {
        if (isupper(s[index])) {
            ++wordCount;
        }
        ++index;
    }
    return ++wordCount;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
