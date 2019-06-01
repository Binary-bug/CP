#include<iostream>

using namespace std;

int main(){
	long long int n,m,c=0;
	cin >> n >> m;
	long long int a[100001]={0};
	a[0] = 1;
	for(long long int i=0; i++ < m;) cin >> a[i], c+= ((a[i] - a[i-1]) < 0)? (n + a[i] - a[i-1]) : (a[i] - a[i-1]);
	cout << c << endl;
	return 0;
}
