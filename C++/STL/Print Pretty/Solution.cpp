// https://www.hackerrank.com/challenges/prettyprint/problem

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        cout<<hex<<left<<showbase<<nouppercase;
        cout<<(long)A<<endl;
        cout<<dec<<setprecision(2)<<right<<setfill('_')<<setw(15)<<fixed<<showpos;
        cout<<B<<endl;
        cout<<dec<<scientific<<uppercase<<left<<setprecision(9)<<noshowpos;
        cout<<C<<endl;

	}
	return 0;

}