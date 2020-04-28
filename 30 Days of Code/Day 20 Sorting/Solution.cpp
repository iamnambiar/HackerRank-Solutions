// https://www.hackerrank.com/challenges/30-sorting/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int numSwaps = 0;
    for(int i=0; i<a.size(); ++i){
        int temp = 0;
        for(int j=0; j<a.size()-1; ++j){
            if(a[j]>a[j+1]){
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
                ++temp;
                ++numSwaps;
            }
        }
        if(temp==0){
            break;
        }
    }
    cout<<"Array is sorted in "<<numSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[a.size()-1]<<endl;
    return 0;
}