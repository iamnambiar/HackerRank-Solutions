// https://www.hackerrank.com/challenges/30-nested-logic/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Da, Ma, Ya;
    int De, Me, Ye;
    cin>>Da>>Ma>>Ya;
    cin>>De>>Me>>Ye;
    int fine;
    if(Ya-Ye<0){
        fine = 0;
    }
    else if(Ya-Ye==0){
        if(Ma-Me<=0){
            if(Da-De<=0){
                fine = 0;
            }
            else{
                fine = 15 * (Da-De);
            }
        }
        else{
            fine = 500 * (Ma-Me);
        }
    }
    else{
        fine = 10000;
    }
    cout<<fine<<endl;
    return 0;
}
