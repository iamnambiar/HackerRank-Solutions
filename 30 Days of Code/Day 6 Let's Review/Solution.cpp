// https://www.hackerrank.com/challenges/30-review-loop/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testCase;    
    cin>>testCase;
    string name[testCase];
    for(int index=0; index<testCase; ++index){
        cin>>name[index];
    }
    for(int i=0; i<testCase; ++i){
        string evenIndex, oddIndex;
        for(int j=0; j<name[i].size(); ++j){            
            if(j%2 == 0){
                evenIndex += name[i][j];
            }
            else{
                oddIndex += name[i][j];
            }
        }
        cout<<evenIndex<<" "<<oddIndex<<endl;
    }
    return 0;
}
