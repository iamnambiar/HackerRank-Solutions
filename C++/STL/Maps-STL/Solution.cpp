// https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q;
    map<string, int> m; 
    cin>>Q;
    for(int i = 0; i < Q; ++i) {
        int checkQuery;
        string name;
        cin>>checkQuery>>name;
        if(checkQuery == 1) {            
            int mark;
            cin>>mark;
            m[name]+=mark;
        }
        else if(checkQuery == 2) {
            m.erase(name);
        }
        else if(checkQuery == 3) {
            map<string, int>::iterator itr = m.find(name);
            if(itr != m.end()) {
                cout<<m[name]<<endl;
            }
            else {
                int mark = 0;
                cout<<mark<<endl;
            }
        }
    }
    return 0;
}



