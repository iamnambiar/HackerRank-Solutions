// https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testCase;
    vector<int> integer;
    cin>>testCase;
    for(int i=0; i < testCase; ++i){
        int num;
        cin>>num;
        integer.push_back(num);
    }
    for(int i = 0; i<integer.size(); ++i){
        int count = 0;
        if(integer[i] == 1){
            ++count;            
        }
        else{
            for(int j =2; j*j<=integer[i]; ++j){  
                if(integer[i]%j == 0){                
                    ++count;
                    break;
                }
            }
        }
        
        if(count == 0){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not prime"<<endl;
        }
    }
    return 0;
}
