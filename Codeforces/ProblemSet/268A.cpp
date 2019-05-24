#include<iostream>

using namespace std;

int main(){
	int n,c,b,x=0;
	int h[101]={0};
	int a[101]={0};
	cin >> n;
	while(n--) cin >> c >> b, h[c]++,a[b]++;
	for(int i=1; i < 101; i++) if(h[i]) x += h[i]*a[i];
	cout << x << endl;
	return 0;
}
	
	
