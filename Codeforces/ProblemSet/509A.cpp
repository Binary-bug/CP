#include<iostream>

using namespace std;



int main(){
	int prev = 1;
	int n;
	cin >> n;
	n = 2*(n - 1);
	int k = n/2;
	for(int i =0; ++i <= k;)  prev = (prev*(n + 1 - i))/i;
	cout << prev << endl;
	return 0;
}
	
		
