#include<iostream>
#define PRIME 1000000007


using namespace std;


int main(){
	int T,N;
	cin >> T;
	unsigned long long int res = 1;
	long long int factorial[1000002]={0};
	factorial[0]=factorial[1]=1;
	for(int i=2; i < 1000002 ; i++) factorial[i] = (i * factorial[i-1]) % PRIME;
	while(T--){
	cin >> N;
	res = factorial[N+1];
	cout << (((res % PRIME) - (1 % PRIME)) % PRIME) << endl;
	}
	return 0;
} 
