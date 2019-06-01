#include<iostream>

using namespace std;

int main(){
	int n,t,x,i;
	cin >> n >> t;
	int a[30005] = {0};
	for(i =0; i++ < n-1; a[i] = i + x) cin >> x;
	for(i=1; a[i] < t;) i = a[i];
	cout << ((a[i] == t)? "YES" : "NO") << endl;
	return 0;
}   
