// https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, string> phoneBook;
    int noofEntries;
    cin>>noofEntries;
    for(int entry=0; entry < noofEntries; ++entry){
        string name, phoneNumber;
        cin>>name>>phoneNumber;
        phoneBook.insert(pair<string, string>(name, phoneNumber));
    }
    while(!cin.eof()){
        string name;
        cin>>name;
        map<string,string>::iterator it;
        it = phoneBook.find(name);
        if(it != phoneBook.end()){
            cout<<name<<"="<<phoneBook[name]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}