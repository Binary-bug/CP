#include<iostream>

using namespace std;


bool isprime(int n){
	if (n <= 1) return false;
	
	for(int i=2; i < n ; ++i) if(n % i == 0) return false;
	return true;
}

int main(){
	int n,i;
	cin >> n;
	for(i = 3; i++ < n/2 && (isprime(i) || (isprime(n-i))););
	cout << i << " " << n-i << endl;
	return 0;
}
