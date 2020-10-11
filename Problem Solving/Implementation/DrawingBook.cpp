// https://www.hackerrank.com/challenges/drawing-book/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
    
    // From front
    int pageCountFromFront = (p / 2);
    // From Back
    int pageCountFromBack;
    if (n % 2 == 0) {
        pageCountFromBack = ((n - p + 1) / 2);
    }
    else {
        pageCountFromBack = ((n - p) / 2);
    }
    return std::min(pageCountFromFront, pageCountFromBack);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
