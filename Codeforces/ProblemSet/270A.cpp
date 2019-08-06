#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,i;
		cin >> a;
		for( i = 0; i*(180-a) < 360; i++);
		cout << (i*(180-a) == 360 ? " YES" : "NO " )<< endl;
	}
	return 0;
}
