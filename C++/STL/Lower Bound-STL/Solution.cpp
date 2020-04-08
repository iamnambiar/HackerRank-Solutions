// https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    vector<int> vect;
    int Q;
    vector<int>queries;
    cin>>N;
    for(int i = 0; i < N; ++i) {
        int num;
        cin>>num;
        vect.push_back(num);
    }
    cin>>Q;
    for(int i = 0; i < Q; ++i) {
        int num;
        cin>>num;
        queries.push_back(num);
    }

    for(int j = 0; j < queries.size(); ++j) {
        vector<int>::iterator low;
        low = lower_bound(vect.begin(), vect.end(), queries[j]);
        if(vect[low-vect.begin()] == queries[j]) {
            cout<<"Yes "<<low-vect.begin()+1<<endl;
        }
        else {
            cout<<"No "<<low-vect.begin()+1<<endl;
        }
    }
    return 0;
}
