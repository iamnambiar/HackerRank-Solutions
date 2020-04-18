// https://www.hackerrank.com/challenges/30-binary-numbers/problem

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int count = 0;
    int temp = 0;
    vector<int> binaryNumber;
    while(n>0){
        int remainder = n % 2;
        binaryNumber.push_back(remainder);
        if(remainder == 1){
            ++temp;
            if(temp > count){
                count = temp;
            }
        }
        else{
            temp = 0;
        }
        n /= 2;
    }
    cout<<count<<endl;
    return 0;
}
