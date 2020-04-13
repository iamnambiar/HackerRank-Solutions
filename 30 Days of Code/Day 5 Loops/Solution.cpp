// https://www.hackerrank.com/challenges/30-loops/problem

#include <bits/stdc++.h>

using namespace std;

void findMultiples(int number){
    for(int val = 1; val <= 10; ++val){
        cout<<number<<" x "<<val<<" = "<<number*val<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    findMultiples(n);
    return 0;
}
