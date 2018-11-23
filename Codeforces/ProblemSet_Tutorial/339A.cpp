#include<iostream>
#include<map>

using namespace std;


int main(){
	map<int,int> counters;
	int n;
	char k;
	while(cin >> n  && cin >> k) ++counters[n];
	if(counters[1]) {cout << 1; counters[1]--;}
	else if(counters[2]) {cout << 2; counters[2]--;}
	else {cout << 3; counters[3]--;}
	while(counters[1]--) cout << "+" << 1;
	while(counters[2]--) cout << "+" << 2;
	while(counters[3]--) cout << "+" << 3;
	cout << endl;
	return 0;
}
