// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    set<int> s;
    cin>>Q;
    for(int i = 0; i < Q; ++i) {
        int check;
        int num;
        cin>>check>>num;
        if(check == 1) {
            s.insert(num);
        }
        else if(check == 2) {
            s.erase(num);
        }
        else if(check == 3) {
            set<int>::iterator itr = s.find(num);
            if(itr == s.end()) {
                cout<<"No"<<endl;
            }
            else {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}



