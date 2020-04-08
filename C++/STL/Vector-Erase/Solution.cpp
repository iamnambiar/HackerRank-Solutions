// https://www.hackerrank.com/challenges/vector-erase/problem

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
    cin>>N;
    for(int i = 0; i < N; ++i) {
        int num;
        cin>>num;
        vect.push_back(num);
    }    
    int rmvNum;
    cin>>rmvNum;
    vect.erase(vect.begin()+rmvNum-1);
    int rmvA, rmvB;
    cin>>rmvA>>rmvB;
    vect.erase(vect.begin()+rmvA-1, vect.begin()+rmvB-1);

    cout<<vect.size()<<endl;
    for(int i = 0; i < vect.size(); ++i) {
        cout<<vect[i]<<" ";
    }
    return 0;
}
