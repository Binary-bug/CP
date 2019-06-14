#include<iostream>


using namespace std;


int main(){
	int n,k;
	cin >> n >> k;
	k = 240 - k;
	int i=1;
	while(k >= 5*i && i <= n){ k -= (5*i); i++;}
	cout << --i  << endl;
	return 0;
}
