#include<iostream>


using namespace std;


int main(){
	int n,x;
	unsigned long long int a[123456]={0};
	unsigned long long int boredom[123456]={0};
	cin >> n;
	for(int i=0; i++ < n;a[x]++) cin >> x;
	boredom[1] = a[1];
	for(int i=2; i <= 123456; i++) boredom[i] = max(boredom[i-1],i*a[i] + boredom[i-2]);
	cout << boredom[123455] << endl;
	return 0;
}
