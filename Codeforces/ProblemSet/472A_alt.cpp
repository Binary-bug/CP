#include<iostream>

using namespace std;


int main(){
	int n,a=9,b=8;
	cin >> n;
	(n % 2) ? (cout << n-9 << " 9") : (cout << n-8 << " 8");
	return 0;
}
