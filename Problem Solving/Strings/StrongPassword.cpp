// https://www.hackerrank.com/challenges/strong-password/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    int digitCount = 0;
    int specialCharacterCount = 0;
    int minValue = 0;
    for (auto it = password.begin(); it != password.end(); ++it) {
        if (isupper(*it)) {
            ++upperCaseCount;
        }
        else if (islower(*it)) {
            ++lowerCaseCount;
        }
        else if (isdigit(*it)) {
            ++digitCount;
        }
        else {
            ++specialCharacterCount;
        }
    }
    minValue = upperCaseCount == 0 ? minValue + 1 : minValue;
    minValue = lowerCaseCount == 0 ? minValue + 1 : minValue;
    minValue = digitCount == 0 ? minValue + 1 : minValue;
    minValue = specialCharacterCount == 0 ? minValue + 1 : minValue;
    if (n + minValue < 6) {
        minValue += 6 - n - minValue;
    }
    return minValue;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
