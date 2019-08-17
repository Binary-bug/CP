#include<iostream>

using namespace std;


int main(){
	int n,mx=0;
	cin >> n;
	int a[2345];
	for(int i =0; i++ < n; ) cin >> a[i];
	for(int i = 1; i <= n; i++){
		int count = 1;
		for(int j = i ; a[j] != -1;){
			j = a[j];
			count++;
		}
		mx = max(mx,count);
	}	
	cout << mx << endl;
	return 0;
}
