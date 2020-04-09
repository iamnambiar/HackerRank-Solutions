// https://www.hackerrank.com/challenges/preprocessor-solution/problem

/* Enter your macros here */
#define toStr(Str) #Str
#define io(value) cin>>value
#define FUNCTION(operation,operator) inline void operation(int &num1, int num2) {(num1 operator num2) ?  : num1 = num2;}
#define INF 10000
#define foreach(v, i) for(int i=0; i<v.size(); ++i)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}