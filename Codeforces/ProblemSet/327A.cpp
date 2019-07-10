#include<iostream>

using namespace std;


int main(){
	int n,ones=0,i,j,a,b;
	cin >> n;
	int a[123]={0};
	int b[123]={0};
	int c[123]={0};
	int val = 0;
	for(i=1; i <= n; i++){
		cin >> val;
		if(val) ones++;
		a[i] = val;
	}
	for(i=1; i <=n ; i++) b[i] = b[i-1] + a[i];
	for(j=n; j > 0 ; j--) b[
	 
	
        
}
