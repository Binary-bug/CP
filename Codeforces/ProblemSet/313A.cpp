#include<iostream>


using namespace std;


int main(){
	int n;
	cin >> n;
	if(n >= 0) cout << n << endl;
	else{
		n = -1 * n;
		n = min(n / 10, (n/100)*10 + n % 10);
		n = -1 * n;
		cout << n << endl;
	}
	return 0;
}
		
