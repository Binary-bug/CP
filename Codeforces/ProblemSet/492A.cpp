#include<iostream>


using namespace std;


int main(){
	int n,h;
	cin >> n;
	n = 6*n;
	h = 1;
	while( h * (h+1) * (h+2) <= n) h++;
	cout << h -1 << endl;	
	return 0;
}
