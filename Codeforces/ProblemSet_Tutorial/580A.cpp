#include<iostream>
#include<algorithm>

using namespace std;

int N=100008;

int main(){
	int a[N]={0},k,o=0,i,j,n;
	cin >> n;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	k=1;
	for(i=1;i<n;i++) if(a[i]>=a[i-1])k++; else o=max(o,k),k=1;
	o = max(o,k);
	cout << o;
	return 0;
}
