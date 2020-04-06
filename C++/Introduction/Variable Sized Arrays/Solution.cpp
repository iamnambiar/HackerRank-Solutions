// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q;
    cin>>n>>q;
    vector<vector<int>>a(n);
    for(int i = 0; i < n; ++i) {
        int k;
        cin>>k;
        a[i] = vector<int>(k);
        for(int j = 0; j < k; ++j) {
            int val;
            cin>>val;
            a[i][j] = val;
        }
    }    
    vector<int> b(q);
    for(int i = 0; i < q; ++i) {
        int zeroIndex, firstIndex;
        cin>>zeroIndex>>firstIndex;
        b[i] = a[zeroIndex][firstIndex];
    }
    for(int i =0; i<q; ++i) {
        cout<<b[i]<<"\n";
    }
    return 0;
}
